#include "graph.h"

namespace statiskit
{
    namespace pgm
    {
        UndirectedGraph::UndirectedGraph(const Index& vertices)
        { _neighbours.resize(vertices, Adjacency()); }

        UndirectedGraph::UndirectedGraph(const Eigen::MatrixXd& matrix) : UndirectedGraph(matrix.rows())
        {
            if(matrix.cols() != _neighbours.size())
            { throw std::runtime_error("non square matrix"); }
            Index nb_vertices = get_nb_vertices();
            for(Index u = 0; u < nb_vertices; ++u)
            {
                for(Index v = 0; v < u; ++v)
                {
                    if(matrix(u, v) + matrix(v, u) != 0.)
                    { add_edge(u, v); }
                }
            }
        }

        UndirectedGraph::UndirectedGraph(const UndirectedGraph& graph)
        { _neighbours = graph._neighbours; }

        UndirectedGraph::~UndirectedGraph()
        {}

        Index UndirectedGraph::get_nb_vertices() const
        { return _neighbours.size(); }

        Index UndirectedGraph::get_nb_edges() const
        { 
            Index nb_edges = 0;
            for(Index u = 0, v = get_nb_vertices(); u < v; ++u)
            { nb_edges += _neighbours[u].size(); }
            nb_edges /= 2;
            return nb_edges;
        }

        bool UndirectedGraph::has_edge(const Index& u, const Index& v) const
        { return _neighbours[u].find(v) != _neighbours[u].end(); }

        void UndirectedGraph::add_edge(const Index& u, const Index& v)
        {
            Adjacency::iterator it_u = _neighbours[u].find(v), it_v = _neighbours[v].find(u);
            if(u != v && it_u == _neighbours[u].end() && it_v == _neighbours[v].end())
            {
                _neighbours[u].insert(v);
                _neighbours[v].insert(u);
            }
            else
            { throw std::runtime_error("edge already present"); }
        }

        void UndirectedGraph::remove_edge(const Index& u, const Index& v)
        {
            Adjacency::iterator it_u = _neighbours[u].find(v), it_v = _neighbours[v].find(u);
            if(u != v && it_u != _neighbours[u].end() && it_v != _neighbours[v].end())
            {
                _neighbours[u].erase(it_u);
                _neighbours[v].erase(it_v);
            }
            else
            { throw std::runtime_error("edge not present"); }
        }

        Index UndirectedGraph::degree(const Index& u) const
        { return _neighbours[u].size(); }

        const Adjacency& UndirectedGraph::neighbours(const Index& u) const
        { return _neighbours[u]; }

        bool UndirectedGraph::are_connected(const Index& u, const Index& v) const
        { 
            Indices su, sv;
            su.insert(u);
            sv.insert(v);
            return are_connected(su, sv);
        }

        bool UndirectedGraph::are_connected(const Indices& u, const Indices& v) const
        { 
            Adjacency visited = Adjacency();
            return are_connected(u, v, visited);
        }

        bool UndirectedGraph::are_separated(const Index& u, const Index& v, const Indices& w) const
        { 
            Indices su, sv;
            su.insert(u);
            sv.insert(v);
            return are_separated(su, sv, w);
        }

        bool UndirectedGraph::are_separated(const Indices& u, const Indices& v, const Indices& w) const
        { 
            Adjacency visited = Adjacency(w.cbegin(), w.cend());
            return !are_connected(u, v, visited);
        }

        std::vector< Index > UndirectedGraph::maximum_cardinality_search() const
        {
            std::vector< Index > rank(get_nb_vertices()), w(get_nb_vertices(), 1);
            Adjacency non_colored;
            for(Index u = 0, v = get_nb_vertices(); u < v; ++u)
            { non_colored.insert(non_colored.end(), u); }
            while(non_colored.size() > 0)
            {
                Index u = distance(w.begin(), std::max_element(w.begin(), w.end()));
                rank[u] = non_colored.size() - 1;
                for(Adjacency::const_iterator it = non_colored.begin(), it_end = non_colored.end(); it != it_end; ++it)
                {
                    if(has_edge(u, *it))
                    { w[*it] += 1; }
                }
                w[u] = 0;
                Adjacency::iterator it = non_colored.find(u);
                non_colored.erase(it);
            }
            return rank;
        }

