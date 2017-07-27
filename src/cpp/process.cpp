#include "process.h"

namespace statiskit
{
    namespace pgm
    {
        UndirectedGraphProcess::RandomWalk::~RandomWalk()
        {}

        void UndirectedGraphProcess::RandomWalk::operator() (const unsigned int& length)
        {
            for(unsigned int index = 0; index < length; ++index)
            { (*this)(); }
        }

        UndirectedGraphProcess::FreeRandomWalk::ChordalRandomWalk::ChordalRandomWalk(const FreeRandomWalk& walk)
        { 
            _walk = static_cast< FreeRandomWalk* >(walk.copy().release());
            _unique = false;
            _maxits = 10000;
        }

        UndirectedGraphProcess::FreeRandomWalk::ChordalRandomWalk::ChordalRandomWalk(const ChordalRandomWalk& walk)
        { 
            _walk = static_cast< FreeRandomWalk* >(walk._walk->copy().release());
            _unique = walk._unique;
            _maxits = walk._maxits;
        }

        UndirectedGraphProcess::FreeRandomWalk::ChordalRandomWalk::~ChordalRandomWalk()
        {
            if(_walk)
            {
                delete _walk;
                _walk = nullptr;
            }
        }

        void UndirectedGraphProcess::FreeRandomWalk::ChordalRandomWalk::operator() ()
        {
            if(_unique)
            {
                std::unique_ptr< UndirectedGraph > graph = _walk->_graph->copy();
                (*_walk)();
                unsigned int its = 0;
                while(its < _maxits && !(_walk->_graph->is_chordal()))
                {
                    _walk->_graph = graph.release();
                    (*_walk)();
                    ++its;
                }
                if(its == _maxits && !(_walk->_graph->is_chordal()))
                { throw std::runtime_error("simulation failed"); }
            }
            else
            { 
                std::unique_ptr< UndirectedGraph > graph = _walk->_graph->copy();
                (*_walk)();
                if(!(_walk->_graph->is_chordal()))
                { _walk->_graph = graph.release(); }
            }
            return ;
        }

        const UndirectedGraph* UndirectedGraphProcess::FreeRandomWalk::ChordalRandomWalk::get_graph() const
        { return _walk->get_graph(); }

        void UndirectedGraphProcess::FreeRandomWalk::ChordalRandomWalk::set_graph(const UndirectedGraph& graph)
        {
            if(!graph.is_chordal())
            { throw parameter_error("graph", "should be chordal"); }
            _walk->set_graph(graph);
        }

        bool UndirectedGraphProcess::FreeRandomWalk::ChordalRandomWalk::get_unique() const
        { return _unique; }

        void UndirectedGraphProcess::FreeRandomWalk::ChordalRandomWalk::set_unique(const bool& unique)
        { _unique = unique; }

        unsigned int UndirectedGraphProcess::FreeRandomWalk::ChordalRandomWalk::get_maxits() const
        { return _maxits; }

        void UndirectedGraphProcess::FreeRandomWalk::ChordalRandomWalk::set_maxits(const unsigned int& maxits)
        { _maxits = maxits; }

        UndirectedGraphProcess::FreeRandomWalk::ConnectedRandomWalk::ConnectedRandomWalk(const FreeRandomWalk& walk)
        { 
            _walk = static_cast< FreeRandomWalk* >(walk.copy().release());
            _unique = false;
            _maxits = 10000;
        }

        UndirectedGraphProcess::FreeRandomWalk::ConnectedRandomWalk::ConnectedRandomWalk(const ConnectedRandomWalk& walk)
        { 
            _walk = static_cast< FreeRandomWalk* >(walk._walk->copy().release());
            _unique = walk._unique;
            _maxits = walk._maxits;
        }

        UndirectedGraphProcess::FreeRandomWalk::ConnectedRandomWalk::~ConnectedRandomWalk()
        {
            if(_walk)
            {
                delete _walk;
                _walk = nullptr;
            }
        }

        void UndirectedGraphProcess::FreeRandomWalk::ConnectedRandomWalk::operator() ()
        {
            if(_unique)
            {
                std::unique_ptr< UndirectedGraph > graph = _walk->_graph->copy();
                (*_walk)();
                unsigned int its = 0;
                while(its < _maxits && !(_walk->_graph->is_chordal()))
                {
                    _walk->_graph = graph.release();
                    (*_walk)();
                    ++its;
                }
                if(its == _maxits && !(_walk->_graph->is_chordal()))
                { throw std::runtime_error("simulation failed"); }
            }
            else
            { 
                std::unique_ptr< UndirectedGraph > graph = _walk->_graph->copy();
                (*_walk)();
                if(!(_walk->_graph->is_chordal()))
                { _walk->_graph = graph.release(); }
            }
            return ;
        }

