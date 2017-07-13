#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::CDEstimator const volatile * get_pointer<class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::CDEstimator const volatile >(class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::CDEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_893aea784bfb595da4b09d8681804b79()
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
    boost::python::class_< class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::CDEstimator, autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::CDEstimator >::Type, boost::python::bases< class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator > > class_893aea784bfb595da4b09d8681804b79("CDEstimator", "", boost::python::no_init);
    class_893aea784bfb595da4b09d8681804b79.def(boost::python::init<  >(""));
    class_893aea784bfb595da4b09d8681804b79.def(boost::python::init< class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::CDEstimator const & >(""));

    if(autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::CDEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::CDEstimator >::Type, autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionSIMLEstimation::Estimator >::Type >();
    }

}