        std::unique_ptr< UndirectedGraph > UndirectedGraph::maximum_cardinality_embedding(const bool& elimination) const
        {
            std::unique_ptr< UndirectedGraph > graph;
            if(elimination)
            { graph = elimination_game(rank_to_ordering(maximum_cardinality_search())); }
            else
            {
                graph = copy();
                std::vector< Index > w(get_nb_vertices(), 1);
                Adjacency non_colored;
                for(Index u = 0, v = get_nb_vertices(); u < v; ++u)
                { non_colored.insert(non_colored.end(), u); }
                while(non_colored.size() > 0)
                {
                    Index u = distance(w.begin(), std::max_element(w.begin(), w.end()));
                    non_colored.erase(u);
                    Indices N;
                    for(Index v = 0; v < u; ++v)
                    { 
                        if(w[v] == 0 || w[v] >= w[u])
                        { N.insert(v); }
                    }
                    for(Index v = u + 1, max_v = get_nb_vertices(); v < max_v; ++v)
                    { 
                        if(w[v] == 0 || w[v] >= w[u])
                        { N.insert(v); }
                    }
                    Adjacency S;
                    for(Adjacency::const_iterator it = non_colored.begin(), it_end = non_colored.end(); it != it_end; ++it)
                    {
                        N.erase(*it);
                        if(!are_separated(u, *it, N))
                        { S.insert(*it); }
                        N.insert(*it);
                    }
                    for(Adjacency::const_iterator it = S.begin(), it_end = S.end(); it != it_end; ++it)
                    { 
                        ++w[*it];
                        if(!graph->has_edge(u, *it))
                        { graph->add_edge(u, *it); }
                    }
                    w[u] = 0;
                }
            }
            return std::move(graph);
        }

        std::unique_ptr< DirectedGraph > UndirectedGraph::directed_graph() const
        {
            if(!is_chordal())
            { throw not_implemented_error("directed_graph"); }
            std::vector< Index> order = depth_first_search();
            std::unique_ptr< DirectedGraph > graph = std::make_unique< DirectedGraph >(get_nb_vertices());
            Adjacency colored;
            for(Index u = 0, max_u = get_nb_vertices(); u < max_u; ++u)
            {
                colored.insert(u);
                const Adjacency& ne = neighbours(u);
                for(Adjacency::const_iterator it = ne.cbegin(), it_end = ne.cend(); it != it_end; ++it)
                {
                    if(colored.find(*it) != colored.end())
                    { graph->add_edge(*it, u); }
                }
            }
            return graph;
        }
        
        std::vector< Index > UndirectedGraph::depth_first_search() const
        {
            std::vector< Index > order(get_nb_vertices());
            Adjacency non_colored;
            Index u , v = get_nb_vertices();
            for(u = 0; u < v; ++u)
            { non_colored.insert(non_colored.end(), u); }
            while(non_colored.size() > 0)
            {
                u = *(non_colored.begin());
                std::vector< Index > stack = std::vector< Index >();
                stack.push_back(u);
                while(stack.size() > 0)
                {
                    u = stack.back();
                    stack.pop_back();
                    if(non_colored.find(u) != non_colored.end())
                    {
                        order[v - non_colored.size()] = u;
                        non_colored.erase(u);
                        for(Adjacency::const_iterator it = _neighbours[u].begin(), it_end = _neighbours[u].end(); it != it_end; ++it)
                        { 
                            if(non_colored.find(*it) != non_colored.end())
                            { stack.push_back(*it); }
                        }
                    }
                }
            }
            return order;
        }

        bool UndirectedGraph::is_chordal() const
        {
            bool chordal = true;
            std::vector< Index > ordering = rank_to_ordering(maximum_cardinality_search());
            Index u = 0, v = get_nb_vertices();
            Adjacency colored;
            while(chordal && u < v)
            {
                Index w = ordering[u];
                Adjacency ne = neighbours(w);
                Adjacency::const_iterator it = colored.begin(), it_end = colored.end();
                while(ne.size() > 0 && it != it_end)
                {
                    Adjacency::iterator itn = ne.find(*it);
                    if(itn != ne.end())
                    { ne.erase(itn); }
                    ++it;
                }
                ne.insert(w);
                if(ne.size() > 1)
                { chordal = is_clique(ne); }
                colored.insert(w);
                ++u;
            }
            return chordal;
        }

