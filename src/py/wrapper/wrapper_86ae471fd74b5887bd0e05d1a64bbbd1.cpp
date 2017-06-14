#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_86ae471fd74b5887bd0e05d1a64bbbd1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::SparseMatrix< double, 0, int > const (::statiskit::OptimizationEstimation< ::Eigen::SparseMatrix< double, 0, int >, ::statiskit::pgm::GraphicalGaussianDistribution, ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::*method_pointer_3c60d462142553b8886c948005fda8cf)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::get_iteration;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > > > class_86ae471fd74b5887bd0e05d1a64bbbd1("_OptimizationEstimation_86ae471fd74b5887bd0e05d1a64bbbd1", "", boost::python::no_init);
    class_86ae471fd74b5887bd0e05d1a64bbbd1.def(boost::python::init<  >(""));
    class_86ae471fd74b5887bd0e05d1a64bbbd1.def(boost::python::init< class ::statiskit::pgm::GraphicalGaussianDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_86ae471fd74b5887bd0e05d1a64bbbd1.def(boost::python::init< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > const & >(""));
    class_86ae471fd74b5887bd0e05d1a64bbbd1.def("get_iteration", method_pointer_3c60d462142553b8886c948005fda8cf, "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > >::Type >();
    }

}