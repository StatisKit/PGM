#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::CDEstimator const volatile * get_pointer<struct ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::CDEstimator const volatile >(struct ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::CDEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_15cc96d007ab5d46a2e728e41cce5132()
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
    boost::python::class_< struct ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::CDEstimator, autowig::Held< struct ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::CDEstimator >::Type, boost::python::bases< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator > > class_15cc96d007ab5d46a2e728e41cce5132("CDEstimator", "", boost::python::no_init);
    class_15cc96d007ab5d46a2e728e41cce5132.def(boost::python::init<  >(""));
    class_15cc96d007ab5d46a2e728e41cce5132.def(boost::python::init< struct ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::CDEstimator const & >(""));

    if(autowig::Held< struct ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::CDEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::CDEstimator >::Type, autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::Estimator >::Type >();
    }

}