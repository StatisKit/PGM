#include "graph.h"

namespace statiskit
{
    UndirectedGraph::UndirectedGraph(const Index& vertices)
    { _adjacency.resize(vertices, Neighbours()); }

    UndirectedGraph::UndirectedGraph(const Eigen::MatrixXd& adjacency) : UndirectedGraph(adjacency.rows())
    {
        if(adjacency.cols() != _adjacency.size())
        { throw std::runtime_error("non square matrix"); }
        Index nb_vertices = get_nb_vertices();
        for(Index u = 0; u < nb_vertices; ++u)
        {
            for(Index v = 0; v < u; ++v)
            {
                if(adjacency(u, v) + adjacency(v, u) != 0.)
                { add_edge(u, v); }
            }
        }
    }

    UndirectedGraph::UndirectedGraph(const UndirectedGraph& graph)
    { _adjacency = graph._adjacency; }

    UndirectedGraph::~UndirectedGraph()
    {}

    Index UndirectedGraph::get_nb_vertices() const
    { return _adjacency.size(); }

    Index UndirectedGraph::get_nb_edges() const
    { 
        Index nb_edges = 0;
        for(Index u = 0, v = get_nb_vertices(); u < v; ++u)
        { nb_edges += _adjacency[u].size(); }
        nb_edges /= 2;
        return nb_edges;
    }

    bool UndirectedGraph::has_edge(const Index& u, const Index& v) const
    { return _adjacency[u].find(v) != _adjacency[u].end(); }

    void UndirectedGraph::add_edge(const Index& u, const Index& v)
    {
        Neighbours::iterator it_u = _adjacency[u].find(v), it_v = _adjacency[v].find(u);
        if(u != v && it_u == _adjacency[u].end() && it_v == _adjacency[v].end())
        {
            _adjacency[u].insert(v);
            _adjacency[v].insert(u);
        }
        else
        { throw std::runtime_error("edge already present"); }
    }

    void UndirectedGraph::remove_edge(const Index& u, const Index& v)
    {
        Neighbours::iterator it_u = _adjacency[u].find(v), it_v = _adjacency[v].find(u);
        if(u != v && it_u != _adjacency[u].end() && it_v != _adjacency[v].end())
        {
            _adjacency[u].erase(it_u);
            _adjacency[v].erase(it_v);
        }
        else
        { throw std::runtime_error("edge not present"); }
    }

    Index UndirectedGraph::degree(const Index& u) const
    { return _adjacency[u].size(); }

    const Neighbours& UndirectedGraph::neighbours(const Index& u) const
    { return _adjacency[u]; }

    bool UndirectedGraph::are_connected(const Indices& u, const Indices& v) const
    { 
        Neighbours visited = Neighbours();
        return are_connected(u, v, visited);
    }

    bool UndirectedGraph::are_separated(const Indices& u, const Indices& v, const Indices& w) const
    { 
        Neighbours visited = Neighbours(w.cbegin(), w.cend());
        return !are_connected(u, v, visited);
    }

    std::vector< Index > UndirectedGraph::maximum_cardinality_search() const
    {
        std::vector< Index > rank(get_nb_vertices()), w(get_nb_vertices(), 1);
        Neighbours non_colored;
        for(Index u = 0, v = get_nb_vertices(); u < v; ++u)
        { non_colored.insert(non_colored.end(), u); }
        while(non_colored.size() > 0)
        {
            Index u = distance(w.begin(), std::max_element(w.begin(), w.end()));
            rank[u] = non_colored.size() - 1;
            for(Neighbours::const_iterator it = non_colored.begin(), it_end = non_colored.end(); it != it_end; ++it)
            {
                if(has_edge(u, *it))
                { w[*it] += 1; }
            }
            w[u] = 0;
            Neighbours::iterator it = non_colored.find(u);
            non_colored.erase(it);
        }
        return rank;
    }

    bool UndirectedGraph::is_chordal() const
    {
        bool chordal = true;
        std::vector< Index > ordering = rank_to_ordering(maximum_cardinality_search());
        ordering = std::vector< Index >(ordering.rbegin(), ordering.rend());
        Neighbours colored;
        Index u = 0, v = get_nb_vertices();
        while(chordal && u < v)
        {
            Index w = ordering[u];
            Neighbours ne = neighbours(w);
            Neighbours::const_iterator it = colored.begin(), it_end = colored.end();
            while(ne.size() > 0 && it != it_end)
            {
                Neighbours::iterator it_ne = ne.find(*it);
                if(it_ne != ne.end())
                { ne.erase(it_ne); }
                ++it;
            }
            if(ne.size() > 1)
            { chordal = is_clique(ne); }
            colored.insert(w);
            ++u;
        }
        return chordal;
    }

