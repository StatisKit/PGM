#include "distribution.h"

namespace statiskit
{
    UndirectedGraphDistribution::~UndirectedGraphDistribution()
    {}

    double UndirectedGraphDistribution::pdf(const UndirectedGraph* graph) const
    { return exp(ldf(graph)); }

    ErdosRenyiUndirectedGraphDistribution::ErdosRenyiUndirectedGraphDistribution(const Index& nb_vertices, const double& pi)
    {
        _nb_vertices = nb_vertices;
        _pi = pi;
    }

    ErdosRenyiUndirectedGraphDistribution::ErdosRenyiUndirectedGraphDistribution(const ErdosRenyiUndirectedGraphDistribution& distribution)
    {
        _nb_vertices = distribution._nb_vertices;
        _pi = distribution._pi;
    }

    ErdosRenyiUndirectedGraphDistribution::~ErdosRenyiUndirectedGraphDistribution()
    {}

    double ErdosRenyiUndirectedGraphDistribution::ldf(const UndirectedGraph* graph) const
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

    std::unique_ptr< UndirectedGraph > ErdosRenyiUndirectedGraphDistribution::simulate() const
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

    Index ErdosRenyiUndirectedGraphDistribution::get_nb_vertices() const
    { return _nb_vertices; }

    void ErdosRenyiUndirectedGraphDistribution::set_nb_vertices(const Index& nb_vertices)
    { _nb_vertices = nb_vertices; }

    double ErdosRenyiUndirectedGraphDistribution::get_pi() const
    { return _pi; }

    void ErdosRenyiUndirectedGraphDistribution::set_pi(const double& pi)
    { _pi = pi; }

    MixtureUndirectedGraphDistribution::MixtureUndirectedGraphDistribution(const Index& nb_vertices, const Index& nb_states)
    {
        _nb_vertices = nb_vertices;
        _alpha = Eigen::VectorXd::Ones(nb_states) / double(nb_states);
        _pi = 0.5 * Eigen::MatrixXd::Ones(nb_states, nb_states);
    }

    MixtureUndirectedGraphDistribution::MixtureUndirectedGraphDistribution(const MixtureUndirectedGraphDistribution& distribution)
    {
        _nb_vertices = distribution._nb_vertices;
        _alpha = distribution._alpha;
        _pi = distribution._pi;
    }

    MixtureUndirectedGraphDistribution::~MixtureUndirectedGraphDistribution()
    {}

    double MixtureUndirectedGraphDistribution::ldf(const UndirectedGraph* graph) const
    {
        double p;
        if(graph)
        {
            p = 0.;
        }
        else
        { p = 0.; }
        return p;
    }

    std::unique_ptr< UndirectedGraph > MixtureUndirectedGraphDistribution::simulate() const
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

    Index MixtureUndirectedGraphDistribution::get_nb_vertices() const
    { return _nb_vertices; }

    void MixtureUndirectedGraphDistribution::set_nb_vertices(const Index& nb_vertices)
    { _nb_vertices = nb_vertices; }

    Index MixtureUndirectedGraphDistribution::get_nb_states() const
    { return _alpha.size(); }

    const Eigen::VectorXd& MixtureUndirectedGraphDistribution::get_alpha() const
    { return _alpha; }

    void MixtureUndirectedGraphDistribution::set_alpha(const Eigen::VectorXd& alpha)
    {
        if(alpha.size() != _alpha.size())
        { throw size_error("alpha", _alpha.size(), size_error::equal); }
        _alpha = alpha / alpha.sum();
    }

    const Eigen::MatrixXd& MixtureUndirectedGraphDistribution::get_pi() const
    { return _pi; }

    void MixtureUndirectedGraphDistribution::set_pi(const Eigen::MatrixXd& pi)
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
}