#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator const volatile * get_pointer<class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator const volatile >(class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c8dcb002d8e95dceab8367d625e6db3a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    std::string name_255a6125cd5e5c09a5a8f65dd77bec4f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._graphical_gaussian_distribution_siml_estimation");
    boost::python::object module_255a6125cd5e5c09a5a8f65dd77bec4f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_255a6125cd5e5c09a5a8f65dd77bec4f.c_str()))));
    boost::python::scope().attr("_graphical_gaussian_distribution_siml_estimation") = module_255a6125cd5e5c09a5a8f65dd77bec4f;
    boost::python::scope scope_255a6125cd5e5c09a5a8f65dd77bec4f = module_255a6125cd5e5c09a5a8f65dd77bec4f;
    enum ::statiskit::linalg::sparse_solver_type const & (::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator::*method_pointer_eefbcb349fec5626ac8fd22f9d9396e3)() const = &::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator::get_inverser;
    void  (::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator::*method_pointer_f9b883b15ba5549e98ac8b3ac79eea69)(enum ::statiskit::linalg::sparse_solver_type const &) = &::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator::set_inverser;
    boost::python::class_< class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator, autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator > > class_c8dcb002d8e95dceab8367d625e6db3a("Estimator", "", boost::python::no_init);
    class_c8dcb002d8e95dceab8367d625e6db3a.def(boost::python::init<  >(""));
    class_c8dcb002d8e95dceab8367d625e6db3a.def(boost::python::init< class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator const & >(""));
    class_c8dcb002d8e95dceab8367d625e6db3a.def("get_inverser", method_pointer_eefbcb349fec5626ac8fd22f9d9396e3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c8dcb002d8e95dceab8367d625e6db3a.def("set_inverser", method_pointer_f9b883b15ba5549e98ac8b3ac79eea69, "");

    if(autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::SparseMatrix< double, 0, int >, class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Estimator >::Type >();
    }

}