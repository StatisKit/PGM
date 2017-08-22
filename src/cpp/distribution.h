#ifndef STATISKIT_PGM_DISTRIBUTION_H
#define STATISKIT_PGM_DISTRIBUTION_H

#include <boost/random/uniform_01.hpp>
#include <statiskit/core/distribution.h>
#include <statiskit/core/estimation.h>
#include <statiskit/core/moment.h>

#include <unordered_map>
#include <statiskit/glm/predictor.h>

#include "graph.h"

namespace statiskit
{
    namespace pgm
    {
        class STATISKIT_PGM_API DirectedGaussianDistribution : public PolymorphicCopy< MultivariateDistribution, DirectedGaussianDistribution, ContinuousMultivariateDistribution >
        {
            public:
                DirectedGaussianDistribution(const DirectedGraph& graph);
                DirectedGaussianDistribution(const DirectedGaussianDistribution& gaussian);
                virtual ~DirectedGaussianDistribution();

                virtual Index get_nb_components() const;

                virtual unsigned int get_nb_parameters() const;

                virtual double probability(const MultivariateEvent* event, const bool& logarithm) const;

                std::unique_ptr< MultivariateEvent > simulate() const;

                const DirectedGraph* get_graph() const;

                statiskit::glm::ScalarPredictor* get_predictor(const Index& v) const;
                void set_predictor(const Index& v, const statiskit::glm::ScalarPredictor& predictor);

                double get_mu(const Index& v) const;
                void set_mu(const Index& v, const double& mu);

                const Eigen::VectorXd& get_sigma() const;
                void set_sigma(const Eigen::VectorXd& sigma);

            protected:
                DirectedGraph* _graph;
                std::unordered_map< Index, statiskit::glm::ScalarPredictor* > _predictors;
                std::unordered_map< Index, double > _mu;
                Eigen::VectorXd _sigma;
        };

        class STATISKIT_PGM_API DirectedGaussianDistributionMLEstimation : public ActiveEstimation< DirectedGaussianDistribution, ContinuousMultivariateDistributionEstimation >
        {
            public:
                DirectedGaussianDistributionMLEstimation();
                DirectedGaussianDistributionMLEstimation(DirectedGaussianDistribution const * estimated, MultivariateData const * data);
                DirectedGaussianDistributionMLEstimation(const DirectedGaussianDistributionMLEstimation& estimation);
                virtual ~DirectedGaussianDistributionMLEstimation();

                class STATISKIT_PGM_API Estimator : public ContinuousMultivariateDistributionEstimation::Estimator
                {
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
                        virtual ~Estimator();

                        virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=true) const;

                        virtual std::unique_ptr< MultivariateDistributionEstimation::Estimator > copy() const;

                        const statiskit::linalg::solver_type& get_solver() const;
                        void set_solver(const statiskit::linalg::solver_type& solver);

                        const DirectedGraph* get_graph() const;
                        virtual void set_graph(const DirectedGraph& graph);

                    protected:
                        statiskit::linalg::solver_type _solver;
                        DirectedGraph* _graph;

                        Eigen::VectorXd compute_y(const MultivariateData& data, const Index& u) const;
                };
        };

        class STATISKIT_PGM_API UndirectedGaussianDistribution : public PolymorphicCopy< MultivariateDistribution, UndirectedGaussianDistribution, ContinuousMultivariateDistribution >
        {
            public:
                UndirectedGaussianDistribution(const Eigen::VectorXd& mu);
                UndirectedGaussianDistribution(const Eigen::VectorXd& mu, const Eigen::MatrixXd& theta);
                UndirectedGaussianDistribution(const UndirectedGaussianDistribution& gaussian);
                virtual ~UndirectedGaussianDistribution();

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

