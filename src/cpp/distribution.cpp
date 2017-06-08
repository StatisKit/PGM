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
            set_theta(theta);
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
            x = _mu + _cholesky * x;
            return std::make_unique< VectorEvent >(x);
        }

        const Eigen::VectorXd& GraphicalGaussianDistribution::get_mu() const
        { return _mu; }

        void GraphicalGaussianDistribution::set_mu(const Eigen::VectorXd& mu)
        { _mu = mu; }

        const Eigen::MatrixXd& GraphicalGaussianDistribution::get_theta() const
        { return _theta; }

        void GraphicalGaussianDistribution::set_theta(const Eigen::MatrixXd& theta)
        {
            Eigen::MatrixXd sigma = theta.inverse();
            Eigen::LLT< Eigen:: MatrixXd > llt(sigma);
            if(llt.info() == Eigen::NumericalIssue)
            { throw parameter_error("theta", "non semi-positive definite matrix"); }   
            _cholesky = llt.matrixL();
            _determinant = sigma.determinant();
            _theta = theta;
         }

        const Eigen::MatrixXd& GraphicalGaussianDistribution::get_cholesky() const
        { return _cholesky; }

        Eigen::MatrixXd GraphicalGaussianDistribution::get_sigma() const
        { return _cholesky * _cholesky.transpose(); }

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

        GraphicalGaussianDistributionIMLEstimation::GraphicalGaussianDistributionIMLEstimation() : OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >()
        {}

        GraphicalGaussianDistributionIMLEstimation::GraphicalGaussianDistributionIMLEstimation(GraphicalGaussianDistribution const * estimated, MultivariateData const * data) : OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >(estimated, data)
        {}

        GraphicalGaussianDistributionIMLEstimation::GraphicalGaussianDistributionIMLEstimation(const GraphicalGaussianDistributionIMLEstimation& estimation) : OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >(estimation)
        {}

        GraphicalGaussianDistributionIMLEstimation::~GraphicalGaussianDistributionIMLEstimation()
        {}

        GraphicalGaussianDistributionIMLEstimation::CDEstimator::CDEstimator() : OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >::Estimator()
        {}

        GraphicalGaussianDistributionIMLEstimation::CDEstimator::CDEstimator(const CDEstimator& estimator) : OptimizationEstimation< Eigen::MatrixXd, GraphicalGaussianDistribution, GraphicalGaussianDistributionMLEstimation >::Estimator(estimator)
        {}

        GraphicalGaussianDistributionIMLEstimation::CDEstimator::~CDEstimator()
        {}

        std::unique_ptr< MultivariateDistributionEstimation > GraphicalGaussianDistributionIMLEstimation::CDEstimator::operator() (const MultivariateData& data, const bool& lazy) const
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
            std::cout << std::endl;
            NaturalMeanVectorEstimation::Estimator mean_estimator = NaturalMeanVectorEstimation::Estimator();
            std::unique_ptr< MeanVectorEstimation > mean_estimation = mean_estimator(data);
            NaturalCovarianceMatrixEstimation::Estimator covariance_estimator = NaturalCovarianceMatrixEstimation::Estimator();
            std::cout << "S" << std::endl;
            std::unique_ptr< CovarianceMatrixEstimation > covariance_estimation = covariance_estimator(data, mean_estimation->get_mean());
            Eigen::MatrixXd S = covariance_estimation->get_covariance();
            std::cout << S << std::endl;
            unsigned int q = _graph->get_nb_edges() + _graph->get_nb_vertices();
            Eigen::VectorXd x = Eigen::VectorXd::Zero(q);
            std::vector< Index > I(q), J(q);
            Eigen::MatrixXd E0 = Eigen::MatrixXd::Zero(_graph->get_nb_vertices(), q), E1 = Eigen::MatrixXd::Zero(_graph->get_nb_vertices(), q);
            q = 0;
            Eigen::MatrixXd K = Eigen::MatrixXd::Zero(_graph->get_nb_vertices(), _graph->get_nb_vertices());
            for(Index u = 0, max_u = _graph->get_nb_vertices(); u < max_u; ++u)
            {
                const Neighbours& ne = _graph->neighbours(u);
                for(Neighbours::const_iterator itv = ne.begin(), itv_end = ne.end(); itv != itv_end; ++itv)
                {
                    if(*itv < u)
                    {
                        I[q] = u;
                        J[q] = *itv;
                        E0(u, q) = 1;
                        E1(*itv, q) = 1;
                        ++q;
                    }
                    // if(S(u, *itv) < 0)
                    // {
                    //     K(u, *itv) = -1e-6;
                    //     K(*itv, u) = -1e-6;
                    // }
                    // else
                    // {
                    //     K(u, *itv) = 1e-6;
                    //     K(*itv, u) = 1e-6;
                    // }
                }
                I[q] = u;
                J[q] = u;
                E0(u, q) = 1;
                E1(u, q) = 1;
                x(q) = 1. / (2 * S(u, u));
                K(u, u) = 2 * x(q);
                ++q;
            }
            double determinant = K.determinant();
            double prev, curr = -log(determinant) + (K * S).trace();
            unsigned int its = 0;
            std::unique_ptr< GraphicalGaussianDistributionIMLEstimation > estimation = std::make_unique< GraphicalGaussianDistributionIMLEstimation >(nullptr, &data);
            // Eigen::VectorXd delta = Eigen::VectorXd::Zero(q);
            double s;
            Eigen::MatrixXd Kinv = K.inverse();
            q = 0;
            std::pair< Index, Index > edge;
            // for(Index u = 0, max_u = _graph->get_nb_vertices(); u < max_u; ++u)
            // {
            //     const Neighbours& ne = _graph->neighbours(u);
            //     for(Neighbours::const_iterator itv = ne.begin(), itv_end = ne.end(); itv != itv_end; ++itv)
            //     {
            //         edge = std::make_pair(u, *itv);
            //         double rhobar = S(edge.first, edge.second) / pow(Kinv(edge.first, edge.first) * Kinv(edge.second, edge.second), 1 / 2.);
            //         double discriminant = sqrt(4 * pow(rhobar, 2));
            //         std::pair< double, double > roots((- 1 - discriminant) / (2 * rhobar),
            //                                           (- 1 + discriminant) / (2 * rhobar));
            //         if(rhobar < 0.)
            //         { s = std::max(roots.first, roots.second); }
            //         else if(rhobar > 0.)
            //         { s = std::min(roots.first, roots.second); }
            //         else
            //         { s = roots.first; }
            //         s /= pow(S(edge.first, edge.first) * S(edge.second, edge.second), 1 / 2.);
            //         K += s * (E0.col(q) * E1.col(q).transpose() + E1.col(q) * E0.col(q).transpose());
            //         ++q;
            //     }
            //     edge = std::make_pair(u, u);
            //     double rhobar = S(edge.first, edge.second) / pow(Kinv(edge.first, edge.first) * Kinv(edge.second, edge.second), 1 / 2.);
            //     double discriminant = sqrt(4 * pow(rhobar, 2));
            //     std::pair< double, double > roots((- 1 - discriminant) / (2 * rhobar),
            //                                       (- 1 + discriminant) / (2 * rhobar));
            //     if(rhobar < 0.)
            //     { s = std::max(roots.first, roots.second); }
            //     else if(rhobar > 0.)
            //     { s = std::min(roots.first, roots.second); }
            //     else
            //     { s = roots.first; }
            //     s /= pow(S(edge.first, edge.first) * S(edge.second, edge.second), 1 / 2.);
            //     K += s * (E0.col(q) * E1.col(q).transpose() + E1.col(q) * E0.col(q).transpose());
            //     ++q;
            // }
            do
            {
                double max = -1 * std::numeric_limits< double >::infinity();
                unsigned int argmax = 0;
                q = 0;
                Kinv = K.inverse();
                std::cout << "Kinv:" << std::endl;
                for(Index u = 0, max_u = _graph->get_nb_vertices(); u < max_u; ++u)
                {
                    const Neighbours& ne = _graph->neighbours(u);
                    for(Neighbours::const_iterator itv = ne.begin(), itv_end = ne.end(); itv != itv_end; ++itv)
                    {
                        double derivative = fabs(S(u, *itv) - Kinv(u, *itv));
                        std::cout << u << " -- " << *itv << " : " << derivative << std::endl;
                        if(*itv < u && derivative > max)
                        {
                            max = derivative;
                            argmax = q;
                            edge = std::make_pair(u, *itv);
                        }
                        ++q;
                    }
                    if(its > 0)
                    {
                        double derivative = fabs(S(u, u) - Kinv(u, u));
                        std::cout << u << " -- " << u << " : " << derivative << std::endl;
                        if(derivative > max)
                        {
                            max = derivative;
                            argmax = q;
                            edge = std::make_pair(u, u);
                        }
                    }
                    ++q;
                }
                std::cout << "edge: " << edge.first << " " << edge.second << std::endl;
                double rho = Kinv(edge.first, edge.second) / pow(Kinv(edge.first, edge.first) * Kinv(edge.second, edge.second), 1 / 2.);
                double rhobar = S(edge.first, edge.second) / pow(Kinv(edge.first, edge.first) * Kinv(edge.second, edge.second), 1 / 2.);
                if(rho <= -1)
                { s = (1 + rhobar) / (2 * rhobar); }
                else if(rho >= 1)
                { s = (1 - rhobar) / (2 * rhobar); }
                else
                {
                    std::cout << "rho: " << rho << " and rhobar: " << rhobar << std::endl;
                    double discriminant = sqrt(pow(1 - pow(rho, 2) + 2 * rho * rhobar, 2) - 4 * rhobar * pow(1 - rho, 2) * (rho - rhobar));
                    std::cout << "disc: " << discriminant << std::endl;
                    std::pair< double, double > roots((1 - pow(rho, 2) + 2 * rho * rhobar - discriminant) / (2 * rhobar * (1 - pow(rho, 2.))),
                                                      (1 - pow(rho, 2) + 2 * rho * rhobar + discriminant) / (2 * rhobar * (1 - pow(rho, 2.))));
                    if(rhobar < 0.)
                    { s = std::max(roots.first, roots.second); }
                    else if(rhobar > 0.)
                    { s = std::min(roots.first, roots.second); }
                    else
                    { s = roots.first; }
                }
                std::cout << "s: " << s << std::endl;
                s /= pow(Kinv(edge.first, edge.first) * Kinv(edge.second, edge.second), 1 / 2.);
                std::cout << "s: " << s << std::endl;
                std::cout << "delta:" << std::endl;
                // std::cout << (E0.col(argmax) * E1.col(argmax).transpose() + E1.col(argmax) * E0.col(argmax).transpose()) << std::endl;
                // K += s * (E0.col(argmax) * E1.col(argmax).transpose() + E1.col(argmax) * E0.col(argmax).transpose());
                K(edge.first, edge.second) += s;
                K(edge.second, edge.first) += s;
            std::cout << "K" << std::endl;
            std::cout << K << std::endl;
            std::cout << "Kinv" << std::endl;
            std::cout << K.inverse() << std::endl;
                estimation->_iterations.push_back(K);
                ++its;
            } while(run(its, s));
            std::cout << "Kinv" << std::endl;
            std::cout << K.inverse() << std::endl;
            std::cout << "done" << std::endl;
            // K = E0 * x.asDiagonal() * E1.transpose() + E1 * x.asDiagonal() * E0.transpose();
            estimation->_estimated = new GraphicalGaussianDistribution(mean_estimation->get_mean(), K);
            return std::move(estimation);
        }

        std::unique_ptr< MultivariateDistributionEstimation::Estimator > GraphicalGaussianDistributionIMLEstimation::CDEstimator::copy() const
        { return std::make_unique< CDEstimator >(*this); }

        void GraphicalGaussianDistributionIMLEstimation::CDEstimator::set_graph(const UndirectedGraph& graph)
        { _graph = graph.copy().release(); }

        GraphicalGaussianDistributionIMLEstimation::NREstimator::NREstimator() : GraphicalGaussianDistributionIMLEstimation::CDEstimator()
        {
            _solver = linalg::llt;
            _alpha = 0.5;
            _beta = 0.5;
        }

        GraphicalGaussianDistributionIMLEstimation::NREstimator::NREstimator(const NREstimator& estimator) : GraphicalGaussianDistributionIMLEstimation::CDEstimator(estimator)
        {
            _solver = estimator._solver;
            _alpha = estimator._alpha;
            _beta = estimator._beta;
        }

        GraphicalGaussianDistributionIMLEstimation::NREstimator::~NREstimator()
        {}

        std::unique_ptr< MultivariateDistributionEstimation > GraphicalGaussianDistributionIMLEstimation::NREstimator::operator() (const MultivariateData& data, const bool& lazy) const
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
            std::cout << "S" << std::endl;
            Eigen::MatrixXd S = covariance_estimation->get_covariance();
            unsigned int q = _graph->get_nb_edges() + _graph->get_nb_vertices();
            std::cout << "x" << std::endl;
            Eigen::VectorXd x = Eigen::VectorXd::Zero(q);
            std::cout << "I & J" << std::endl;
            std::vector< Index > I(q), J(q);
            std::cout << "E0 & E1" << std::endl;
            Eigen::MatrixXd E0 = Eigen::MatrixXd::Zero(_graph->get_nb_vertices(), q), E1 = Eigen::MatrixXd::Zero(_graph->get_nb_vertices(), q);
            q = 0;
            std::cout << "K" << std::endl;
            Eigen::MatrixXd K = Eigen::MatrixXd::Zero(_graph->get_nb_vertices(), _graph->get_nb_vertices());
            for(Index u = 0, max_u = _graph->get_nb_vertices(); u < max_u; ++u)
            {
                const Neighbours& ne = _graph->neighbours(u);
                for(Neighbours::const_iterator itv = ne.begin(), itv_end = ne.end(); itv != itv_end; ++itv)
                {
                    if(*itv < u)
                    {
                        I[q] = u;
                        J[q] = *itv;
                        E0(u, q) = 1;
                        E1(*itv, q) = 1;
                        ++q;
                    }
                }
                I[q] = u;
                J[q] = u;
                E0(u, q) = 1;
                E1(u, q) = 1;
                x(q) = 1. / (2 * S(u, u));
                K(u, u) = 1 / S(u, u);
                ++q;
            }
            std::cout << "det" << std::endl;
            double determinant = K.determinant();
            std::cout << "curr" << std::endl;
            double prev, curr = -log(determinant) + (K * S).trace();
            // std::cout << Kc << std::endl << std::endl;
            unsigned int its = 0;
            std::unique_ptr< GraphicalGaussianDistributionIMLEstimation > estimation = std::make_unique< GraphicalGaussianDistributionIMLEstimation >(nullptr, &data);
            Eigen::VectorXd delta = Eigen::VectorXd::Zero(q);
            do
            {
                prev = curr;
                x +=  delta;
                std::cout << "push" << std::endl;
                estimation->_iterations.push_back(K);
                std::cout << "Kinv" << std::endl;
                Eigen::MatrixXd Kinv = K.inverse();
                std::cout << "s" << std::endl;
                Eigen::VectorXd s = - 2 * submatrix((S - Kinv).eval(), I, J).diagonal();
                std::cout << "H" << std::endl;
                Eigen::MatrixXd H = 2 * submatrix(Kinv, I, I).cwiseProduct(submatrix(Kinv, J, J)) + 2 * submatrix(Kinv, I, J).cwiseProduct(submatrix(Kinv, J, I));
                std::cout << "delta" << std::endl;
                delta = statiskit::linalg::solve(H , s, _solver);
                std::cout << "done" << std::endl;
                unsigned int dump = 0;
                bool cont;
                do
                {
                    K = E0 * (x + delta).asDiagonal() * E1.transpose() + E1 * (x +  delta).asDiagonal() * E0.transpose();
                    delta *= _beta;
                    determinant = K.determinant();
                    curr = -log(determinant) + (K * S).trace();
                    ++dump;
                    cont = determinant <= 0. || !boost::math::isfinite(curr);
                    if(!cont)
                    { cont = curr > prev - _alpha * s.transpose() * delta; }
                    std::cout << curr << " against " << prev - _alpha * s.transpose() * delta << ": " << cont << " (" << delta.norm() << ")" << std::endl;
                } while(cont && run(its + dump, delta.norm()));
                std::cout << dump << std::endl;
                // std::cout << delta << std::endl;
                ++its;
            } while(run(its, delta.norm()));
            K = E0 * x.asDiagonal() * E1.transpose() + E1 * x.asDiagonal() * E0.transpose();
            estimation->_estimated = new GraphicalGaussianDistribution(mean_estimation->get_mean(), K);
            return std::move(estimation);
        }

        std::unique_ptr< MultivariateDistributionEstimation::Estimator > GraphicalGaussianDistributionIMLEstimation::NREstimator::copy() const
        { return std::make_unique< NREstimator >(*this); }

        linalg::solver_type GraphicalGaussianDistributionIMLEstimation::NREstimator::get_solver() const
        { return _solver; }

        void GraphicalGaussianDistributionIMLEstimation::NREstimator::set_solver(const linalg::solver_type& solver)
        { _solver = solver; }

        double GraphicalGaussianDistributionIMLEstimation::NREstimator::get_alpha() const
        { return _alpha; }

        void GraphicalGaussianDistributionIMLEstimation::NREstimator::set_alpha(const double& alpha)
        {
            if(alpha <= 0. || alpha > 0.5)
            { throw interval_error("alpha", alpha, 0., 0.5, std::make_pair< bool, bool >(false, true)); }
            _alpha = alpha;
        }

        double GraphicalGaussianDistributionIMLEstimation::NREstimator::get_beta() const
        { return _beta; }

        void GraphicalGaussianDistributionIMLEstimation::NREstimator::set_beta(const double& beta)
        {
            if(beta <= 0. || beta >= 1.)
            { throw interval_error("beta", beta, 0., 1., std::make_pair< bool, bool >(false, false)); }
            _beta = beta;
        }
    }
}