        const UndirectedGraph* UndirectedGraphProcess::FreeRandomWalk::ConnectedRandomWalk::get_graph() const
        { return _walk->get_graph(); }

        void UndirectedGraphProcess::FreeRandomWalk::ConnectedRandomWalk::set_graph(const UndirectedGraph& graph)
        {
            if(!graph.is_connected())
            { throw parameter_error("graph", "should be chordal"); }
            _walk->set_graph(graph);
        }

        bool UndirectedGraphProcess::FreeRandomWalk::ConnectedRandomWalk::get_unique() const
        { return _unique; }

        void UndirectedGraphProcess::FreeRandomWalk::ConnectedRandomWalk::set_unique(const bool& unique)
        { _unique = unique; }

        unsigned int UndirectedGraphProcess::FreeRandomWalk::ConnectedRandomWalk::get_maxits() const
        { return _maxits; }

        void UndirectedGraphProcess::FreeRandomWalk::ConnectedRandomWalk::set_maxits(const unsigned int& maxits)
        { _maxits = maxits; }

        UndirectedGraphProcess::FreeRandomWalk::FreeRandomWalk()
        { _graph = nullptr; }

        UndirectedGraphProcess::FreeRandomWalk::~FreeRandomWalk()
        {
            if(_graph)
            {
                delete _graph;
                _graph = nullptr;
            }
        }

        const UndirectedGraph* UndirectedGraphProcess::FreeRandomWalk::get_graph() const
        { return _graph; }

        void UndirectedGraphProcess::FreeRandomWalk::set_graph(const UndirectedGraph& graph)
        { 
            if(_graph)
            {
                delete _graph;
                _graph = nullptr;
            }
            _graph = graph.copy().release(); 
        }

        UndirectedGraphProcess::~UndirectedGraphProcess()
        {}

        double UndirectedGraphProcess::pdf(const UndirectedGraph* graph) const
        { return exp(ldf(graph)); }

        std::unique_ptr< UndirectedGraphProcess::RandomWalk > UndirectedGraphProcess::random_walk(const walk_type& walk) const
        {
            std::unique_ptr< RandomWalk > random_walk = free_random_walk();
            switch(walk)
            {
                case FREE:
                    break;
                case CHORDAL:
                    random_walk = std::make_unique< FreeRandomWalk::ChordalRandomWalk >(*(static_cast< FreeRandomWalk* >(random_walk.get())));
                    break;
                case CONNECTED:
                    {
                        UndirectedGraph* graph = random_walk->get_graph()->copy().release();
                        for(Index u = 0, max_u = graph->get_nb_vertices(); u < max_u; ++u)
                        {
                            for(Index v = 0; v < u; ++v)
                                { graph->add_edge(u, v); }
                        }
                        random_walk->set_graph(*graph);
                        delete graph;
                        random_walk = std::make_unique< FreeRandomWalk::ChordalRandomWalk >(*(static_cast< FreeRandomWalk* >(random_walk.get())));
                    }
                    break;
                default:
                    throw not_implemented_error("random_walk");
            }
            return random_walk;
        }

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

        ErdosRenyiUndirectedGraphProcess::FreeRandomWalk::FreeRandomWalk(const ErdosRenyiUndirectedGraphProcess* process) : PolymorphicCopy< RandomWalk, FreeRandomWalk, UndirectedGraphProcess::FreeRandomWalk >()
        { 
            _process = process;
            _graph = new UndirectedGraph(_process->_nb_vertices);
        }

        ErdosRenyiUndirectedGraphProcess::FreeRandomWalk::FreeRandomWalk(const FreeRandomWalk& walk) : PolymorphicCopy< RandomWalk, FreeRandomWalk, UndirectedGraphProcess::FreeRandomWalk >(walk)
        { 
            _process = walk._process;
            _graph = walk._graph->copy().release();
        }

        ErdosRenyiUndirectedGraphProcess::FreeRandomWalk::~FreeRandomWalk()
        {}

