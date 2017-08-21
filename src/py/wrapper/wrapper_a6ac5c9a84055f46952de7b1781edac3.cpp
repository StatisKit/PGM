#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile >(class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a6ac5c9a84055f46952de7b1781edac3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, ::statiskit::pgm::UndirectedGaussianDistribution, ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::*method_pointer_66f68312a8ab5df48a8f594bafcb3ecc)() const = &::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::size;
    boost::python::class_< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >, autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > > > class_a6ac5c9a84055f46952de7b1781edac3("_OptimizationEstimationImpl_a6ac5c9a84055f46952de7b1781edac3", "", boost::python::no_init);
    class_a6ac5c9a84055f46952de7b1781edac3.def(boost::python::init<  >(""));
    class_a6ac5c9a84055f46952de7b1781edac3.def(boost::python::init< class ::statiskit::pgm::UndirectedGaussianDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_a6ac5c9a84055f46952de7b1781edac3.def(boost::python::init< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const & >(""));
    class_a6ac5c9a84055f46952de7b1781edac3.def("__len__", method_pointer_66f68312a8ab5df48a8f594bafcb3ecc, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type >();
    }

}