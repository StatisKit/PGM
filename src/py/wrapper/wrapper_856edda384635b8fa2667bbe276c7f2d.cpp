#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_856edda384635b8fa2667bbe276c7f2d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::SparseMatrix< double, 0, int > const (::statiskit::OptimizationEstimation< ::Eigen::SparseMatrix< double, 0, int >, ::statiskit::pgm::UndirectedGaussianDistribution, ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::*method_pointer_04c7584fb38c58e897a3a7df0b7ae254)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::get_iteration;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > > > class_856edda384635b8fa2667bbe276c7f2d("_OptimizationEstimation_856edda384635b8fa2667bbe276c7f2d", "", boost::python::no_init);
    class_856edda384635b8fa2667bbe276c7f2d.def(boost::python::init<  >(""));
    class_856edda384635b8fa2667bbe276c7f2d.def(boost::python::init< class ::statiskit::pgm::UndirectedGaussianDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_856edda384635b8fa2667bbe276c7f2d.def(boost::python::init< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const & >(""));
    class_856edda384635b8fa2667bbe276c7f2d.def("get_iteration", method_pointer_04c7584fb38c58e897a3a7df0b7ae254, "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type >();
    }

}