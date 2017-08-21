#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f90624bd15b2517d8871582acd854064()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_ace00b3d1a8a562190eaf4e30e023d53 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_ace00b3d1a8a562190eaf4e30e023d53");
    boost::python::object module_ace00b3d1a8a562190eaf4e30e023d53(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_ace00b3d1a8a562190eaf4e30e023d53.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_ace00b3d1a8a562190eaf4e30e023d53") = module_ace00b3d1a8a562190eaf4e30e023d53;
    boost::python::scope scope_ace00b3d1a8a562190eaf4e30e023d53 = module_ace00b3d1a8a562190eaf4e30e023d53;
    boost::python::class_< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator, autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator >::Type, boost::python::bases< class ::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator > > > class_f90624bd15b2517d8871582acd854064("Estimator", "", boost::python::no_init);
    class_f90624bd15b2517d8871582acd854064.def(boost::python::init<  >(""));
    class_f90624bd15b2517d8871582acd854064.def(boost::python::init< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator const & >(""));

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator > >::Type >();
    }

}