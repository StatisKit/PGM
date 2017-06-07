#include "distribution.h"
// #include <statiskit/linalg/Eigen.h>

namespace statiskit
{
    namespace pgm
    {        
        GraphicalGaussianDistribution::GraphicalGaussianDistribution(const Eigen::VectorXd& mu, const Eigen::MatrixXd& theta)
        {
            if(mu.size() != theta.rows())
            { throw size_error("mu", mu.size(), theta.rows(), size_error::equal); }
            if(mu.size() != theta.cols())
            { throw size_error("mu", mu.size(), theta.cols(), size_error::equal); }
            _mu = mu;
            _theta = theta;
            _determinant = _theta.inverse().determinant();
        }

        GraphicalGaussianDistribution::GraphicalGaussianDistribution(const GraphicalGaussianDistribution& gaussian)
        {
            _mu = gaussian._mu;
            _theta = gaussian._theta;
            _determinant = gaussian._determinant;
        }

        GraphicalGaussianDistribution::~GraphicalGaussianDistribution()
        {}

        Index GraphicalGaussianDistribution::get_nb_components() const
        { return _mu.size(); }

        unsigned int GraphicalGaussianDistribution::get_nb_parameters() const
        { 
            unsigned int nb_parameters = 0;
            for(Index i = 0, max_index = get_nb_components(); i < max_index; ++i)
            {
                if(_mu(i) != 0.)
                { ++nb_parameters; }
                for(Index j = 0; j < i; ++j)
                {
                    if(_theta(i,j) != 0.)
                    { ++nb_parameters; }
                }
            }
            return nb_parameters;
        }
        
        std::unique_ptr< MultivariateEvent > GraphicalGaussianDistribution::simulate() const
        {
            Eigen::VectorXd x(get_nb_components());
            boost::normal_distribution<> dist(0.,1.);
            boost::variate_generator<boost::mt19937&, boost::normal_distribution<> > simulator(__impl::get_random_generator(), dist);
            for (Index index = 0, max_index = x.size(); index < max_index; ++index)
            { x(index) = simulator(); }
            Eigen::LLT< Eigen:: MatrixXd > llt(_theta.inverse());
            Eigen::MatrixXd B = llt.matrixL();
            x = _mu + B * x;
            return std::make_unique< VectorEvent >(x);
        }

        const Eigen::VectorXd& GraphicalGaussianDistribution::get_mu() const
        { return _mu; }

        void GraphicalGaussianDistribution::set_mu(const Eigen::VectorXd& mu)
        { _mu = mu; }

        const Eigen::MatrixXd& GraphicalGaussianDistribution::get_theta() const
        { return _theta; }

        void GraphicalGaussianDistribution::set_theta(const Eigen::MatrixXd& theta)
        { _theta = theta; }

        Eigen::MatrixXd GraphicalGaussianDistribution::get_sigma() const
        { return _theta.inverse(); }

        UndirectedGraph GraphicalGaussianDistribution::get_graph() const
        {
            UndirectedGraph graph(get_nb_components());
            for(Index i = 0, max_index = get_nb_components(); i < max_index; ++i)
            {
                for(Index j = 0; j < i; ++j)
                {
                    if(_theta(i,j) != 0.)
                    { graph.add_edge(i, j); }
                }
            }
            return graph;
        }

        double GraphicalGaussianDistribution::probability(const MultivariateEvent* event, const bool& logarithm) const
        {
            double p;
            if(event)
            {
                if(event->size() == get_nb_components())
                {
                    Eigen::VectorXd x(get_nb_components());
                    for(Index index = 0, max_index = get_nb_components(); index < max_index; ++index)
                    {
                        const UnivariateEvent* uevent = event->get(index);
                        if(uevent && uevent->get_outcome() == CONTINUOUS && uevent->get_event() == ELEMENTARY)
                        { x(index) = static_cast< const ContinuousElementaryEvent* >(uevent)->get_value(); }
                        else
                        { x(index) = std::numeric_limits< double >::quiet_NaN(); }
                    }
                    if(logarithm)
                    { p =  - 1 / 2. * (get_nb_components() * log(2 * boost::math::constants::pi< double >()) + log(_determinant) + (x - _mu).transpose() * _theta * (x - _mu)); }
                    if(!logarithm)
                    { p =  1 / pow(2 * boost::math::constants::pi<double>(), get_nb_components() / 2.) * 1 / sqrt(_determinant) * exp(- 1 / 2. * (x - _mu).transpose() * _theta * (x - _mu)); }
                }
                else
                { p = std::numeric_limits< double >::quiet_NaN(); }
            }
            else if(logarithm)
            { p = 0.; }
            else
            { p = 1.; }
            return p;
        }

