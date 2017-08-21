#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator const volatile >(struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c055ba50b0b0501684cf35d700fe9391()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_856edda384635b8fa2667bbe276c7f2d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_856edda384635b8fa2667bbe276c7f2d");
    boost::python::object module_856edda384635b8fa2667bbe276c7f2d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_856edda384635b8fa2667bbe276c7f2d.c_str()))));
    boost::python::scope().attr("__optimization_estimation_856edda384635b8fa2667bbe276c7f2d") = module_856edda384635b8fa2667bbe276c7f2d;
    boost::python::scope scope_856edda384635b8fa2667bbe276c7f2d = module_856edda384635b8fa2667bbe276c7f2d;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator > > class_c055ba50b0b0501684cf35d700fe9391("Estimator", "", boost::python::no_init);
    class_c055ba50b0b0501684cf35d700fe9391.def(boost::python::init<  >(""));
    class_c055ba50b0b0501684cf35d700fe9391.def(boost::python::init< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator const & >(""));

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator >::Type >();
    }

}