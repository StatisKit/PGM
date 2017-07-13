#include "process.h"

namespace statiskit
{
    namespace pgm
    {
        UndirectedGraphProcess::~UndirectedGraphProcess()
        {}

        double UndirectedGraphProcess::pdf(const UndirectedGraph* graph) const
        { return exp(ldf(graph)); }

        ErdosRenyiUndirectedGraphProcess::ErdosRenyiUndirectedGraphProcess(const Index& nb_vertices, const double& pi)
        {
            _nb_vertices = nb_vertices;
            _pi = pi;
        }

        ErdosRenyiUndirectedGraphProcess::ErdosRenyiUndirectedGraphProcess(const ErdosRenyiUndirectedGraphProcess& distribution)
        {
            _nb_vertices = distribution._nb_vertices;
            _pi = distribution._pi;
        }

        ErdosRenyiUndirectedGraphProcess::~ErdosRenyiUndirectedGraphProcess()
        {}

        double ErdosRenyiUndirectedGraphProcess::ldf(const UndirectedGraph* graph) const
        {
            double p;
            if(graph)
            {
                if(graph->get_nb_vertices() == _nb_vertices)
                {
                    Index nb_edges = graph->get_nb_edges();
                    p = nb_edges * log(_pi) + ((_nb_vertices * (_nb_vertices - 1 ))/ 2 - nb_edges) *  log(1. - _pi);
                }
                else
                { p = -1 * std::numeric_limits< double >::infinity(); }
            }
            else
            { p = 0.; }
            return p;
        }

        std::unique_ptr< UndirectedGraph > ErdosRenyiUndirectedGraphProcess::simulate() const
        { 
            std::unique_ptr< UndirectedGraph > graph = std::make_unique< UndirectedGraph >(_nb_vertices);
            for(Index u = 1; u < _nb_vertices; ++u)
            {
                for(Index v = 0; v < u; ++v)
                {
                    if(boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())() < _pi)
                    { graph->add_edge(u, v); }
                }
            }
            return std::move(graph);
        }

        Index ErdosRenyiUndirectedGraphProcess::get_nb_vertices() const
        { return _nb_vertices; }

        void ErdosRenyiUndirectedGraphProcess::set_nb_vertices(const Index& nb_vertices)
        { _nb_vertices = nb_vertices; }

        double ErdosRenyiUndirectedGraphProcess::get_pi() const
        { return _pi; }

        void ErdosRenyiUndirectedGraphProcess::set_pi(const double& pi)
        { _pi = pi; }

        MixtureUndirectedGraphProcess::VariationalComputation::VariationalComputation() : Optimization()
        {
            #if defined STATISKIT_PGM_HAS_OPENMP
            _nb_jobs = omp_get_num_procs();
            #endif
        }

        MixtureUndirectedGraphProcess::VariationalComputation::VariationalComputation(const VariationalComputation& computation) : Optimization(computation)
        {
            #if defined STATISKIT_PGM_HAS_OPENMP
            _nb_jobs = computation._nb_jobs;
            #endif
        }

        MixtureUndirectedGraphProcess::VariationalComputation::~VariationalComputation()
        {}

        #if defined STATISKIT_PGM_HAS_OPENMP
        unsigned int MixtureUndirectedGraphProcess::VariationalComputation::get_nb_jobs() const
        { return _nb_jobs; }

        void MixtureUndirectedGraphProcess::VariationalComputation::set_nb_jobs(const unsigned int& nb_jobs)
        { _nb_jobs = nb_jobs; }
        #endif

        double MixtureUndirectedGraphProcess::VariationalComputation::ldf(const MixtureUndirectedGraphProcess& mixture, const UndirectedGraph* graph) const
        { return ldf(posterior(mixture, graph, true)); }

