#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator const volatile * get_pointer<class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator const volatile >(class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f4369a5d87455301af692f9dc0c55395()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    std::string name_83878425e87c5feca2cee7c2a703e124 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._graphical_gaussian_distribution_ml_estimation");
    boost::python::object module_83878425e87c5feca2cee7c2a703e124(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_83878425e87c5feca2cee7c2a703e124.c_str()))));
    boost::python::scope().attr("_graphical_gaussian_distribution_ml_estimation") = module_83878425e87c5feca2cee7c2a703e124;
    boost::python::scope scope_83878425e87c5feca2cee7c2a703e124 = module_83878425e87c5feca2cee7c2a703e124;
    class ::statiskit::pgm::UndirectedGraph const * (::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator::*method_pointer_581ed8898c89552fb79c3e483a95f8c6)() const = &::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator::get_graph;
    void  (::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator::*method_pointer_7b54082bcc965fcaa36c67a3e128413e)(class ::statiskit::pgm::UndirectedGraph const &) = &::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator::set_graph;
    boost::python::class_< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator, autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > > class_f4369a5d87455301af692f9dc0c55395("Estimator", "", boost::python::no_init);
    class_f4369a5d87455301af692f9dc0c55395.def(boost::python::init<  >(""));
    class_f4369a5d87455301af692f9dc0c55395.def(boost::python::init< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator const & >(""));
    class_f4369a5d87455301af692f9dc0c55395.def("get_graph", method_pointer_581ed8898c89552fb79c3e483a95f8c6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f4369a5d87455301af692f9dc0c55395.def("set_graph", method_pointer_7b54082bcc965fcaa36c67a3e128413e, "");

    if(autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Type >();
    }

}