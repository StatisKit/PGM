#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator const volatile * get_pointer<class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator const volatile >(class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e07a205746f85b919e87bd473c31dd4f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    std::string name_dc77b0ee13d1530bb0798585443c555b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._chordal_gaussian_distribution_ml_estimation");
    boost::python::object module_dc77b0ee13d1530bb0798585443c555b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dc77b0ee13d1530bb0798585443c555b.c_str()))));
    boost::python::scope().attr("_chordal_gaussian_distribution_ml_estimation") = module_dc77b0ee13d1530bb0798585443c555b;
    boost::python::scope scope_dc77b0ee13d1530bb0798585443c555b = module_dc77b0ee13d1530bb0798585443c555b;
    class ::statiskit::pgm::UndirectedGraph const * (::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator::*method_pointer_3e809971d6385ae2a7ea14f5f0a4c11e)() const = &::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator::get_graph;
    void  (::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator::*method_pointer_617d51f0b4b15318b33faa5dffd4f381)(class ::statiskit::pgm::UndirectedGraph const &) = &::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator::set_graph;
    boost::python::class_< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator, autowig::Held< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > > class_e07a205746f85b919e87bd473c31dd4f("Estimator", "", boost::python::no_init);
    class_e07a205746f85b919e87bd473c31dd4f.def(boost::python::init<  >(""));
    class_e07a205746f85b919e87bd473c31dd4f.def(boost::python::init< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator const & >(""));
    class_e07a205746f85b919e87bd473c31dd4f.def("get_graph", method_pointer_3e809971d6385ae2a7ea14f5f0a4c11e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e07a205746f85b919e87bd473c31dd4f.def("set_graph", method_pointer_617d51f0b4b15318b33faa5dffd4f381, "");

    if(autowig::Held< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Type >();
    }

}