        bool UndirectedGraph::is_connected() const
        {
            Adjacency non_colored;
            Index u , v = get_nb_vertices();
            for(u = 0; u < v; ++u)
            { non_colored.insert(non_colored.end(), u); }
            u = *(non_colored.begin());
            std::vector< Index > stack = std::vector< Index >();
            stack.push_back(u);
            while(stack.size() > 0)
            {
                u = stack.back();
                stack.pop_back();
                if(non_colored.find(u) != non_colored.end())
                {
                    non_colored.erase(u);
                    for(Adjacency::const_iterator it = _neighbours[u].begin(), it_end = _neighbours[u].end(); it != it_end; ++it)
                    { 
                        if(non_colored.find(*it) != non_colored.end())
                        { stack.push_back(*it); }
                    }
                }
            }
            return non_colored.size() == 0;
        }

        std::vector< Indices > UndirectedGraph::bron_kerbosch() const
        {
            std::vector< Indices > cliques;
            Indices r, p, x;
            for(Index u = 0, v = get_nb_vertices(); u < v; ++u)
            { p.insert(p.end(), u); }
            bron_kerbosch(cliques, r, p, x);
            return cliques;
        }

        double UndirectedGraph::density() const
        { return 2 * get_nb_edges() / double(get_nb_vertices() * (get_nb_vertices() - 1)) ; }

        std::unique_ptr< UndirectedGraph > UndirectedGraph::copy() const
        { return std::make_unique< UndirectedGraph >(*this); }

