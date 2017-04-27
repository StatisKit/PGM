#include "_pgm.h"


void wrapper_7185239449e9513e8d477aaaf99ddbd1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_753973f9f63857629d8785a628fc20ad = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._undirected_graph");
    boost::python::object module_753973f9f63857629d8785a628fc20ad(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_753973f9f63857629d8785a628fc20ad.c_str()))));
    boost::python::scope().attr("_undirected_graph") = module_753973f9f63857629d8785a628fc20ad;
    boost::python::scope scope_753973f9f63857629d8785a628fc20ad = module_753973f9f63857629d8785a628fc20ad;
    boost::python::enum_< enum ::statiskit::UndirectedGraph::traversal_type > enum_7185239449e9513e8d477aaaf99ddbd1("traversal_type");

    enum_7185239449e9513e8d477aaaf99ddbd1.value("DFS", ::statiskit::UndirectedGraph::DFS);

    enum_7185239449e9513e8d477aaaf99ddbd1.value("BFS", ::statiskit::UndirectedGraph::BFS);

    enum_7185239449e9513e8d477aaaf99ddbd1.value("MCS", ::statiskit::UndirectedGraph::MCS);

}