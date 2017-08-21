#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator const volatile * get_pointer<class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator const volatile >(class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_60c527ae98655812b0e4aab9f9d434f8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    std::string name_42eb863d656d53efb7d6a70a4bc6e814 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._undirected_gaussian_distribution_siml_estimation");
    boost::python::object module_42eb863d656d53efb7d6a70a4bc6e814(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_42eb863d656d53efb7d6a70a4bc6e814.c_str()))));
    boost::python::scope().attr("_undirected_gaussian_distribution_siml_estimation") = module_42eb863d656d53efb7d6a70a4bc6e814;
    boost::python::scope scope_42eb863d656d53efb7d6a70a4bc6e814 = module_42eb863d656d53efb7d6a70a4bc6e814;
    enum ::statiskit::linalg::sparse_solver_type const & (::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator::*method_pointer_677513f6f52a5ed1aa673a49f7963b92)() const = &::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator::get_inverser;
    void  (::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator::*method_pointer_deea0ab7a482539aa7b60cd0b7a02a14)(enum ::statiskit::linalg::sparse_solver_type const &) = &::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator::set_inverser;
    boost::python::class_< class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator, autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator > > class_60c527ae98655812b0e4aab9f9d434f8("Estimator", "", boost::python::no_init);
    class_60c527ae98655812b0e4aab9f9d434f8.def(boost::python::init<  >(""));
    class_60c527ae98655812b0e4aab9f9d434f8.def(boost::python::init< class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator const & >(""));
    class_60c527ae98655812b0e4aab9f9d434f8.def("get_inverser", method_pointer_677513f6f52a5ed1aa673a49f7963b92, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_60c527ae98655812b0e4aab9f9d434f8.def("set_inverser", method_pointer_deea0ab7a482539aa7b60cd0b7a02a14, "");

    if(autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator >::Type >();
    }

}