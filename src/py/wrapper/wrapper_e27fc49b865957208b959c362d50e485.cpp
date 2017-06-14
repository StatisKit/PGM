#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator const volatile >(struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e27fc49b865957208b959c362d50e485()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_86ae471fd74b5887bd0e05d1a64bbbd1 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_86ae471fd74b5887bd0e05d1a64bbbd1");
    boost::python::object module_86ae471fd74b5887bd0e05d1a64bbbd1(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_86ae471fd74b5887bd0e05d1a64bbbd1.c_str()))));
    boost::python::scope().attr("__optimization_estimation_86ae471fd74b5887bd0e05d1a64bbbd1") = module_86ae471fd74b5887bd0e05d1a64bbbd1;
    boost::python::scope scope_86ae471fd74b5887bd0e05d1a64bbbd1 = module_86ae471fd74b5887bd0e05d1a64bbbd1;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator > > class_e27fc49b865957208b959c362d50e485("Estimator", "", boost::python::no_init);
    class_e27fc49b865957208b959c362d50e485.def(boost::python::init<  >(""));
    class_e27fc49b865957208b959c362d50e485.def(boost::python::init< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator >::Type >();
    }

}