#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess const volatile * get_pointer<class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess const volatile >(class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7440bd230bee5300a2ffbf1ba0e81c76()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    ::statiskit::Index  (::statiskit::pgm::ErdosRenyiUndirectedGraphProcess::*method_pointer_fce72ca38c77595890faacb6dbf5af2f)() const = &::statiskit::pgm::ErdosRenyiUndirectedGraphProcess::get_nb_vertices;
    void  (::statiskit::pgm::ErdosRenyiUndirectedGraphProcess::*method_pointer_d5885f9ec71e5f16861248f50c15060b)(::statiskit::Index const &) = &::statiskit::pgm::ErdosRenyiUndirectedGraphProcess::set_nb_vertices;
    double  (::statiskit::pgm::ErdosRenyiUndirectedGraphProcess::*method_pointer_c306f279ca4953ec81ba33225fc4ed2c)() const = &::statiskit::pgm::ErdosRenyiUndirectedGraphProcess::get_pi;
    void  (::statiskit::pgm::ErdosRenyiUndirectedGraphProcess::*method_pointer_8a955bb860b3587aba10ff1c364d2b7f)(double const &) = &::statiskit::pgm::ErdosRenyiUndirectedGraphProcess::set_pi;
    boost::python::class_< class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess, autowig::Held< class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::UndirectedGraphProcess, class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess, struct ::statiskit::pgm::UndirectedGraphProcess > > > class_7440bd230bee5300a2ffbf1ba0e81c76("ErdosRenyiUndirectedGraphProcess", "", boost::python::no_init);
    class_7440bd230bee5300a2ffbf1ba0e81c76.def(boost::python::init< ::statiskit::Index const &, double const & >(""));
    class_7440bd230bee5300a2ffbf1ba0e81c76.def(boost::python::init< class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess const & >(""));
    class_7440bd230bee5300a2ffbf1ba0e81c76.def("get_nb_vertices", method_pointer_fce72ca38c77595890faacb6dbf5af2f, "");
    class_7440bd230bee5300a2ffbf1ba0e81c76.def("set_nb_vertices", method_pointer_d5885f9ec71e5f16861248f50c15060b, "");
    class_7440bd230bee5300a2ffbf1ba0e81c76.def("get_pi", method_pointer_c306f279ca4953ec81ba33225fc4ed2c, "");
    class_7440bd230bee5300a2ffbf1ba0e81c76.def("set_pi", method_pointer_8a955bb860b3587aba10ff1c364d2b7f, "");

    if(autowig::Held< class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::UndirectedGraphProcess, class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess, struct ::statiskit::pgm::UndirectedGraphProcess > >::Type >();
    }

}