        GraphicalGaussianDistributionMLEstimation::GraphicalGaussianDistributionMLEstimation()
        {}

        GraphicalGaussianDistributionMLEstimation::GraphicalGaussianDistributionMLEstimation(GraphicalGaussianDistribution const * estimated, MultivariateData const * data) : ActiveEstimation< GraphicalGaussianDistribution, ContinuousMultivariateDistributionEstimation >(estimated, data)
        {}

        GraphicalGaussianDistributionMLEstimation::GraphicalGaussianDistributionMLEstimation(const GraphicalGaussianDistributionMLEstimation& estimation) : ActiveEstimation< GraphicalGaussianDistribution, ContinuousMultivariateDistributionEstimation >(estimation)
        {}

        GraphicalGaussianDistributionMLEstimation::~GraphicalGaussianDistributionMLEstimation()
        {}

        GraphicalGaussianDistributionMLEstimation::Estimator::Estimator()
        { _graph = nullptr; }

        GraphicalGaussianDistributionMLEstimation::Estimator::Estimator(const Estimator& estimator)
        { _graph = estimator._graph->copy().release(); }

        GraphicalGaussianDistributionMLEstimation::Estimator::~Estimator()
        {
            if(_graph)
            { delete _graph; }
        }

        std::unique_ptr< MultivariateDistributionEstimation > GraphicalGaussianDistributionMLEstimation::Estimator::operator() (const MultivariateData& data, const bool& lazy) const
        {
            if(!_graph)
            { throw member_error("graph", "you must give a graph to infer a graphical Gaussian distribution"); }
            const MultivariateSampleSpace* sample_space = data.get_sample_space();
            if(_graph->get_nb_vertices() != sample_space->size())
            { throw parameter_error("data", "must have the same number of components as the number of vertices in the given graph"); }
            for(Index index = 0, max_index = sample_space->size(); index < max_index; ++index)
            {
                if(sample_space->get(index)->get_outcome() != CONTINUOUS)
                { throw sample_space_error(CONTINUOUS); }
            }
            NaturalMeanVectorEstimation::Estimator mean_estimator = NaturalMeanVectorEstimation::Estimator();
            std::unique_ptr< MeanVectorEstimation > mean_estimation = mean_estimator(data);
            NaturalCovarianceMatrixEstimation::Estimator covariance_estimator = NaturalCovarianceMatrixEstimation::Estimator();
            std::unique_ptr< CovarianceMatrixEstimation > covariance_estimation = covariance_estimator(data, mean_estimation->get_mean());
            Eigen::MatrixXd S = covariance_estimation->get_covariance();
            CliqueTree clique_tree = CliqueTree(*_graph);
            Eigen::MatrixXd X = S;
            for(Index index = clique_tree.get_nb_cliques(), min_index = 1; index > min_index; --index)
            {
                submatrix(X,
                          clique_tree.get_separator(index - 1),
                          clique_tree.get_clique(index - 1), 
                          submatrix(X,
                                    clique_tree.get_separator(index - 1),
                                    clique_tree.get_clique(index - 1))
                              * submatrix(X,
                                          clique_tree.get_clique(index - 1),
                                          clique_tree.get_clique(index - 1)).inverse());
                submatrix(X,
                          clique_tree.get_separator(index - 1),
                          clique_tree.get_separator(index - 1),
                          submatrix(X,
                                    clique_tree.get_separator(index - 1),
                                    clique_tree.get_separator(index - 1))
                             - submatrix(X,
                                         clique_tree.get_separator(index - 1),
                                         clique_tree.get_clique(index - 1))
                             * submatrix(X,
                                         clique_tree.get_clique(index - 1),
                                         clique_tree.get_clique(index - 1)).inverse()
                             * submatrix(X,
                                         clique_tree.get_separator(index - 1),
                                         clique_tree.get_clique(index - 1)).transpose());  
            }
            Eigen::MatrixXd D = Eigen::MatrixXd::Zero(X.rows(), X.cols());
            for(Index index = 0, max_index = clique_tree.get_nb_cliques(); index < max_index; ++index)
            { submatrix(D, clique_tree.get_clique(index), clique_tree.get_clique(index), submatrix(X, clique_tree.get_clique(index), clique_tree.get_clique(index))); }
            Eigen::MatrixXd K = D.inverse();
            for(Index index = 1, max_index = clique_tree.get_nb_cliques(); index < max_index; ++index)
            {
                submatrix(K,
                          clique_tree.get_clique(index),
                          clique_tree.get_separator(index),
                          - submatrix(K,
                                      clique_tree.get_clique(index),
                                      clique_tree.get_clique(index))
                            * submatrix(S,
                                        clique_tree.get_clique(index),
                                        clique_tree.get_separator(index))
                            * submatrix(S,
                                        clique_tree.get_separator(index),
                                        clique_tree.get_separator(index)));
                submatrix(K,
                          clique_tree.get_separator(index),
                          clique_tree.get_clique(index),
                          submatrix(K,
                                    clique_tree.get_clique(index),
                                    clique_tree.get_separator(index)).transpose());
                submatrix(K,
                          clique_tree.get_separator(index),
                          clique_tree.get_separator(index),
                          submatrix(K,
                                    clique_tree.get_separator(index),
                                    clique_tree.get_separator(index))
                            + submatrix(K,
                                        clique_tree.get_separator(index),
                                        clique_tree.get_clique(index))
                            * submatrix(K,
                                        clique_tree.get_clique(index),
                                        clique_tree.get_clique(index)).inverse()
                            * submatrix(K,
                                        clique_tree.get_clique(index),
                                        clique_tree.get_separator(index)));
            }
            std::unique_ptr< GraphicalGaussianDistributionMLEstimation > estimation = std::make_unique< GraphicalGaussianDistributionMLEstimation >(new GraphicalGaussianDistribution(mean_estimation->get_mean(), K), &data);
            return std::move(estimation);
        }

