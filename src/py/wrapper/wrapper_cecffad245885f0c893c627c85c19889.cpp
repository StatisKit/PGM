#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::CliqueTree const volatile * get_pointer<class ::statiskit::pgm::CliqueTree const volatile >(class ::statiskit::pgm::CliqueTree const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cecffad245885f0c893c627c85c19889()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    ::statiskit::Index  (::statiskit::pgm::CliqueTree::*method_pointer_b8bc5bd9c76c53e0897a0bb2b57701a1)() const = &::statiskit::pgm::CliqueTree::get_nb_cliques;
    ::statiskit::Indices const & (::statiskit::pgm::CliqueTree::*method_pointer_6b542e4bb37757a893a449d53f25083a)(::statiskit::Index const &) const = &::statiskit::pgm::CliqueTree::get_clique;
    ::statiskit::Indices const & (::statiskit::pgm::CliqueTree::*method_pointer_64275a46d674587ca65064bb646721f4)(::statiskit::Index const &) const = &::statiskit::pgm::CliqueTree::get_separator;
    boost::python::class_< class ::statiskit::pgm::CliqueTree, autowig::Held< class ::statiskit::pgm::CliqueTree >::Type > class_cecffad245885f0c893c627c85c19889("CliqueTree", "", boost::python::no_init);
    class_cecffad245885f0c893c627c85c19889.def(boost::python::init< class ::statiskit::pgm::UndirectedGraph const & >(""));
    class_cecffad245885f0c893c627c85c19889.def(boost::python::init< class ::statiskit::pgm::CliqueTree const & >(""));
    class_cecffad245885f0c893c627c85c19889.def("get_nb_cliques", method_pointer_b8bc5bd9c76c53e0897a0bb2b57701a1, "");
    class_cecffad245885f0c893c627c85c19889.def("get_clique", method_pointer_6b542e4bb37757a893a449d53f25083a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_cecffad245885f0c893c627c85c19889.def("get_separator", method_pointer_64275a46d674587ca65064bb646721f4, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}