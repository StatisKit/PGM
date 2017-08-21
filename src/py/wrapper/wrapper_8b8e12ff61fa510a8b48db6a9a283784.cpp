#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::GAEstimator const volatile * get_pointer<class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::GAEstimator const volatile >(class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::GAEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8b8e12ff61fa510a8b48db6a9a283784()
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
    boost::python::class_< class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::GAEstimator, autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::GAEstimator >::Type, boost::python::bases< class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator > > class_8b8e12ff61fa510a8b48db6a9a283784("GAEstimator", "", boost::python::no_init);
    class_8b8e12ff61fa510a8b48db6a9a283784.def(boost::python::init<  >(""));
    class_8b8e12ff61fa510a8b48db6a9a283784.def(boost::python::init< class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::GAEstimator const & >(""));

    if(autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::GAEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::GAEstimator >::Type, autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionSIMLEstimation::Estimator >::Type >();
    }

}