        std::unique_ptr< MultivariateDistributionEstimation::Estimator > GraphicalGaussianDistributionMLEstimation::Estimator::copy() const
        { return std::make_unique< Estimator >(*this); }

        const UndirectedGraph* GraphicalGaussianDistributionMLEstimation::Estimator::get_graph() const
        { return _graph; }

        void GraphicalGaussianDistributionMLEstimation::Estimator::set_graph(const UndirectedGraph& graph)
        { 
            if(!graph.is_chordal())
            { throw parameter_error("graph", "must be a chordal graph"); }
            if(_graph)
            { delete _graph; }
            _graph = graph.copy().release(); 
        }

        GraphicalGaussianDistributionNREstimation::GraphicalGaussianDistributionNREstimation() : OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >()
        {}

        GraphicalGaussianDistributionNREstimation::GraphicalGaussianDistributionNREstimation(GraphicalGaussianDistribution const * estimated, MultivariateData const * data) : OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >(estimated, data)
        {}

        GraphicalGaussianDistributionNREstimation::GraphicalGaussianDistributionNREstimation(const GraphicalGaussianDistributionNREstimation& estimation) : OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >(estimation)
        {}

        GraphicalGaussianDistributionNREstimation::~GraphicalGaussianDistributionNREstimation()
        {}

        GraphicalGaussianDistributionNREstimation::Estimator::Estimator() : OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >::Estimator()
        {}

        GraphicalGaussianDistributionNREstimation::Estimator::Estimator(const Estimator& estimator) : OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >::Estimator(estimator)
        {}

        GraphicalGaussianDistributionNREstimation::Estimator::~Estimator()
        {}

