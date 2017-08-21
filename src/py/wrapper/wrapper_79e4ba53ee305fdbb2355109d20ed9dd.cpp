#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_79e4ba53ee305fdbb2355109d20ed9dd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const (::statiskit::OptimizationEstimation< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::statiskit::pgm::UndirectedGaussianDistribution, ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::*method_pointer_a136fd73aab6576b989b3de3150a9b76)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::get_iteration;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > > > class_79e4ba53ee305fdbb2355109d20ed9dd("_OptimizationEstimation_79e4ba53ee305fdbb2355109d20ed9dd", "", boost::python::no_init);
    class_79e4ba53ee305fdbb2355109d20ed9dd.def(boost::python::init<  >(""));
    class_79e4ba53ee305fdbb2355109d20ed9dd.def(boost::python::init< class ::statiskit::pgm::UndirectedGaussianDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_79e4ba53ee305fdbb2355109d20ed9dd.def(boost::python::init< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const & >(""));
    class_79e4ba53ee305fdbb2355109d20ed9dd.def("get_iteration", method_pointer_a136fd73aab6576b989b3de3150a9b76, "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type >();
    }

}