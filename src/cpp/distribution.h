#ifndef STATISKIT_PGM_DISTRIBUTION_H
#define STATISKIT_PGM_DISTRIBUTION_H

#include <boost/random/uniform_01.hpp>
#include <statiskit/core/distribution.h>
#include <statiskit/core/estimation.h>
#include <statiskit/core/moment.h>

#include "graph.h"

namespace statiskit
{
    namespace pgm
    {
        class STATISKIT_PGM_API GraphicalGaussianDistribution : public PolymorphicCopy< MultivariateDistribution, GraphicalGaussianDistribution, ContinuousMultivariateDistribution >
        {
            public:
                GraphicalGaussianDistribution(const Eigen::VectorXd& mu);
                GraphicalGaussianDistribution(const Eigen::VectorXd& mu, const Eigen::MatrixXd& sigma);
                GraphicalGaussianDistribution(const GraphicalGaussianDistribution& gaussian);
                virtual ~GraphicalGaussianDistribution();

                virtual Index get_nb_components() const;

                virtual unsigned int get_nb_parameters() const;

                virtual double probability(const MultivariateEvent* event, const bool& logarithm) const;

                std::unique_ptr< MultivariateEvent > simulate() const;

                const Eigen::VectorXd& get_mu() const;
                void set_mu(const Eigen::VectorXd& mu);

                const Eigen::MatrixXd& get_theta() const;
                void set_theta(const Eigen::MatrixXd& theta);

                const Eigen::MatrixXd& get_cholesky() const;

                Eigen::MatrixXd get_sigma() const;

                UndirectedGraph get_graph() const;

            protected:
                Eigen::VectorXd _mu;
                Eigen::MatrixXd _theta;
                Eigen::MatrixXd _cholesky;
                double _determinant;
        };

        class STATISKIT_PGM_API GraphicalGaussianDistributionMLEstimation : public ActiveEstimation< GraphicalGaussianDistribution, ContinuousMultivariateDistributionEstimation >
        {
            public:
                GraphicalGaussianDistributionMLEstimation();
                GraphicalGaussianDistributionMLEstimation(GraphicalGaussianDistribution const * estimated, MultivariateData const * data);
                GraphicalGaussianDistributionMLEstimation(const GraphicalGaussianDistributionMLEstimation& estimation);
                virtual ~GraphicalGaussianDistributionMLEstimation();

                class STATISKIT_CORE_API Estimator : public ContinuousMultivariateDistributionEstimation::Estimator
                {
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
                        virtual ~Estimator();

                        virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=true) const;

                        virtual std::unique_ptr< MultivariateDistributionEstimation::Estimator > copy() const;

                        const UndirectedGraph* get_graph() const;
                        virtual void set_graph(const UndirectedGraph& graph);

                    protected:
                        UndirectedGraph* _graph;
                };
        };

        class STATISKIT_PGM_API GraphicalGaussianDistributionIMLEstimation : public OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >
        {
            public:
                GraphicalGaussianDistributionIMLEstimation();
                GraphicalGaussianDistributionIMLEstimation(GraphicalGaussianDistribution const * estimated, MultivariateData const * data);
                GraphicalGaussianDistributionIMLEstimation(const GraphicalGaussianDistributionIMLEstimation& estimation);
                virtual ~GraphicalGaussianDistributionIMLEstimation();

                class STATISKIT_CORE_API CDEstimator : public OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >::Estimator
                {
                    public:
                        CDEstimator();
                        CDEstimator(const CDEstimator& estimator);
                        virtual ~CDEstimator();

                        virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=true) const;

                        const statiskit::linalg::solver_type& get_inverser() const;
                        void set_inverser(const statiskit::linalg::solver_type& inverser);

                        virtual std::unique_ptr< MultivariateDistributionEstimation::Estimator > copy() const;

                        virtual void set_graph(const UndirectedGraph& graph);

                    protected:
                        statiskit::linalg::solver_type _inverser;
                };

                class STATISKIT_CORE_API NREstimator : public CDEstimator
                {
                    public:
                        NREstimator();
                        NREstimator(const NREstimator& estimator);
                        virtual ~NREstimator();

                        virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=true) const;

                        virtual std::unique_ptr< MultivariateDistributionEstimation::Estimator > copy() const;

                        linalg::solver_type get_solver() const;
                        void set_solver(const linalg::solver_type& solver);

                        double get_alpha() const;
                        void set_alpha(const double& alpha);

                        double get_beta() const;
                        void set_beta(const double& beta);      

                    protected:
                        linalg::solver_type _solver;
                        double _alpha;
                        double _beta;
                };
        };
    }
}

#endif
