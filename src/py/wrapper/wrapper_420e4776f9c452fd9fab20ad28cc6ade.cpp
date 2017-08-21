#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator const volatile * get_pointer<class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator const volatile >(class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_420e4776f9c452fd9fab20ad28cc6ade()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    std::string name_58cfa053cab856b8b0d239dbaebbc87a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._undirected_gaussian_distribution_iml_estimation");
    boost::python::object module_58cfa053cab856b8b0d239dbaebbc87a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_58cfa053cab856b8b0d239dbaebbc87a.c_str()))));
    boost::python::scope().attr("_undirected_gaussian_distribution_iml_estimation") = module_58cfa053cab856b8b0d239dbaebbc87a;
    boost::python::scope scope_58cfa053cab856b8b0d239dbaebbc87a = module_58cfa053cab856b8b0d239dbaebbc87a;
    enum ::statiskit::linalg::solver_type const & (::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator::*method_pointer_88d85cc610fe59a282bc042a371a1c65)() const = &::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator::get_inverser;
    void  (::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator::*method_pointer_c1a2c54698035813bd1da48c9dc153ce)(enum ::statiskit::linalg::solver_type const &) = &::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator::set_inverser;
    boost::python::class_< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator, autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator > > class_420e4776f9c452fd9fab20ad28cc6ade("Estimator", "", boost::python::no_init);
    class_420e4776f9c452fd9fab20ad28cc6ade.def(boost::python::init<  >(""));
    class_420e4776f9c452fd9fab20ad28cc6ade.def(boost::python::init< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator const & >(""));
    class_420e4776f9c452fd9fab20ad28cc6ade.def("get_inverser", method_pointer_88d85cc610fe59a282bc042a371a1c65, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_420e4776f9c452fd9fab20ad28cc6ade.def("set_inverser", method_pointer_c1a2c54698035813bd1da48c9dc153ce, "");

    if(autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Estimator >::Type >();
    }

}