        std::unique_ptr< MultivariateDistributionEstimation > GraphicalGaussianDistributionNREstimation::Estimator::operator() (const MultivariateData& data, const bool& lazy) const
        {
            if(!_graph)
            { throw member_error("graph", "you must give a graph to infer a graphical Gaussian distribution"); }
            const MultivariateSampleSpace* sample_space = data.get_sample_space();
            if(_graph->get_nb_vertices() != sample_space->size())
            { throw parameter_error("data", "must have the same number of components as the number of vertices in the given graph"); }
            for(Index index = 0, max_index = sample_space->size(); index < max_index; ++index)
            {
                if(sample_space->get(index)->get_outcome() != CONTINUOUS)
                { throw sample_space_error(CONTINUOUS); }
            }
            NaturalMeanVectorEstimation::Estimator mean_estimator = NaturalMeanVectorEstimation::Estimator();
            std::unique_ptr< MeanVectorEstimation > mean_estimation = mean_estimator(data);
            NaturalCovarianceMatrixEstimation::Estimator covariance_estimator = NaturalCovarianceMatrixEstimation::Estimator();
            std::unique_ptr< CovarianceMatrixEstimation > covariance_estimation = covariance_estimator(data, mean_estimation->get_mean());
            Eigen::MatrixXd S = covariance_estimation->get_covariance();
            unsigned int q = _graph->get_nb_edges() + _graph->get_nb_vertices();
            Eigen::VectorXd x = Eigen::VectorXd::Ones(q);
            std::vector< Index > I(q), J(q);
            Eigen::MatrixXd E0 = Eigen::MatrixXd::Zero(sample_space->size(), q), E1 = Eigen::MatrixXd::Zero(sample_space->size(), q);
            q = 0;
            for(Index u = 0, max_u = _graph->get_nb_vertices(); u < max_u; ++u)
            {
                const Neighbours& ne = _graph->neighbours(u);
                Neighbours::const_iterator itv = ne.begin(), itv_end = ne.end();
                while(itv != itv_end && *itv < u)
                {
                    I[q] = u;
                    J[q] = *itv;
                    E0(u, q) = 1;
                    E1(*itv, q) = 1;
                    ++q;
                    ++itv;
                }
                I[q] = u;
                J[q] = u;
                E0(u, q) = 1;
                E1(u, q) = 1;
                // x(q) = 1. / (2 * S(u, u));
                ++q;
            }
            std::cout << E0 << std::endl << std::endl;
            std::cout << E1 << std::endl << std::endl;
            std::cout << x << std::endl << std::endl;
            Eigen::MatrixXd Kc = E0 * x.asDiagonal() * E1.transpose() + E1 * x.asDiagonal() * E0.transpose(), Kp;
            std::cout << Kc << std::endl << std::endl;
            unsigned int its = 0;
            do
            {
                Kp = Kc;
                Eigen::MatrixXd Kinv = Kp.inverse();
                Eigen::VectorXd s = 2 * (submatrix(S, I, J) - submatrix(Kinv, I, J)).diagonal();
                std::cout << s << std::endl << std::endl;
                Eigen::MatrixXd H = 2 * submatrix(Kinv, I, I).cwiseProduct(submatrix(Kinv, J, J)) + 2 * submatrix(Kinv, I, J).cwiseProduct(submatrix(Kinv, J, I));
                std::cout << H << std::endl << std::endl;
                s = (x - s).eval();
                x = statiskit::linalg::solve(H , s, statiskit::linalg::solver_type::jacobiSvd);
                Kc = E0 * x.asDiagonal() * E1.transpose() + E1 * x.asDiagonal() * E0.transpose();
                ++its;
            } while(run(its, __impl::reldiff(Kc, Kp)));
            std::unique_ptr< GraphicalGaussianDistributionNREstimation > estimation = std::make_unique< GraphicalGaussianDistributionNREstimation >(new GraphicalGaussianDistribution(mean_estimation->get_mean(), Kc), &data);
            return std::move(estimation);
        }

        std::unique_ptr< MultivariateDistributionEstimation::Estimator > GraphicalGaussianDistributionNREstimation::Estimator::copy() const
        { return std::make_unique< Estimator >(*this); }

        void GraphicalGaussianDistributionNREstimation::Estimator::set_graph(const UndirectedGraph& graph)
        { _graph = graph.copy().release(); }
    }
}