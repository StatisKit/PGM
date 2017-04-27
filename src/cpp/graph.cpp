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

    bool UndirectedGraph::are_neighbours(const Index& u, const Index& v) const
    { return _adjacency[u].find(v) != _adjacency[u].end(); }

    Index UndirectedGraph::degree(const Index& u) const
    { return _adjacency[u].size(); }

    const Neighbours& UndirectedGraph::neighbours(const Index& u) const
    { return _adjacency[u]; }

    bool UndirectedGraph::is_clique(const Indices& u) const
    {
        bool clique = true;
        Indices::const_iterator it_u = u.cbegin(), it_u_end = u.cend();
        while(clique && it_u != it_u_end)
        {
            Indices::const_iterator it_v = u.cbegin();
            while(clique && it_v != it_u)
            {
                clique = are_neighbours(*it_u, *it_v);
                ++it_v;
            }
            ++it_u;
        }
        return clique;
    }

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

    // std::vector< Index > traversal(const traversal_type& algorithm) const
    // {
    //     std::vector< Index > vertices = std::vector< Index >();
    //     Neighbours non_colored, colored;
    //     switch(algorithm)
    //     {
    //         case DFS:
    //             throw not_implemented_error("traversal");
    //             break;
    //         case BFS:
    //             throw not_implemented_error("traversal");
    //             break;
    //         case MCS:
    //             throw not_implemented_error("traversal");
    //             break;
    //     }
    //     return vertices;
    // }


    bool UndirectedGraph::is_chordal() const
    {
        bool chordal = true;
        // Neighbours non_colored, colored;
        // for(Index u = 0, v = get_nb_vertices(); u < v; ++u)
        // { non_colored.insert(u); }
        // while(non_colored.size() > 0)
        // {
        //     v = alphainv[i];
        //     follower[v] = v;
        //     index[v] = i;
        //     vertices_type::const_iterator ite;
        //     for(ite = cbegin(v); ite != cend(v); ++ite)
        //     {
        //         if(alpha[*ite] < i)
        //         {
        //             index[*ite] = i;
        //             if(follower[*ite] == *ite)
        //             { follower[*ite] = v; }
        //         }
        //     }
        //     ite = cbegin(v);
        //     while(ite != cend(v) && chordal)
        //     {
        //         if(alpha[*ite] < i && index[follower[*ite]] < i)
        //         { chordal = false; }
        //         ++ite;
        //     }
        //     ++i;
        // }
        throw not_implemented_error("is_chordal");
        return chordal;
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

    UndirectedForest::UndirectedForest(const Index& vertices) : UndirectedGraph(vertices)
    {}

    UndirectedForest::UndirectedForest(const Eigen::MatrixXd& adjacency) : UndirectedGraph(adjacency.rows())
    {
        Eigen::MatrixXd scores = adjacency;
        Index nb_edges = 0, max_nb_edges = get_nb_vertices() - 1;
        while(nb_edges < max_nb_edges)
        {
            Eigen::MatrixXd::Index row, col;
            double min = scores.minCoeff(&row, &col);
            try
            {
                add_edge(row, col);
                ++nb_edges;
                scores(row, col) = std::numeric_limits< double >::infinity();
            }
            catch(const std::exception& e)
            {}
        }
    }

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

    bool UndirectedForest::is_clique(const Indices& u) const
    { return u.size() == 2 && are_neighbours(*(u.cbegin()), *(u.crbegin())); }

    bool UndirectedForest::is_chordal() const
    { return true; }
}