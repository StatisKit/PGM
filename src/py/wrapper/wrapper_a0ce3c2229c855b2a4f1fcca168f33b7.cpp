#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator const volatile * get_pointer<class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator const volatile >(class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a0ce3c2229c855b2a4f1fcca168f33b7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    std::string name_195f6697feba5629b32edc45dea47f01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._graphical_gaussian_distribution_iml_estimation");
    boost::python::object module_195f6697feba5629b32edc45dea47f01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_195f6697feba5629b32edc45dea47f01.c_str()))));
    boost::python::scope().attr("_graphical_gaussian_distribution_iml_estimation") = module_195f6697feba5629b32edc45dea47f01;
    boost::python::scope scope_195f6697feba5629b32edc45dea47f01 = module_195f6697feba5629b32edc45dea47f01;
    enum ::statiskit::linalg::solver_type const & (::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator::*method_pointer_4d19ac5f25465e749c88140d7a0718ed)() const = &::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator::get_inverser;
    void  (::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator::*method_pointer_26360d9296b75794bbb8ea93e0353aeb)(enum ::statiskit::linalg::solver_type const &) = &::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator::set_inverser;
    boost::python::class_< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator, autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator > > class_a0ce3c2229c855b2a4f1fcca168f33b7("Estimator", "", boost::python::no_init);
    class_a0ce3c2229c855b2a4f1fcca168f33b7.def(boost::python::init<  >(""));
    class_a0ce3c2229c855b2a4f1fcca168f33b7.def(boost::python::init< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator const & >(""));
    class_a0ce3c2229c855b2a4f1fcca168f33b7.def("get_inverser", method_pointer_4d19ac5f25465e749c88140d7a0718ed, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a0ce3c2229c855b2a4f1fcca168f33b7.def("set_inverser", method_pointer_26360d9296b75794bbb8ea93e0353aeb, "");

    if(autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator >::Type >();
    }

}