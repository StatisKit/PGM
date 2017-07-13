#ifndef STATISKIT_PGM_DISTRIBUTION_HPP
#define STATISKIT_PGM_DISTRIBUTION_HPP

namespace statiskit
{
    namespace pgm
    {
        template<class M>
            std::unique_ptr< MultivariateDistributionEstimation > GraphicalGaussianDistributionSIMLEstimation::CDEstimator::compute(const MultivariateData& data, const bool& lazy) const
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
                Eigen::MatrixXd S = covariance_estimation->get_covariance(), I = Eigen::VectorXd::Ones(_graph->get_nb_vertices()).asDiagonal();
                Eigen::SparseMatrix< double > K = Eigen::SparseMatrix< double >(_graph->get_nb_vertices(), _graph->get_nb_vertices());
                Eigen::VectorXi entries = Eigen::VectorXi::Zero(_graph->get_nb_vertices());
                switch(_inverser)
                {
                    case statiskit::linalg::simplicialLLT:
                    case statiskit::linalg::simplicialLDLT:
                    case statiskit::linalg::conjugateGradient:
                        for(Index index = 0, max_index = _graph->get_nb_vertices(); index < max_index; ++index)
                        {
                            unsigned int degree = 1;
                            const Neighbours& ne = _graph->neighbours(index);
                            for(Neighbours::const_iterator itv = ne.begin(), itv_end = ne.end(); itv != itv_end; ++itv)
                            {
                                if(*itv <= index)
                                { ++degree; }
                            }
                            entries(index) = degree; 
                        }
                        K.reserve(entries);
                        for(Index index = 0, max_index = _graph->get_nb_vertices(); index < max_index; ++index)
                        { 
                            K.insert(index, index) = 1 / S(index, index);
                            const Neighbours& ne = _graph->neighbours(index);
                            for(Neighbours::const_iterator itv = ne.begin(), itv_end = ne.end(); itv != itv_end; ++itv)
                            {
                                if(*itv <= index)
                                { K.insert(index, *itv) = 0.; }
                            }
                        }
                        break;
                    case statiskit::linalg::sparseLU:
                    case statiskit::linalg::sparseQR:
                    case statiskit::linalg::leastSquaresConjugateGradient:
                    case statiskit::linalg::biCGSTAB:
                        for(Index index = 0, max_index = _graph->get_nb_vertices(); index < max_index; ++index)
                        {
                            unsigned int degree = 1;
                            const Neighbours& ne = _graph->neighbours(index);
                            for(Neighbours::const_iterator itv = ne.begin(), itv_end = ne.end(); itv != itv_end; ++itv)
                            { ++degree; }
                            entries(index) = degree; 
                        }
                        K.reserve(entries);
                        for(Index index = 0, max_index = _graph->get_nb_vertices(); index < max_index; ++index)
                        { 
                            K.insert(index, index) = 1 / S(index, index);
                            const Neighbours& ne = _graph->neighbours(index);
                            for(Neighbours::const_iterator itv = ne.begin(), itv_end = ne.end(); itv != itv_end; ++itv)
                            { K.insert(index, *itv) = 0.; }
                        }
                        break;
                }
                K.makeCompressed();
                M Solver;
                Solver.analyzePattern(K);
                Solver.factorize(K);
                double determinant = Solver.determinant();
                double prev, curr = log(determinant) - (K.selfadjointView< Eigen::Lower >() * S).trace();
                unsigned int its = 0;
                double max;
                std::unique_ptr< MultivariateDistributionEstimation > estimation;
                GraphicalGaussianDistribution* estimated = new GraphicalGaussianDistribution(mean_estimation->get_mean());
                if(lazy)
                { estimation = std::make_unique< LazyEstimation< GraphicalGaussianDistribution, ContinuousMultivariateDistributionEstimation > >(estimated); }
                else
                { 
                    estimation = std::make_unique< GraphicalGaussianDistributionSIMLEstimation >(estimated, &data);
                    static_cast< GraphicalGaussianDistributionSIMLEstimation* >(estimation.get())->_iterations.push_back(K);
                }
                do
                {
                    prev = curr;
                    for(Index u = 0, max_u = _graph->get_nb_vertices(); u < max_u; ++u)
                    {
                        Neighbours ne = _graph->neighbours(u);
                        ne.insert(u);
                        for(Neighbours::const_iterator itv = ne.begin(), itv_end = ne.end(); itv != itv_end; ++itv)
                        {
                            if(*itv <= u)
                            {
                                Eigen::MatrixXd Kinv = Solver.solve(I);
                                double rho = Kinv(u, *itv) / pow(Kinv(u, u) * Kinv(*itv, *itv), 1 / 2.);
                                double rhobar = S(u, *itv) / pow(Kinv(u, u) * Kinv(*itv, *itv), 1 / 2.);
                                double s = pow(Kinv(u, u) * Kinv(*itv, *itv), - 1 / 2.);
                                if(rho <= -1)
                                { s *= (1 + rhobar) / (2 * rhobar); }
                                else if(rho >= 1)
                                { s *= (1 - rhobar) / (2 * rhobar); }
                                else
                                {
                                    double discriminant = sqrt(pow(1 - pow(rho, 2) + 2 * rho * rhobar, 2) - 4 * rhobar * pow(1 - rho, 2) * (rho - rhobar));
                                    std::pair< double, double > roots((1 - pow(rho, 2) + 2 * rho * rhobar - discriminant) / (2 * rhobar * (1 - pow(rho, 2.))),
                                                                      (1 - pow(rho, 2) + 2 * rho * rhobar + discriminant) / (2 * rhobar * (1 - pow(rho, 2.))));
                                    if(rhobar < 0.)
                                    { s *= std::max(roots.first, roots.second); }
                                    else if(rhobar > 0.)
                                    { s *= std::min(roots.first, roots.second); }
                                    else
                                    { s *= roots.first; }
                                }
                                switch(_inverser)
                                {
                                    case statiskit::linalg::simplicialLLT:
                                    case statiskit::linalg::simplicialLDLT:
                                    case statiskit::linalg::conjugateGradient:
                                        if(*itv == u)
                                        { s *= 2; }
                                        K.coeffRef(u, *itv) += s;
                                        break;
                                    case statiskit::linalg::sparseLU:
                                    case statiskit::linalg::sparseQR:
                                    case statiskit::linalg::leastSquaresConjugateGradient:
                                    case statiskit::linalg::biCGSTAB:
                                        K.coeffRef(u, *itv) += s;
                                        K.coeffRef(*itv, u) += s;
                                        break;
                                }
                                Solver.factorize(K);
                            }
                        }
                    }
                    determinant = Solver.determinant();
                    curr = log(determinant) - (K.selfadjointView< Eigen::Lower >() * S).trace();
                    if(!lazy)
                    { static_cast< GraphicalGaussianDistributionSIMLEstimation* >(estimation.get())->_iterations.push_back(K); }
                    ++its;
                } while(run(its, __impl::reldiff(prev, curr)) && curr > prev);
                estimated->set_theta(K.selfadjointView< Eigen::Lower >() * I);
                return std::move(estimation);
            }
    }
}

#endif