        std::vector< Eigen::VectorXd > MixtureUndirectedGraphProcess::VariationalComputation::posterior(const MixtureUndirectedGraphProcess& mixture, const UndirectedGraph* graph, const bool& logarithm) const
        { 
            Index nb_states = mixture.get_nb_states();
            Eigen::VectorXd alpha = mixture._alpha;
            std::vector< Eigen::VectorXd > tau(graph->get_nb_vertices(), alpha);
            Eigen::MatrixXd p = mixture._pi, q = mixture._pi;
            for(Index su = 0; su < nb_states; ++su)
            { alpha[su] = log(alpha[su]); }
            for(Index su = 0; su < nb_states; ++su)
            {
                for(Index sw = 0; sw < nb_states; ++sw)
                {
                    p(su, sw) = log(p(su, sw));
                    q(su, sw) = log(1. - q(su, sw)); 
                }
            }
            unsigned int its = 0;
            double delta;
            do
            {
                delta = 0;
                for(Index u = 0, v = graph->get_nb_vertices(); u < v; ++u)
                {
                    Eigen::VectorXd _tau = alpha;
                    for(Index su = 0; su < nb_states; ++su)
                    {
                        for(Index w = 0; w < v; ++w)
                        { 
                            if(w != u)
                            {
                                bool edge = graph->has_edge(u, w);
                                for(Index sw = 0; sw < nb_states; ++sw)
                                {
                                    if(edge)
                                    { _tau[su] += tau[w][sw] * p(su, sw); }
                                    else
                                    { _tau[su] += tau[w][sw] * q(su, sw); }
                                }
                            }
                        }
                    }
                    double max = _tau.maxCoeff(), sum = 0.;
                    for(Index index = 0, max_index = tau[u].size(); index < max_index; ++index)
                    {
                        if(boost::math::isfinite(tau[u][index]))
                        { _tau[index] = _tau[index] - max; }
                        _tau[index] = exp(_tau[index]);
                        sum += _tau[index];
                    }
                    _tau = _tau / sum;
                    delta += __impl::reldiff(tau[u], _tau);
                    tau[u] = _tau;
                }
                delta /= graph->get_nb_vertices();
                ++its;
            } while(run(its, delta));
            if(logarithm)
            {
                for(Index u = 0, v = tau.size(); u < v; ++u)
                {
                    for(Index index = 0, max_index = tau[u].size(); index < max_index; ++index)
                    { tau[u][index] = log(tau[u][index]); }
                }
            }
            return tau;
        }

        std::vector< Index > MixtureUndirectedGraphProcess::VariationalComputation::assignment(const MixtureUndirectedGraphProcess& mixture, const UndirectedGraph* graph) const
        { 
            std::vector< Eigen::VectorXd > tau = posterior(mixture, graph);
            std::vector< Index > indices(tau.size());
            Eigen::Index row;
            for(Index u = 0, v = tau.size(); u < v; ++u)
            {
                tau[u].maxCoeff(&row);
                { indices[u] = row; }
            }
            return indices;
        }

        double MixtureUndirectedGraphProcess::VariationalComputation::ldf(const std::vector< Eigen::VectorXd >& tau) const
        { 
            double p = 0.;
            for(Index u = 0, v = tau.size(); u < v; ++u)
            {
                for(Index w = 0; w < u; ++w)
                {
                    for(Index su = 0; su < tau[u].size(); ++su)
                    {
                        if(boost::math::isfinite(tau[u][su]))
                        {
                            for(Index sw = 0; sw < tau[w].size(); ++sw)
                            {
                                if(boost::math::isfinite(tau[w][sw]))
                                { p += tau[u][su] + tau[w][sw]; }
                            }
                        }
                    }
                }
            }
            return p;
        }

        MixtureUndirectedGraphProcess::MixtureUndirectedGraphProcess(const Index& nb_vertices, const Index& nb_states)
        {
            _computation = new VariationalComputation();
            _nb_vertices = nb_vertices;
            _alpha = Eigen::VectorXd::Ones(nb_states) / double(nb_states);
            _pi = 0.5 * Eigen::MatrixXd::Ones(nb_states, nb_states);
        }

        MixtureUndirectedGraphProcess::MixtureUndirectedGraphProcess(const MixtureUndirectedGraphProcess& distribution)
        {
            if( distribution._computation)
            { _computation = distribution._computation->copy().release(); }
            else
            { _computation = nullptr; }
            _nb_vertices = distribution._nb_vertices;
            _alpha = distribution._alpha;
            _pi = distribution._pi;
        }

