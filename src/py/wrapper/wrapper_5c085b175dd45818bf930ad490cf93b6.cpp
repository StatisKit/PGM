#include "_pgm.h"


void wrapper_5c085b175dd45818bf930ad490cf93b6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    std::string name_69d6cbe2e47156bfb652a1bd3301221c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._undirected_graph_process");
    boost::python::object module_69d6cbe2e47156bfb652a1bd3301221c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_69d6cbe2e47156bfb652a1bd3301221c.c_str()))));
    boost::python::scope().attr("_undirected_graph_process") = module_69d6cbe2e47156bfb652a1bd3301221c;
    boost::python::scope scope_69d6cbe2e47156bfb652a1bd3301221c = module_69d6cbe2e47156bfb652a1bd3301221c;
    boost::python::enum_< enum ::statiskit::pgm::UndirectedGraphProcess::walk_type > enum_5c085b175dd45818bf930ad490cf93b6("walk_type");

    enum_5c085b175dd45818bf930ad490cf93b6.value("FREE", ::statiskit::pgm::UndirectedGraphProcess::FREE);

    enum_5c085b175dd45818bf930ad490cf93b6.value("CHORDAL", ::statiskit::pgm::UndirectedGraphProcess::CHORDAL);

    enum_5c085b175dd45818bf930ad490cf93b6.value("CONNECTED", ::statiskit::pgm::UndirectedGraphProcess::CONNECTED);

}