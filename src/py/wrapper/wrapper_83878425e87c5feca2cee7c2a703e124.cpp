#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation const volatile * get_pointer<class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation const volatile >(class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_83878425e87c5feca2cee7c2a703e124()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::class_< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation, autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > > class_83878425e87c5feca2cee7c2a703e124("GraphicalGaussianDistributionMLEstimation", "", boost::python::no_init);
    class_83878425e87c5feca2cee7c2a703e124.def(boost::python::init<  >(""));
    class_83878425e87c5feca2cee7c2a703e124.def(boost::python::init< class ::statiskit::pgm::GraphicalGaussianDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_83878425e87c5feca2cee7c2a703e124.def(boost::python::init< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation const & >(""));

    if(autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type >();
    }

}