        MixtureUndirectedGraphProcess::~MixtureUndirectedGraphProcess()
        {
            if(_computation)
            {
                delete _computation;
                _computation = nullptr;
            }
        }

        double MixtureUndirectedGraphProcess::ldf(const UndirectedGraph* graph) const
        {
            double p;
            if(graph)
            {
                if(_computation)
                { p = _computation->ldf(*this, graph); }
                else
                { throw member_error("_computation", "not given"); }
            }
            else
            { p = 0.; }
            return p;
        }

        std::unique_ptr< UndirectedGraph > MixtureUndirectedGraphProcess::simulate() const
        { 
            std::unique_ptr< UndirectedGraph > graph = std::make_unique< UndirectedGraph >(_nb_vertices);
            std::vector< Index > states(_nb_vertices);
            Index max_index = get_nb_states(), v = _nb_vertices;
            for(Index u = 0; u < v; ++u)
            {
                Index index = 0;
                double cp = _alpha[index], sp = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
                while(cp < sp && index < max_index)
                {
                    ++index;
                    cp += _alpha[index];
                }
                states[u] = index;
            }
            for(Index u = 0; u < v; ++u)
            {
                for(Index w = 0; w < u; ++w)
                {
                    if(boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())() < _pi(states[u], states[w]))
                    { graph->add_edge(u, w); }
                }
            }
            return std::move(graph);
        }

        Index MixtureUndirectedGraphProcess::get_nb_states() const
        { return _alpha.size(); }

        const MixtureUndirectedGraphProcess::Computation* MixtureUndirectedGraphProcess::get_computation() const
        { return _computation; }

        void MixtureUndirectedGraphProcess::set_computation(const Computation* computation)
        {
            delete _computation;
            if(_computation)
            { _computation = computation->copy().release(); }
        }

        Index MixtureUndirectedGraphProcess::get_nb_vertices() const
        { return _nb_vertices; }

        void MixtureUndirectedGraphProcess::set_nb_vertices(const Index& nb_vertices)
        { _nb_vertices = nb_vertices; }

        const Eigen::VectorXd& MixtureUndirectedGraphProcess::get_alpha() const
        { return _alpha; }

        void MixtureUndirectedGraphProcess::set_alpha(const Eigen::VectorXd& alpha)
        {
            if(alpha.size() != _alpha.size())
            { throw size_error("alpha", _alpha.size(), size_error::equal); }
            _alpha = alpha / alpha.sum();
        }

        const Eigen::MatrixXd& MixtureUndirectedGraphProcess::get_pi() const
        { return _pi; }

        void MixtureUndirectedGraphProcess::set_pi(const Eigen::MatrixXd& pi)
        {
            if(pi.rows() != _pi.rows() || pi.cols() != _pi.cols())
            { throw std::runtime_error("matrix"); }
            for(Index u = 0, v = get_nb_states(); u < v; ++u)
            {
                for(Index w = 0; w < v; ++w)
                { 
                    if(pi(u, w) < 0. || pi(u, w) > 1.)
                    { throw std::runtime_error("matrix"); }
                }
            }
            for(Index u = 0, v = get_nb_states(); u < v; ++u)
            {
                _pi(u, u) = pi(u, u);
                for(Index w = 0; w < u; ++w)
                {
                    _pi(u, w) = (pi(u, w) + pi(w, u))/2.;
                    _pi(w, u) = _pi(u, w);
                }
            }
        }

        std::vector< Eigen::VectorXd > MixtureUndirectedGraphProcess::posterior(const UndirectedGraph* graph, const bool& logarithm) const
        { 
            std::vector< Eigen::VectorXd > tau;
            if(_computation)
            { tau = _computation->posterior(*this, graph, logarithm); }
            else
            { throw member_error("_computation", "not given"); }
            return tau;
        }

        std::vector< Index > MixtureUndirectedGraphProcess::assignment(const UndirectedGraph* graph) const
        { 
            std::vector< Index > indices;
            if(_computation)
            { indices = _computation->assignment(*this, graph); }
            else
            { throw member_error("_computation", "not given"); }
            return indices;
        }
    }
}