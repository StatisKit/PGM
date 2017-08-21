#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation const volatile * get_pointer<class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation const volatile >(class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d544dc310ae557008b400b4a8f8175e1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::class_< class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation, autowig::Held< class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > > class_d544dc310ae557008b400b4a8f8175e1("DirectedGaussianDistributionMLEstimation", "", boost::python::no_init);
    class_d544dc310ae557008b400b4a8f8175e1.def(boost::python::init<  >(""));
    class_d544dc310ae557008b400b4a8f8175e1.def(boost::python::init< class ::statiskit::pgm::DirectedGaussianDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_d544dc310ae557008b400b4a8f8175e1.def(boost::python::init< class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation const & >(""));

    if(autowig::Held< class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type >();
    }

}