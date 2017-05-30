#ifndef STATISKIT_PGM_GRAPH_H
#define STATISKIT_PGM_GRAPH_H

#include <statiskit/linalg/Eigen.h>
#include <statiskit/core/base.h>
#include <unordered_set>
#include <unordered_map>

#include "base.h"

namespace statiskit
{
    typedef std::unordered_set< Index > Neighbours;

    template<class V> class VertexPropertyGraph
    {
        public:
            VertexPropertyGraph();
            VertexPropertyGraph(const VertexPropertyGraph< V >& graph);
            virtual ~VertexPropertyGraph();

            const V& get_vertex_property(const Index& u) const;
            virtual void set_vertex_property(const Index& u, const V& property);

        protected:
            std::unordered_map< Index, V > _vertices;

            virtual bool valid_vertex_property(const Index& u) const = 0;
    };

    template<class E> class EdgePropertyGraph
    {
        public:
            EdgePropertyGraph();
            EdgePropertyGraph(const EdgePropertyGraph< E >& graph);
            virtual ~EdgePropertyGraph();

            const E& get_edge_property(const Index& u, const Index& v) const;
            void set_edge_property(const Index& u, const Index& v, const E& property);

        protected:
            std::unordered_map< Index, std::unordered_map< Index, E > > _edges;

            virtual bool valid_edge_property(const Index& u, const Index& v) const = 0;
    };

    template<class G, class V, class E> class PropertyGraph : public VertexPropertyGraph< V >, public EdgePropertyGraph< V >, public G
    {
        public:
            PropertyGraph(const Index& vertices);
            PropertyGraph(const Eigen::MatrixXd& adjacency);
            PropertyGraph(const PropertyGraph< G, V, E >& graph);
            virtual ~PropertyGraph();

        protected:
            virtual bool valid_vertex_property(const Index& u) const;
            virtual bool valid_edge_property(const Index& u, const Index& v) const;
    };

    template<class G, class V> class PropertyGraph< G, V, void > : public VertexPropertyGraph< V >, public G
    {
        public:
            PropertyGraph(const Index& vertices);
            PropertyGraph(const Eigen::MatrixXd& adjacency);
            PropertyGraph(const PropertyGraph< G, V, void >& graph);
            virtual ~PropertyGraph();

        protected:
            virtual bool valid_vertex_property(const Index& u) const;
    };

    template<class G, class E> class PropertyGraph< G, void, E > : public EdgePropertyGraph< E >, public G
    {
        public:
            PropertyGraph(const Index& vertices);
            PropertyGraph(const Eigen::MatrixXd& adjacency);
            PropertyGraph(const PropertyGraph< G, void, E >& graph);
            virtual ~PropertyGraph();

        protected:
            virtual bool valid_edge_property(const Index& u, const Index& v) const;
    };

    class UndirectedForest;

    class STATISKIT_PGM_API UndirectedGraph 
    {
        public:
            UndirectedGraph(const Index& vertices);
            UndirectedGraph(const Eigen::MatrixXd& adjacency);
            UndirectedGraph(const UndirectedGraph& graph);
            virtual ~UndirectedGraph();

            Index get_nb_vertices() const;

            Index get_nb_edges() const;

            bool has_edge(const Index& u, const Index& v) const;
            virtual void add_edge(const Index& u, const Index& v);
            void remove_edge(const Index& u, const Index& v);

            Index degree(const Index& vertex) const;

            const Neighbours& neighbours(const Index& u) const;

            bool are_connected(const Indices& u, const Indices& v) const;
            bool are_separated(const Indices& u, const Indices& v, const Indices& w) const;

            std::vector< Index > maximum_cardinality_search() const;

            virtual bool is_chordal() const;

            PropertyGraph< UndirectedForest, Indices, Indices > junction_tree() const;

        protected:
            std::vector< Neighbours > _adjacency;

            bool are_connected(const Indices& u, const Indices& v, Neighbours& visited) const;

            inline static std::vector< Index > rank_to_ordering(const std::vector< Index >& rank);
            inline static std::vector< Index > ordering_to_rank(const std::vector< Index >& ordering);

            template<class S> bool is_clique(const S& u) const;

            void bron_kerbosch(std::vector< Indices >& cliques, const Indices& r, Indices p, Indices x) const;
    };

    class STATISKIT_PGM_API UndirectedForest : public UndirectedGraph
    {
        public:
            UndirectedForest(const Index& vertices);
            UndirectedForest(const Eigen::MatrixXd& adjacency);
            UndirectedForest(const UndirectedForest& graph);
            virtual ~UndirectedForest();

            virtual void add_edge(const Index& u, const Index& v);

            virtual bool is_chordal() const;
    };
}

#include "graph.hpp"
#endif