#ifndef STATISKIT_PGM_GRAPH_HPP
#define STATISKIT_PGM_GRAPH_HPP

namespace statiskit
{   
    template<class V>
        VertexPropertyGraph< V >::VertexPropertyGraph()
        {}

    template<class V>
        VertexPropertyGraph< V >::VertexPropertyGraph(const VertexPropertyGraph< V >& graph)
        { _vertices = graph._vertices; }

    template<class V>
        VertexPropertyGraph< V >::~VertexPropertyGraph()
        {}

    template<class V>
        const V& VertexPropertyGraph< V >::get_vertex_property(const Index& u) const
        {
            typename std::unordered_map< Index, V >::const_iterator itu = _vertices.find(u);
            if(itu == _vertices.end())
            { throw std::runtime_error("no property"); }
            return itu->second;
        }

    template<class V>
        void VertexPropertyGraph< V >::set_vertex_property(const Index& u, const V& property)
        {
            if(!valid_vertex_property(u))
            { throw std::runtime_error("no property"); }            
            typename std::unordered_map< Index, V >::iterator itu = _vertices.find(u);
            if(itu == _vertices.end())
            { _vertices[u] = property; }
            else
            { itu->second = property; }
        }

    template<class E>
        EdgePropertyGraph< E >::EdgePropertyGraph()
        {}

    template<class E>
        EdgePropertyGraph< E >::EdgePropertyGraph(const EdgePropertyGraph< E >& graph)
        { _edges = graph._edges; }

    template<class E>
        EdgePropertyGraph< E >::~EdgePropertyGraph()
        {}

    template<class E>
        const E& EdgePropertyGraph< E >::get_edge_property(const Index& u, const Index& v) const
        {
            if(!valid_edge_property(u, v))
            { throw std::runtime_error("no property"); }    
            typename std::unordered_map< Index, std::unordered_map< Index, E > >::const_iterator itu = _edges.find(u);
            typename std::unordered_map< Index, E >::const_iterator itv;
            if(itu == _edges.end())
            { throw std::runtime_error("no property"); }
            else
            {
                itv = itu->second.find(v);
                if(itv == itu->second.end())
                { throw std::runtime_error("no property"); }

            }
            return itv->second;
        }

    template<class E>
        void EdgePropertyGraph< E >::set_edge_property(const Index& u, const Index& v, const E& property)
        {
            if(!valid_edge_property(u, v))
            { throw std::runtime_error("no property"); }            
            typename std::unordered_map< Index, std::unordered_map< Index, E > >::iterator itu = _edges.find(u);
            if(itu == _edges.end())
            {
                std::unordered_map< Index, E > _property;
                _property[v] = property;
                _edges[u] = _property;
            }
            else
            {
                typename std::unordered_map< Index, E >::iterator itv = itu->second.find(v);
                if(itv == itu->second.end())
                { itu->second[v] = property; }
                else
                { itv->second = property; }
            }
        }

    template<class G, class V, class E>
        PropertyGraph< G, V, E >::PropertyGraph(const Index& vertices) : G(vertices)
        {}

    template<class G, class V, class E>
        PropertyGraph< G, V, E >::PropertyGraph(const Eigen::MatrixXd& adjacency) : G(adjacency)
        {}

    template<class G, class V, class E>
        PropertyGraph< G, V, E >::PropertyGraph(const PropertyGraph< G, V, E >& graph) : G(graph), VertexPropertyGraph< V >(graph), EdgePropertyGraph< E >(graph)
        {}

    template<class G, class V, class E>
        PropertyGraph< G, V, E >::~PropertyGraph()
        {}

    template<class G, class V, class E>
        bool PropertyGraph< G, V, E >::valid_vertex_property(const Index& u) const
        { return u < this->get_nb_vertices(); }

    template<class G, class V, class E>
        bool PropertyGraph< G, V, E >::valid_edge_property(const Index& u, const Index& v) const
        { return this->has_edge(u, v); }

    template<class G, class V>
        PropertyGraph< G, V, void >::PropertyGraph(const Index& vertices) : G(vertices)
        {}

    template<class G, class V>
        PropertyGraph< G, V, void >::PropertyGraph(const Eigen::MatrixXd& adjacency) : G(adjacency)
        {}

    template<class G, class V>
        PropertyGraph< G, V, void >::PropertyGraph(const PropertyGraph< G, V, void >& graph) : G(graph), VertexPropertyGraph< V >(graph)
        {}

    template<class G, class V>
        PropertyGraph< G, V, void >::~PropertyGraph()
        {}

    template<class G, class V>
        bool PropertyGraph< G, V, void >::valid_vertex_property(const Index& u) const
        { return u < this->get_nb_vertices(); }

    template<class G, class E>
        PropertyGraph< G, void , E >::PropertyGraph(const Index& vertices) : G(vertices)
        {}

    template<class G, class E>
        PropertyGraph< G, void , E >::PropertyGraph(const Eigen::MatrixXd& adjacency) : G(adjacency)
        {}

    template<class G, class E>
        PropertyGraph< G, void , E >::PropertyGraph(const PropertyGraph< G, void , E >& graph) : G(graph), EdgePropertyGraph< E >(graph)
        {}

    template<class G, class E>
        PropertyGraph< G, void , E >::~PropertyGraph()
        {}

    template<class G, class E>
        bool PropertyGraph< G, void , E >::valid_edge_property(const Index& u, const Index& v) const
        { return this->has_edge(u, v); }

    template<class S>
        bool UndirectedGraph::is_clique(const S& u) const
        {
            bool clique = true;
            typename S::const_iterator it_u = u.cbegin(), it_u_end = u.cend();
            while(clique && it_u != it_u_end)
            {
                typename S::const_iterator it_v = u.cbegin();
                while(clique && it_v != it_u)
                {
                    clique = has_edge(*it_u, *it_v);
                    ++it_v;
                }
                ++it_u;
            }
            return clique;
        }
}

#endif