    PropertyGraph< UndirectedForest, Indices, Indices > UndirectedGraph::junction_tree() const
    {
        std::vector< Indices > cliques;
        {
            Indices r, p, x;
            for(Index u = 0, v = get_nb_vertices(); u < v; ++u)
            { p.insert(p.end(), u); }
            bron_kerbosch(cliques, r, p, x);
        }
        Eigen::MatrixXd adjacency = Eigen::MatrixXd::Zero(cliques.size(), cliques.size());
        std::vector< std::vector< Indices > > intersections(cliques.size() - 1);
        for(Index u = 1, v = cliques.size(); u < v; ++u)
        {
            intersections[u - 1] = std::vector< Indices >(u, Indices());
            for(Index w = 0; w < u; ++w)
            {
                std::set_intersection(cliques[w].begin(), cliques[w].end(), cliques[u].cbegin(), cliques[v].cend(), std::inserter(intersections[u - 1][w], intersections[u - 1][w].begin()));
                adjacency(w, u) = intersections[u - 1][w].size();
            }
        }
        PropertyGraph< UndirectedForest, Indices, Indices > junction_tree = PropertyGraph< UndirectedForest, Indices, Indices >(adjacency);
        junction_tree.set_vertex_property(0, cliques[0]);
        for(Index u = 1, v = cliques.size(); u < v; ++u)
        {
            const Neighbours& ne = junction_tree.neighbours(u);
            junction_tree.set_vertex_property(u, cliques[u]);
            Neighbours::const_iterator it = ne.cbegin(), it_end = ne.cend();
            while(it != it_end && *it < u)
            {
                junction_tree.set_edge_property(*it, u, intersections[u - 1][*it]);
                ++it;
            }
        }
        return junction_tree;
    }
    
    bool UndirectedGraph::are_connected(const Indices& u, const Indices& v, Neighbours& visited) const
    {
        Indices w = Indices();
        bool connected = false;
        Indices::const_iterator it_u = u.cbegin(), it_u_end = u.cend();
        while(!connected && it_u != it_u_end)
        {
            if(visited.find(*it_u) == visited.end())
            {
                visited.insert(*it_u);
                connected = v.find(*it_u) != v.end();
                Neighbours::const_iterator it_v = _adjacency[*it_u].cbegin(), it_v_end = _adjacency[*it_u].cend();
                while(!connected && it_v != it_v_end)
                {
                    if(visited.find(*it_v) == visited.end())
                    { 
                        connected = v.find(*it_v) != v.end();
                        w.insert(*it_v);
                    }
                     ++it_v;
                }
            }
            ++it_u;
        }
        if(!connected && w.size() > 0)
        { connected = are_connected(w, v, visited); }
        return connected;
    }

    std::vector< Index > UndirectedGraph::rank_to_ordering(const std::vector< Index >& rank)
    {
        std::vector< Index > ordering(rank.size());
        for(Index u = 0, v = ordering.size(); u < v; ++u)
        { ordering[rank[u]] = u;  }
        return ordering;
    }

    std::vector< Index > UndirectedGraph::ordering_to_rank(const std::vector< Index >& ordering)
    { return rank_to_ordering(ordering); }

    void UndirectedGraph::bron_kerbosch(std::vector< Indices >& cliques, const Indices& r, Indices p, Indices x) const
    {
        if(p.size() == 0 && x.size() == 0)
        { cliques.push_back(r); }
        else
        {
            Indices rn, pn, xn;
            while(p.size() > 0)
            {
                Indices::const_iterator itv = p.begin();
                rn = r;
                rn.insert(*itv);
                pn.clear();
                Indices ne = Indices(_adjacency[*itv].cbegin(), _adjacency[*itv].cend());
                std::set_intersection(p.begin(), p.end(), ne.cbegin(), ne.cend(), std::inserter(pn, pn.begin()));
                xn.clear();
                std::set_intersection(x.begin(), x.end(), ne.cbegin(), ne.cend(), std::inserter(xn, xn.begin()));
                bron_kerbosch(cliques, rn, pn, xn);
                x.insert(*itv);
                p.erase(itv);
            }
        }
    }

    UndirectedForest::UndirectedForest(const Index& vertices) : UndirectedGraph(vertices)
    {}

    UndirectedForest::UndirectedForest(const Eigen::MatrixXd& adjacency) : UndirectedGraph(adjacency.rows())
    {
        Eigen::MatrixXd scores = adjacency;
        Index nb_edges = 0, max_nb_edges = get_nb_vertices() - 1;
        while(nb_edges < max_nb_edges)
        {
            Eigen::MatrixXd::Index row, col;
            double max = scores.maxCoeff(&row, &col);
            if(max > 0.0)
            {
                try
                {
                    add_edge(row, col);
                    ++nb_edges;
                }
                catch(const std::exception& e) {}
                scores(row, col) = -1.0;
           }
           else
           { ++nb_edges; }
        }
    }

    UndirectedForest::UndirectedForest(const UndirectedForest& graph) : UndirectedGraph(graph)
    {}

    UndirectedForest::~UndirectedForest()
    {}

    void UndirectedForest::add_edge(const Index& u, const Index& v)
    {
        Indices uu, vv;
        uu.insert(u);
        vv.insert(v);
        if(!are_connected(uu, vv))
        { UndirectedGraph::add_edge(u, v); }
        else
        { throw std::runtime_error("already connected"); }
    }

    bool UndirectedForest::is_chordal() const
    { return true; }
}