        bool UndirectedGraph::are_connected(const Indices& u, const Indices& v, Adjacency& visited) const
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
                    Adjacency::const_iterator it_v = _neighbours[*it_u].cbegin(), it_v_end = _neighbours[*it_u].cend();
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
                    Indices ne = Indices(_neighbours[*itv].cbegin(), _neighbours[*itv].cend());
                    std::set_intersection(p.begin(), p.end(), ne.cbegin(), ne.cend(), std::inserter(pn, pn.begin()));
                    xn.clear();
                    std::set_intersection(x.begin(), x.end(), ne.cbegin(), ne.cend(), std::inserter(xn, xn.begin()));
                    bron_kerbosch(cliques, rn, pn, xn);
                    x.insert(*itv);
                    p.erase(itv);
                }
            }
        }

        std::unique_ptr< UndirectedGraph > UndirectedGraph::elimination_game(const std::vector< Index >& ordering) const
        {
            std::unique_ptr< UndirectedGraph > graph = copy();
            Indices colored;
            for(Index u = 0, max_u = ordering.size(); u < max_u; ++u)
            {
                Adjacency ne = graph->neighbours(ordering[u]);
                for(Indices::const_iterator it = colored.begin(), it_end = colored.end(); it != it_end; ++it)
                {
                    Adjacency::iterator itv = ne.find(*it);
                    if(itv != ne.end())
                    { ne.erase(itv); }
                }
                for(Adjacency::iterator itu = ne.begin(), itu_end = ne.end(); itu != itu_end; ++itu)
                {
                    for(Adjacency::iterator itv = ne.begin(); itv != itu; ++itv)
                    {
                        if(!graph->has_edge(*itu, *itv))
                        { graph->add_edge(*itu, *itv); }
                    }
                }
                colored.insert(ordering[u]);
            }
            return std::move(graph);
        }

        UndirectedForest::UndirectedForest(const Index& vertices) : UndirectedGraph(vertices)
        {}

        UndirectedForest::UndirectedForest(const Eigen::MatrixXd& matrix) : UndirectedGraph(matrix.rows())
        {
            Eigen::MatrixXd scores = matrix;
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

        std::unique_ptr< UndirectedGraph > UndirectedForest::copy() const
        { return std::make_unique< UndirectedForest >(*this); }


        CliqueTree::CliqueTree(const UndirectedGraph& graph)
        {
            if(!graph.is_chordal())
            { throw parameter_error("graph", "is not a chordal graph"); }
            std::vector< Indices > cliques = graph.bron_kerbosch();
            Eigen::MatrixXd matrix = Eigen::MatrixXd::Zero(cliques.size(), cliques.size());
            std::vector< std::vector< Indices > > intersections(cliques.size() - 1);
            for(Index u = 1, v = cliques.size(); u < v; ++u)
            {
                intersections[u - 1] = std::vector< Indices >(u, Indices());
                for(Index w = 0; w < u; ++w)
                {
                    std::set_intersection(cliques[w].begin(), cliques[w].end(), cliques[u].begin(), cliques[u].end(), std::inserter(intersections[u - 1][w], intersections[u - 1][w].begin()));
                    matrix(w, u) = intersections[u - 1][w].size();
                }
            }
            UndirectedForest forest = UndirectedForest(matrix);
            std::vector< Index > order = forest.depth_first_search();
            std::vector< Index > rank = ordering_to_rank(order);
            _cliques.resize(cliques.size());
            _separators.resize(cliques.size(), Indices());
            _cliques[0] = cliques[order[0]];
            Indices colored = _cliques[0], diff, inter;
            for(Index u = 1, v = cliques.size(); u < v; ++u)
            {
                _cliques[u] = cliques[order[u]];
                inter.clear();
                std::set_intersection(cliques[order[u]].begin(), cliques[order[u]].end(), colored.begin(), colored.end(), std::inserter(inter, inter.begin()));
                _separators[u] = inter;
                colored.insert(cliques[order[u]].begin(), cliques[order[u]].end());
            }
        }

        CliqueTree::CliqueTree(const CliqueTree& graph)
        {
            _cliques = graph._cliques;
            _separators = graph._separators;
        }

        CliqueTree::~CliqueTree()
        {}

        Index CliqueTree::get_nb_cliques() const
        { return _cliques.size(); }

        const Indices& CliqueTree::get_clique(const Index& v) const
        { return _cliques[v]; }

        const Indices& CliqueTree::get_separator(const Index& v) const
        { return _separators[v]; }

        DirectedGraph::DirectedGraph(const Index& vertices)
        { _parents.resize(vertices); }

        DirectedGraph::DirectedGraph(const Eigen::MatrixXd& matrix) : DirectedGraph(matrix.rows())
        {
            if(matrix.cols() != _parents.size())
            { throw std::runtime_error("non square matrix"); }
            Index nb_vertices = get_nb_vertices();
            for(Index u = 0; u < nb_vertices; ++u)
            {
                for(Index v = 0; v < u; ++v)
                {
                    if(matrix(u, v) < matrix(v, u))
                    { add_edge(v, u); }
                    else if (matrix(u, v) > matrix(v, u))
                    { add_edge(u, v); }
                }
            }
        }

        DirectedGraph::DirectedGraph(const DirectedGraph& graph)
        { _parents = graph._parents; }

        DirectedGraph::~DirectedGraph()
        {}

        Index DirectedGraph::get_nb_vertices() const
        { return _parents.size(); }

        Index DirectedGraph::get_nb_edges() const
        { 
            Index nb_edges = 0;
            for(Index u = 0, v = get_nb_vertices(); u < v; ++u)
            { nb_edges += _parents[u].size(); }
            return nb_edges;
        }

        bool DirectedGraph::has_edge(const Index& u, const Index& v) const
        { return _parents[v].find(u) != _parents[v].end(); }

        void DirectedGraph::add_edge(const Index& u, const Index& v)
        {
            Adjacency::iterator it_v = _parents[v].find(u);
            if(u != v && it_v == _parents[v].end())
            { _parents[v].insert(u); }
            else
            { throw std::runtime_error("edge already present"); }
        }

        void DirectedGraph::remove_edge(const Index& u, const Index& v)
        {
            Adjacency::iterator it_v = _parents[v].find(u);
            if(u != v && it_v != _parents[v].end())
            { _parents[v].erase(it_v); }
            else
            { throw std::runtime_error("edge not present"); }
        }

        Index DirectedGraph::in_degree(const Index& u) const
        { return _parents[u].size(); }

        Index DirectedGraph::out_degree(const Index& u) const
        { return children(u).size(); }

        const Adjacency& DirectedGraph::parents(const Index& u) const
        { return _parents[u]; }

        Adjacency DirectedGraph::children(const Index& u) const
        { 
            Adjacency ch;
            for(Index v = 0, max_v = get_nb_vertices(); v < max_v; ++v)
            {
                if(has_edge(u, v))
                { ch.insert(v); }
            }
            return ch;
        }

        bool DirectedGraph::are_weakly_connected(const Index& u, const Index& v) const
        { 
            std::unique_ptr< UndirectedGraph > graph = moral_graph();
            return graph->are_connected(u, v);
        }

        bool DirectedGraph::are_weakly_connected(const Indices& u, const Indices& v) const
        { 
            std::unique_ptr< UndirectedGraph > graph = moral_graph();
            return graph->are_connected(u, v);
        }

        bool DirectedGraph::are_separated(const Index& u, const Index& v, const Indices& w) const
        {
            std::unique_ptr< UndirectedGraph > graph = moral_graph();
            return graph->are_separated(u, v, w);
        }

        bool DirectedGraph::are_separated(const Indices& u, const Indices& v, const Indices& w) const
        { 
            std::unique_ptr< UndirectedGraph > graph = moral_graph();
            return graph->are_separated(u, v, w);
        }

        std::unique_ptr< UndirectedGraph > DirectedGraph::undirected_graph() const
        {
            std::unique_ptr< UndirectedGraph > graph = std::make_unique< UndirectedGraph >(get_nb_vertices());
            for(Index u = 0, max_u = get_nb_vertices(); u < max_u; ++u)
            {
                for(Index v = 0; v < u; ++v)
                {
                    if(has_edge(u, v) || has_edge(v, u))
                    { graph->add_edge(u, v); }
                }
            }
            return graph;
        }

        std::unique_ptr< UndirectedGraph > DirectedGraph::moral_graph() const
        {
            std::unique_ptr< UndirectedGraph > graph = undirected_graph();
            for(Index u = 0, max_u = get_nb_vertices(); u < max_u; ++u)
            {
                for(Index v = 0; v < max_u; ++v)
                {
                    if(u != v)
                    {
                        for(Index w = 0; w < max_u; ++w)
                        {
                            if(v != w && u != w && has_edge(u, v) && has_edge(w, v) && !graph->has_edge(u, w))
                            { graph->add_edge(u, w); }
                        }
                    }
                }
            }
            return graph;
        }

        std::vector< Index > DirectedGraph::depth_first_search() const
        {
            std::vector< Index > order(get_nb_vertices());
            Adjacency non_colored;
            Index u , v = get_nb_vertices();
            for(u = 0; u < v; ++u)
            { non_colored.insert(non_colored.end(), u); }
            while(non_colored.size() > 0)
            {
                u = *(non_colored.begin());
                std::vector< Index > stack = std::vector< Index >();
                stack.push_back(u);
                while(stack.size() > 0)
                {
                    u = stack.back();
                    stack.pop_back();
                    if(non_colored.find(u) != non_colored.end())
                    {
                        order[v - non_colored.size()] = u;
                        non_colored.erase(u);
                        for(Adjacency::const_iterator it = _parents[u].begin(), it_end = _parents[u].end(); it != it_end; ++it)
                        { 
                            if(non_colored.find(*it) != non_colored.end())
                            { stack.push_back(*it); }
                        }
                    }
                }
            }
            std::reverse(order.begin(), order.end());
            return order;
        }

        bool DirectedGraph::has_immorality() const
        {
            bool has = false;
            Index u = 0, v, w, max_index = get_nb_vertices();
            while(!has && u < max_index)
            {
                v = 0;
                while(!has && v < max_index)
                {
                    w = 0;
                    while(!has && w < max_index)
                    {
                        if(u != v && v != w && u != w)
                        { has = has_edge(u, w) && has_edge(v, w) && !(has_edge(u, v) || has_edge(v, u)); }
                        if(has)
                        { std::cout << u << " " << v << " " << w << std::endl;}
                        ++w;
                    }
                    ++v;
                }
                ++u;
            }
            return has;  
        }

        bool DirectedGraph::is_acyclic() const
        {
            std::vector< Index > order = depth_first_search();
            std::unordered_set< Index > colored;
            bool is = true;
            Index u = 0, max_u = get_nb_vertices();
            while(is && u < max_u)
            {
                colored.insert(u);
                const Adjacency& pa = parents(u);
                for(Adjacency::const_iterator it = pa.cbegin(), it_end = pa.cend(); it != it_end; ++it)
                {
                    if(colored.find(*it) != colored.end())
                    { is = false; }
                }
                ++u;
            }
            return is;
        }

        bool DirectedGraph::is_weakly_connected() const
        {
            Adjacency non_colored;
            Index u , v = get_nb_vertices();
            for(u = 0; u < v; ++u)
            { non_colored.insert(non_colored.end(), u); }
            u = *(non_colored.begin());
            std::vector< Index > stack = std::vector< Index >();
            stack.push_back(u);
            while(stack.size() > 0)
            {
                u = stack.back();
                stack.pop_back();
                if(non_colored.find(u) != non_colored.end())
                {
                    non_colored.erase(u);
                    for(Adjacency::const_iterator it = _parents[u].begin(), it_end = _parents[u].end(); it != it_end; ++it)
                    { 
                        if(non_colored.find(*it) != non_colored.end())
                        { stack.push_back(*it); }
                    }
                }
            }
            return non_colored.size() == 0;
        }

        double DirectedGraph::density() const
        { return get_nb_edges() / double(get_nb_vertices() * (get_nb_vertices() - 1)) ; }

        std::unique_ptr< DirectedGraph > DirectedGraph::copy() const
        { return std::make_unique< DirectedGraph >(*this); }
    }
}