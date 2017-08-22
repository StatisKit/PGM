#ifndef STATISKIT_PGM_GRAPH_H
#define STATISKIT_PGM_GRAPH_H

#include <statiskit/linalg/Eigen.h>
#include <unordered_set>
#include <unordered_map>

#include "base.h"

namespace statiskit
{
    namespace pgm
    {
        typedef std::unordered_set< Index > Adjacency;

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
                PropertyGraph(const Eigen::MatrixXd& matrix);
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
                PropertyGraph(const Eigen::MatrixXd& matrix);
                PropertyGraph(const PropertyGraph< G, V, void >& graph);
                virtual ~PropertyGraph();

            protected:

                virtual bool valid_vertex_property(const Index& u) const;
        };

        template<class G, class E> class PropertyGraph< G, void, E > : public EdgePropertyGraph< E >, public G
        {
            public:
                PropertyGraph(const Index& vertices);
                PropertyGraph(const Eigen::MatrixXd& matrix);
                PropertyGraph(const PropertyGraph< G, void, E >& graph);
                virtual ~PropertyGraph();

            protected:

                virtual bool valid_edge_property(const Index& u, const Index& v) const;
        };

        class UndirectedForest;
        class DirectedGraph;

        class STATISKIT_PGM_API UndirectedGraph 
        {
            public:
                UndirectedGraph(const Index& vertices);
                UndirectedGraph(const Eigen::MatrixXd& matrix);
                UndirectedGraph(const UndirectedGraph& graph);
                virtual ~UndirectedGraph();

                Index get_nb_vertices() const;

                Index get_nb_edges() const;

                bool has_edge(const Index& u, const Index& v) const;
                virtual void add_edge(const Index& u, const Index& v);
                void remove_edge(const Index& u, const Index& v);

                Index degree(const Index& vertex) const;

                const Adjacency& neighbours(const Index& u) const;

                bool are_connected(const Index& u, const Index& v) const;
                bool are_connected(const Indices& u, const Indices& v) const;

                bool are_separated(const Index& u, const Index& v, const Indices& w) const;
                bool are_separated(const Indices& u, const Indices& v, const Indices& w) const;

                std::vector< Index > maximum_cardinality_search() const;

                std::unique_ptr< UndirectedGraph > maximum_cardinality_embedding() const; //const bool& elimination=false) const;

                std::unique_ptr< DirectedGraph > directed_graph() const;
                
                std::vector< Index > depth_first_search() const;

                virtual bool is_chordal() const;

                virtual bool is_connected() const;
                
                std::vector< Indices > bron_kerbosch() const;

                double density() const;
                
                virtual std::unique_ptr< UndirectedGraph > copy() const;

            protected:
                std::vector< Adjacency > _neighbours;

                bool are_connected(const Indices& u, const Indices& v, Adjacency& visited) const;

                template<class S> bool is_clique(const S& u) const;

                void bron_kerbosch(std::vector< Indices >& cliques, const Indices& r, Indices p, Indices x) const;

                inline std::unique_ptr< UndirectedGraph > elimination_game(const std::vector< Index >& ordering) const;
        };

        struct STATISKIT_PGM_API UndirectedForest : UndirectedGraph
        {
            UndirectedForest(const Index& vertices);
            UndirectedForest(const Eigen::MatrixXd& matrix);
            UndirectedForest(const UndirectedForest& graph);
            virtual ~UndirectedForest();

            virtual void add_edge(const Index& u, const Index& v);

            virtual bool is_chordal() const;

            virtual std::unique_ptr< UndirectedGraph > copy() const;
        };

        class STATISKIT_PGM_API CliqueTree 
        {
            public:
                CliqueTree(const UndirectedGraph& graph);
                CliqueTree(const CliqueTree& tree);
                virtual ~CliqueTree();

                Index get_nb_cliques() const;

                const Indices& get_clique(const Index& v) const;

                const Indices& get_separator(const Index& v) const;

            protected:
                std::vector< Indices > _cliques;
                std::vector< Indices > _separators;

        };

        class STATISKIT_PGM_API DirectedGraph 
        {
            public:
                DirectedGraph(const Index& vertices);
                DirectedGraph(const Eigen::MatrixXd& matrix);
                DirectedGraph(const DirectedGraph& graph);
                virtual ~DirectedGraph();

                Index get_nb_vertices() const;

                Index get_nb_edges() const;

                bool has_edge(const Index& u, const Index& v) const;
                virtual void add_edge(const Index& u, const Index& v);
                void remove_edge(const Index& u, const Index& v);

                Index in_degree(const Index& vertex) const;
                Index out_degree(const Index& vertex) const;

                const Adjacency& parents(const Index& u) const;
                Adjacency children(const Index& u) const;

                bool are_weakly_connected(const Index& u, const Index& v) const;
                bool are_weakly_connected(const Indices& u, const Indices& v) const;

                bool are_separated(const Index& u, const Index& v, const Indices& w) const;
                bool are_separated(const Indices& u, const Indices& v, const Indices& w) const;

                std::unique_ptr< UndirectedGraph > undirected_graph() const;

                std::unique_ptr< UndirectedGraph > moral_graph() const;

                std::vector< Index > depth_first_search() const;

                virtual bool has_immorality() const;
                
                virtual bool is_acyclic() const;

                virtual bool is_weakly_connected() const;
                
                double density() const;
                
                virtual std::unique_ptr< DirectedGraph > copy() const;

            protected:
                std::vector< Adjacency > _parents;

                void depth_first_visit(const Index& u, Adjacency& non_colored, std::vector< Index >& order) const;
        };
    }
}

#include "graph.hpp"
#endif