        class STATISKIT_PGM_API ChordalGaussianDistributionMLEstimation : public ActiveEstimation< UndirectedGaussianDistribution, ContinuousMultivariateDistributionEstimation >
        {
            public:
                ChordalGaussianDistributionMLEstimation();
                ChordalGaussianDistributionMLEstimation(UndirectedGaussianDistribution const * estimated, MultivariateData const * data);
                ChordalGaussianDistributionMLEstimation(const ChordalGaussianDistributionMLEstimation& estimation);
                virtual ~ChordalGaussianDistributionMLEstimation();

                class STATISKIT_PGM_API Estimator : public ContinuousMultivariateDistributionEstimation::Estimator
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

        class STATISKIT_PGM_API UndirectedGaussianDistributionIMLEstimation : public OptimizationEstimation< statiskit::linalg::Matrix, UndirectedGaussianDistribution, ChordalGaussianDistributionMLEstimation >
        {
            public:
                UndirectedGaussianDistributionIMLEstimation();
                UndirectedGaussianDistributionIMLEstimation(UndirectedGaussianDistribution const * estimated, MultivariateData const * data);
                UndirectedGaussianDistributionIMLEstimation(const UndirectedGaussianDistributionIMLEstimation& estimation);
                virtual ~UndirectedGaussianDistributionIMLEstimation();


                class STATISKIT_PGM_API Estimator : public OptimizationEstimation< statiskit::linalg::Matrix, UndirectedGaussianDistribution, ChordalGaussianDistributionMLEstimation >::Estimator
                {
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
                        virtual ~Estimator();

                        const statiskit::linalg::solver_type& get_inverser() const;
                        void set_inverser(const statiskit::linalg::solver_type& inverser);

                        virtual void set_graph(const UndirectedGraph& graph);

                    protected:
                        statiskit::linalg::solver_type _inverser;
                };

                struct STATISKIT_PGM_API GAEstimator : public Estimator
                {
                    GAEstimator();
                    GAEstimator(const GAEstimator& estimator);
                    virtual ~GAEstimator();

                    virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=true) const;

                    virtual std::unique_ptr< MultivariateDistributionEstimation::Estimator > copy() const;
                };

                class STATISKIT_PGM_API NREstimator : public Estimator
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

        class STATISKIT_PGM_API UndirectedGaussianDistributionSIMLEstimation : public OptimizationEstimation< statiskit::linalg::SparseMatrix, UndirectedGaussianDistribution, ChordalGaussianDistributionMLEstimation >
        {
            public:
                UndirectedGaussianDistributionSIMLEstimation();
                UndirectedGaussianDistributionSIMLEstimation(UndirectedGaussianDistribution const * estimated, MultivariateData const * data);
                UndirectedGaussianDistributionSIMLEstimation(const UndirectedGaussianDistributionSIMLEstimation& estimation);
                virtual ~UndirectedGaussianDistributionSIMLEstimation();

                class STATISKIT_PGM_API Estimator : public OptimizationEstimation< statiskit::linalg::SparseMatrix, UndirectedGaussianDistribution, ChordalGaussianDistributionMLEstimation >::Estimator
                {
                    public:
                        Estimator();
                        Estimator(const Estimator& estimator);
                        virtual ~Estimator();

                        const statiskit::linalg::sparse_solver_type& get_inverser() const;
                        void set_inverser(const statiskit::linalg::sparse_solver_type& inverser);

                        virtual void set_graph(const UndirectedGraph& graph);

                    protected:
                        statiskit::linalg::sparse_solver_type _inverser;
                };

                class STATISKIT_PGM_API GAEstimator : public Estimator
                {
                    public:
                        GAEstimator();
                        GAEstimator(const GAEstimator& estimator);
                        virtual ~GAEstimator();

                        virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=true) const;

                        virtual std::unique_ptr< MultivariateDistributionEstimation::Estimator > copy() const;

                    protected:

                        template<class M> std::unique_ptr< MultivariateDistributionEstimation > compute(const MultivariateData& data, const bool& lazy) const;
                };
        };
    }
}

#include "distribution.hpp"
#endif
