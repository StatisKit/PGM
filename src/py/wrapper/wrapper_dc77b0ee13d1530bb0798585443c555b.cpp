#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation const volatile * get_pointer<class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation const volatile >(class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dc77b0ee13d1530bb0798585443c555b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::class_< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation, autowig::Held< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > > class_dc77b0ee13d1530bb0798585443c555b("ChordalGaussianDistributionMLEstimation", "", boost::python::no_init);
    class_dc77b0ee13d1530bb0798585443c555b.def(boost::python::init<  >(""));
    class_dc77b0ee13d1530bb0798585443c555b.def(boost::python::init< class ::statiskit::pgm::UndirectedGaussianDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_dc77b0ee13d1530bb0798585443c555b.def(boost::python::init< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation const & >(""));

    if(autowig::Held< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type >();
    }

}