        void ErdosRenyiUndirectedGraphProcess::FreeRandomWalk::operator() ()
        {
            if(_process->_nb_vertices > 1)
            {
                int s, t;
                if(_process->_nb_vertices > 2)
                { 
                    boost::random::uniform_int_distribution<> S(1, _process->_nb_vertices - 1);
                    s = boost::variate_generator<boost::mt19937&, boost::random::uniform_int_distribution<> >(__impl::get_random_generator(), S)();
                    boost::random::uniform_int_distribution<> T(0, s - 1);
                    t = boost::variate_generator<boost::mt19937&, boost::random::uniform_int_distribution<> >(__impl::get_random_generator(), T)();
                }
                else
                {
                    s = 0;
                    t = 1;
                }
                double u = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
                if(_graph->has_edge(s, t))
                { 
                    if(u < (1. - _process->_pi) / _process->_pi)
                    { _graph->remove_edge(s, t); }
                }
                else
                {
                    if(u < _process->_pi / (1. - _process->_pi))
                    { _graph->add_edge(s, t); }
                }
            }
        }

        std::unique_ptr< UndirectedGraphProcess::FreeRandomWalk > ErdosRenyiUndirectedGraphProcess::free_random_walk() const
        { return std::make_unique< FreeRandomWalk >(this); }

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

        MixtureUndirectedGraphProcess::FreeRandomWalk::FreeRandomWalk(const MixtureUndirectedGraphProcess* process) : PolymorphicCopy< RandomWalk, FreeRandomWalk, UndirectedGraphProcess::FreeRandomWalk >()
        { 
            _process = process;
            _graph = new UndirectedGraph(_process->_nb_vertices);
            _labels = std::vector< Index >(_process->_nb_vertices, 0);
            Eigen::VectorXd alpha = _process->_alpha;
            // for(Index index = 1, max_index = alpha.size(); index < max_index; ++index)
            // { alpha(index) += alpha(index - 1); }
            // alpha /= alpha[alpha.size() - 1];
            boost::uniform_01<> E;
            boost::variate_generator<boost::mt19937&, boost::uniform_01<> > simulator(__impl::get_random_generator(), E);
            for(Index u = 0; u < _process->_nb_vertices; ++u)
            {
                Index index = 0;
                double cp = alpha[index], sp = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
                while(cp < sp && index < _process->get_nb_states())
                {
                    ++index;
                    cp += alpha[index];
                }
                _labels[u] = index;
            }
        }

        MixtureUndirectedGraphProcess::FreeRandomWalk::FreeRandomWalk(const FreeRandomWalk& walk) : PolymorphicCopy< RandomWalk, FreeRandomWalk, UndirectedGraphProcess::FreeRandomWalk >(walk)
        { 
            _process = walk._process;
            _graph = walk._graph->copy().release();
            _labels = walk._labels;
        }

        MixtureUndirectedGraphProcess::FreeRandomWalk::~FreeRandomWalk()
        {}

        void MixtureUndirectedGraphProcess::FreeRandomWalk::operator() ()
        {
            if(_process->_nb_vertices > 1)
            {
                int s, t;
                if(_process->_nb_vertices > 2)
                { 
                    boost::random::uniform_int_distribution<> S(1, _process->_nb_vertices - 1);
                    s = boost::variate_generator<boost::mt19937&, boost::random::uniform_int_distribution<> >(__impl::get_random_generator(), S)();
                    boost::random::uniform_int_distribution<> T(0, s - 1);
                    t = boost::variate_generator<boost::mt19937&, boost::random::uniform_int_distribution<> >(__impl::get_random_generator(), T)();
                }
                else
                {
                    s = 0;
                    t = 1;
                }
                double u = boost::uniform_01<boost::mt19937&>(__impl::get_random_generator())();
                if(_graph->has_edge(s, t))
                { 
                    if(u < (1. - _process->_pi(_labels[s], _labels[t])) / _process->_pi(_labels[s], _labels[t]))
                    { _graph->remove_edge(s, t); }
                }
                else
                {
                    if(u < _process->_pi(_labels[s], _labels[t]) / (1. - _process->_pi(_labels[s], _labels[t])))
                    { _graph->add_edge(s, t); }
                }
            }
        }

        const std::vector< Index >& MixtureUndirectedGraphProcess::FreeRandomWalk::get_labels() const
        { return _labels; }

        std::unique_ptr< UndirectedGraphProcess::FreeRandomWalk > MixtureUndirectedGraphProcess::free_random_walk() const
        { return std::make_unique< FreeRandomWalk >(this); }
    }
}