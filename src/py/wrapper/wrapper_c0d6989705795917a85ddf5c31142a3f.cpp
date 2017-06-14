#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c0d6989705795917a85ddf5c31142a3f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_03e92eba97a750e98c212e3061c9b31c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_03e92eba97a750e98c212e3061c9b31c");
    boost::python::object module_03e92eba97a750e98c212e3061c9b31c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_03e92eba97a750e98c212e3061c9b31c.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_03e92eba97a750e98c212e3061c9b31c") = module_03e92eba97a750e98c212e3061c9b31c;
    boost::python::scope scope_03e92eba97a750e98c212e3061c9b31c = module_03e92eba97a750e98c212e3061c9b31c;
    boost::python::class_< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator, autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator >::Type, boost::python::bases< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator, class ::statiskit::Optimization > > class_c0d6989705795917a85ddf5c31142a3f("Estimator", "", boost::python::no_init);
    class_c0d6989705795917a85ddf5c31142a3f.def(boost::python::init<  >(""));
    class_c0d6989705795917a85ddf5c31142a3f.def(boost::python::init< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
    }

}