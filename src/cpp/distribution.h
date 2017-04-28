#ifndef STATISKIT_PGM_DISTRIBUTION_H
#define STATISKIT_PGM_DISTRIBUTION_H

#include <boost/random/uniform_01.hpp>

#include "graph.h"

namespace statiskit
{
    struct STATISKIT_PGM_API UndirectedGraphDistribution
    {
        virtual ~UndirectedGraphDistribution() = 0;

        virtual double ldf(const UndirectedGraph* graph) const = 0;
        virtual double pdf(const UndirectedGraph* graph) const;

        virtual std::unique_ptr< UndirectedGraph > simulate() const = 0;

        virtual std::unique_ptr< UndirectedGraphDistribution > copy() const = 0;
    };

    class STATISKIT_PGM_API ErdosRenyiUndirectedGraphDistribution : public PolymorphicCopy< UndirectedGraphDistribution, ErdosRenyiUndirectedGraphDistribution >
    {
        public:
            ErdosRenyiUndirectedGraphDistribution(const Index& nb_vertices, const double& pi=0.5);
            ErdosRenyiUndirectedGraphDistribution(const ErdosRenyiUndirectedGraphDistribution& distribution);
            virtual ~ErdosRenyiUndirectedGraphDistribution();

            virtual double ldf(const UndirectedGraph* graph) const;

            virtual std::unique_ptr< UndirectedGraph > simulate() const;

            Index get_nb_vertices() const;
            void set_nb_vertices(const Index& nb_vertices);

            double get_pi() const;
            void set_pi(const double& pi);

        protected:
            Index _nb_vertices;
            double _pi;
    };

    class STATISKIT_PGM_API MixtureUndirectedGraphDistribution : public PolymorphicCopy< UndirectedGraphDistribution, MixtureUndirectedGraphDistribution >
    {
        public:
            MixtureUndirectedGraphDistribution(const Index& nb_vertices, const Index& nb_states);
            MixtureUndirectedGraphDistribution(const MixtureUndirectedGraphDistribution& distribution);
            virtual ~MixtureUndirectedGraphDistribution();

            virtual double ldf(const UndirectedGraph* graph) const;

            virtual std::unique_ptr< UndirectedGraph > simulate() const;

            Index get_nb_vertices() const;
            void set_nb_vertices(const Index& nb_vertices);

            Index get_nb_states() const;

            const Eigen::VectorXd& get_alpha() const;
            void set_alpha(const Eigen::VectorXd& alpha);

            const Eigen::MatrixXd& get_pi() const;
            void set_pi(const Eigen::MatrixXd& pi);

        protected:
            Index _nb_vertices;
            Eigen::VectorXd _alpha;
            Eigen::MatrixXd _pi;
    };
}

#endif