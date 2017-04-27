#ifndef STATISKIT_PGM_GRAPH_H
#define STATISKIT_PGM_GRAPH_H

#include <statiskit/core/base.h>
#include <unordered_set>

#include "base.h"

namespace statiskit
{
    typedef std::unordered_set< Index > Neighbours;

    class STATISKIT_PGM_API UndirectedGraph 
    {
        public:
            enum traversal_type
            {
                DFS,
                BFS,
                MCS
            };

            UndirectedGraph(const Index& vertices);
            UndirectedGraph(const Eigen::MatrixXd& adjacency);
            virtual ~UndirectedGraph();

            Index get_nb_vertices() const;

            Index get_nb_edges() const;

            virtual void add_edge(const Index& u, const Index& v);
            void remove_edge(const Index& u, const Index& v);

            Index degree(const Index& vertex) const;

            bool are_neighbours(const Index& u, const Index& v) const;

            const Neighbours& neighbours(const Index& u) const;

            virtual bool is_clique(const Indices& u) const;

            bool are_connected(const Indices& u, const Indices& v) const;
            bool are_separated(const Indices& u, const Indices& v, const Indices& w) const;

            // std::vector< Index > traversal(const traversal_type& algorithm) const;

            virtual bool is_chordal() const;

            // JunctionTree junction_tree() const;

        protected:
            std::vector< Neighbours > _adjacency;

            bool are_connected(const Indices& u, const Indices& v, Neighbours& visited) const;
    };

    class STATISKIT_PGM_API UndirectedForest : public UndirectedGraph
    {
        public:
            UndirectedForest(const Index& vertices);
            UndirectedForest(const Eigen::MatrixXd& adjacency);
            virtual ~UndirectedForest();

            virtual void add_edge(const Index& u, const Index& v);

            virtual bool is_clique(const Indices& u) const;

            virtual bool is_chordal() const;
    };
}

#endif