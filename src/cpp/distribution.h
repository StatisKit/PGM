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
            struct STATISKIT_PGM_API Computation
            {
                virtual double ldf(const MixtureUndirectedGraphDistribution& mixture, const UndirectedGraph* graph) const = 0;

                virtual std::vector< Eigen::VectorXd > posterior(const MixtureUndirectedGraphDistribution& mixture, const UndirectedGraph* graph, const bool& logarithm=false) const = 0;

                virtual std::vector< Index > assignment(const MixtureUndirectedGraphDistribution& mixture, const UndirectedGraph* graph) const = 0;

                virtual std::unique_ptr< Computation > copy() const = 0;
            };

            class STATISKIT_PGM_API VariationalComputation : public PolymorphicCopy< Computation, VariationalComputation >, public Optimization
            {
                public:
                    VariationalComputation();
                    VariationalComputation(const VariationalComputation& computation);
                    virtual ~VariationalComputation();
                    
                    #if defined STATISKIT_PGM_HAS_OPENMP
                    unsigned int get_nb_jobs() const;
                    void set_nb_jobs(const unsigned int& nb_jobs);
                    #endif

                    virtual double ldf(const MixtureUndirectedGraphDistribution& mixture, const UndirectedGraph* graph) const;

                    virtual std::vector< Eigen::VectorXd > posterior(const MixtureUndirectedGraphDistribution& mixture, const UndirectedGraph* graph, const bool& logarithm=false) const;

                    virtual std::vector< Index > assignment(const MixtureUndirectedGraphDistribution& mixture, const UndirectedGraph* graph) const;

                protected:
                    #if defined STATISKIT_PGM_HAS_OPENMP
                    unsigned int _nb_jobs;
                    #endif

                    inline double ldf(const std::vector< Eigen::VectorXd >& tau) const;
            };

            MixtureUndirectedGraphDistribution(const Index& nb_vertices, const Index& nb_states);
            MixtureUndirectedGraphDistribution(const MixtureUndirectedGraphDistribution& distribution);
            virtual ~MixtureUndirectedGraphDistribution();

            virtual double ldf(const UndirectedGraph* graph) const;

            virtual std::unique_ptr< UndirectedGraph > simulate() const;

            Index get_nb_states() const;

            const Computation* get_computation() const;
            void set_computation(const Computation* computation);

            Index get_nb_vertices() const;
            void set_nb_vertices(const Index& nb_vertices);

            const Eigen::VectorXd& get_alpha() const;
            void set_alpha(const Eigen::VectorXd& alpha);

            const Eigen::MatrixXd& get_pi() const;
            void set_pi(const Eigen::MatrixXd& pi);

            std::vector< Eigen::VectorXd > posterior(const UndirectedGraph* graph, const bool& logarithm=false) const;

            std::vector< Index > assignment(const UndirectedGraph* graph) const;

            // double uncertainty(const UndirectedGraph* graph, const Index& u) const;
            // double uncertainty(const UndirectedGraph* graph) const;

        protected:
            Computation* _computation;
            Index _nb_vertices;
            Eigen::VectorXd _alpha;
            Eigen::MatrixXd _pi;
    };
}

#endif
