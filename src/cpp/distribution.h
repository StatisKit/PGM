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

                Eigen::MatrixXd get_sigma() const;

                UndirectedGraph get_graph() const;

            protected:
                Eigen::VectorXd _mu;
                Eigen::MatrixXd _theta;
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

        class STATISKIT_PGM_API GraphicalGaussianDistributionNREstimation : public OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >
        {
            public:
                GraphicalGaussianDistributionNREstimation();
                GraphicalGaussianDistributionNREstimation(GraphicalGaussianDistribution const * estimated, MultivariateData const * data);
                GraphicalGaussianDistributionNREstimation(const GraphicalGaussianDistributionNREstimation& estimation);
                virtual ~GraphicalGaussianDistributionNREstimation();

                class STATISKIT_CORE_API Estimator : public OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >::Estimator
                {
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
                        virtual ~Estimator();

                        virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=true) const;

                        virtual std::unique_ptr< MultivariateDistributionEstimation::Estimator > copy() const;

                        virtual void set_graph(const UndirectedGraph& graph);
                };
        };
    }
}

#endif
