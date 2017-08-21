#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator const volatile >(struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b820ba5bb618521191f523676b8d33da()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_79e4ba53ee305fdbb2355109d20ed9dd = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_79e4ba53ee305fdbb2355109d20ed9dd");
    boost::python::object module_79e4ba53ee305fdbb2355109d20ed9dd(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_79e4ba53ee305fdbb2355109d20ed9dd.c_str()))));
    boost::python::scope().attr("__optimization_estimation_79e4ba53ee305fdbb2355109d20ed9dd") = module_79e4ba53ee305fdbb2355109d20ed9dd;
    boost::python::scope scope_79e4ba53ee305fdbb2355109d20ed9dd = module_79e4ba53ee305fdbb2355109d20ed9dd;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator > > class_b820ba5bb618521191f523676b8d33da("Estimator", "", boost::python::no_init);
    class_b820ba5bb618521191f523676b8d33da.def(boost::python::init<  >(""));
    class_b820ba5bb618521191f523676b8d33da.def(boost::python::init< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator >::Type >();
    }

}