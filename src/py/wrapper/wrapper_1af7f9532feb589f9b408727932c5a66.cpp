#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ErdosRenyiUndirectedGraphDistribution const volatile * get_pointer<class ::statiskit::ErdosRenyiUndirectedGraphDistribution const volatile >(class ::statiskit::ErdosRenyiUndirectedGraphDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1af7f9532feb589f9b408727932c5a66()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::ErdosRenyiUndirectedGraphDistribution::*method_pointer_6eb5404eeab955fc8622aab7470977fa)() const = &::statiskit::ErdosRenyiUndirectedGraphDistribution::get_nb_vertices;
    void  (::statiskit::ErdosRenyiUndirectedGraphDistribution::*method_pointer_dae8b02b14275bcfb0745124e6c53b34)(::statiskit::Index const &) = &::statiskit::ErdosRenyiUndirectedGraphDistribution::set_nb_vertices;
    double  (::statiskit::ErdosRenyiUndirectedGraphDistribution::*method_pointer_fb050ffd436a51cb8c7311516f4b8190)() const = &::statiskit::ErdosRenyiUndirectedGraphDistribution::get_pi;
    void  (::statiskit::ErdosRenyiUndirectedGraphDistribution::*method_pointer_ad34b6c94f0f537684d38398782d2e7a)(double const &) = &::statiskit::ErdosRenyiUndirectedGraphDistribution::set_pi;
    boost::python::class_< class ::statiskit::ErdosRenyiUndirectedGraphDistribution, autowig::Held< class ::statiskit::ErdosRenyiUndirectedGraphDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::ErdosRenyiUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > > > class_1af7f9532feb589f9b408727932c5a66("ErdosRenyiUndirectedGraphDistribution", "", boost::python::no_init);
    class_1af7f9532feb589f9b408727932c5a66.def(boost::python::init< ::statiskit::Index const &, double const & >(""));
    class_1af7f9532feb589f9b408727932c5a66.def(boost::python::init< class ::statiskit::ErdosRenyiUndirectedGraphDistribution const & >(""));
    class_1af7f9532feb589f9b408727932c5a66.def("get_nb_vertices", method_pointer_6eb5404eeab955fc8622aab7470977fa, "");
    class_1af7f9532feb589f9b408727932c5a66.def("set_nb_vertices", method_pointer_dae8b02b14275bcfb0745124e6c53b34, "");
    class_1af7f9532feb589f9b408727932c5a66.def("get_pi", method_pointer_fb050ffd436a51cb8c7311516f4b8190, "");
    class_1af7f9532feb589f9b408727932c5a66.def("set_pi", method_pointer_ad34b6c94f0f537684d38398782d2e7a, "");

    if(autowig::Held< class ::statiskit::ErdosRenyiUndirectedGraphDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ErdosRenyiUndirectedGraphDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::ErdosRenyiUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > >::Type >();
    }

}