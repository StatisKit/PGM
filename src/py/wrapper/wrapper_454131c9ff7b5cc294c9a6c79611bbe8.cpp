#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::DirectedGraph const volatile * get_pointer<class ::statiskit::pgm::DirectedGraph const volatile >(class ::statiskit::pgm::DirectedGraph const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_454131c9ff7b5cc294c9a6c79611bbe8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    ::statiskit::Index  (::statiskit::pgm::DirectedGraph::*method_pointer_a2da9e416e2c56a38ea3e93c9c490088)() const = &::statiskit::pgm::DirectedGraph::get_nb_vertices;
    ::statiskit::Index  (::statiskit::pgm::DirectedGraph::*method_pointer_1c24ead318b25a4aab1ad2890fb7fb2d)() const = &::statiskit::pgm::DirectedGraph::get_nb_edges;
    bool  (::statiskit::pgm::DirectedGraph::*method_pointer_aa4fe59aa93259058eefa351987b14a0)(::statiskit::Index const &, ::statiskit::Index const &) const = &::statiskit::pgm::DirectedGraph::has_edge;
    void  (::statiskit::pgm::DirectedGraph::*method_pointer_f6f55f2ce1b8520a90414bd8ddb2b9a0)(::statiskit::Index const &, ::statiskit::Index const &) = &::statiskit::pgm::DirectedGraph::add_edge;
    void  (::statiskit::pgm::DirectedGraph::*method_pointer_79ee1ce0e30659ed87227d82dd06cd15)(::statiskit::Index const &, ::statiskit::Index const &) = &::statiskit::pgm::DirectedGraph::remove_edge;
    ::statiskit::Index  (::statiskit::pgm::DirectedGraph::*method_pointer_c899763bf91b59fab7b88c40efc6f005)(::statiskit::Index const &) const = &::statiskit::pgm::DirectedGraph::in_degree;
    ::statiskit::Index  (::statiskit::pgm::DirectedGraph::*method_pointer_0e88678e31b752698a7d3dbe5e774ebc)(::statiskit::Index const &) const = &::statiskit::pgm::DirectedGraph::out_degree;
    ::statiskit::pgm::Adjacency const & (::statiskit::pgm::DirectedGraph::*method_pointer_b5d96bf2d95e5444b8f31e3eed66fefa)(::statiskit::Index const &) const = &::statiskit::pgm::DirectedGraph::parents;
    ::statiskit::pgm::Adjacency  (::statiskit::pgm::DirectedGraph::*method_pointer_4ec5f2bafa1651a880b08c3bf0bc78fe)(::statiskit::Index const &) const = &::statiskit::pgm::DirectedGraph::children;
    bool  (::statiskit::pgm::DirectedGraph::*method_pointer_60b5aae520765dcf9bb0ffb1b706c466)(::statiskit::Index const &, ::statiskit::Index const &) const = &::statiskit::pgm::DirectedGraph::are_weakly_connected;
    bool  (::statiskit::pgm::DirectedGraph::*method_pointer_79809c5d4289578a95662ad02f98beb0)(::statiskit::Indices const &, ::statiskit::Indices const &) const = &::statiskit::pgm::DirectedGraph::are_weakly_connected;
    bool  (::statiskit::pgm::DirectedGraph::*method_pointer_ea9d150484fe598ba985b057ca3d7eac)(::statiskit::Index const &, ::statiskit::Index const &, ::statiskit::Indices const &) const = &::statiskit::pgm::DirectedGraph::are_separated;
    bool  (::statiskit::pgm::DirectedGraph::*method_pointer_0a698bb536ef5fb5b2dbf44fd6a95c41)(::statiskit::Indices const &, ::statiskit::Indices const &, ::statiskit::Indices const &) const = &::statiskit::pgm::DirectedGraph::are_separated;
    class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > >  (::statiskit::pgm::DirectedGraph::*method_pointer_1469195eeb685bde8489d142602d9c2b)() const = &::statiskit::pgm::DirectedGraph::undirected_graph;
    class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > >  (::statiskit::pgm::DirectedGraph::*method_pointer_c4c368d8d740584da6f3f48840b105d7)() const = &::statiskit::pgm::DirectedGraph::moral_graph;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::pgm::DirectedGraph::*method_pointer_c00e9f48f1655f0d92084e1468360e5c)() const = &::statiskit::pgm::DirectedGraph::depth_first_search;
    bool  (::statiskit::pgm::DirectedGraph::*method_pointer_e07e878e8d98578680fc1df6fb75560f)() const = &::statiskit::pgm::DirectedGraph::has_immorality;
    bool  (::statiskit::pgm::DirectedGraph::*method_pointer_08dd63930b075fa1a27dbc61d2bbfae9)() const = &::statiskit::pgm::DirectedGraph::is_acyclic;
    bool  (::statiskit::pgm::DirectedGraph::*method_pointer_89aea75e463c51a78bfc7e2cfb02004c)() const = &::statiskit::pgm::DirectedGraph::is_weakly_connected;
    double  (::statiskit::pgm::DirectedGraph::*method_pointer_069ea493bf7d53949b63c9faeac6e45b)() const = &::statiskit::pgm::DirectedGraph::density;
    class ::std::unique_ptr< class ::statiskit::pgm::DirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::DirectedGraph > >  (::statiskit::pgm::DirectedGraph::*method_pointer_e485dc198d015b1aae90896dae26f851)() const = &::statiskit::pgm::DirectedGraph::copy;
    boost::python::class_< class ::statiskit::pgm::DirectedGraph, autowig::Held< class ::statiskit::pgm::DirectedGraph >::Type > class_454131c9ff7b5cc294c9a6c79611bbe8("DirectedGraph", "", boost::python::no_init);
    class_454131c9ff7b5cc294c9a6c79611bbe8.def(boost::python::init< ::statiskit::Index const & >(""));
    class_454131c9ff7b5cc294c9a6c79611bbe8.def(boost::python::init< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_454131c9ff7b5cc294c9a6c79611bbe8.def(boost::python::init< class ::statiskit::pgm::DirectedGraph const & >(""));
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("get_nb_vertices", method_pointer_a2da9e416e2c56a38ea3e93c9c490088, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("get_nb_edges", method_pointer_1c24ead318b25a4aab1ad2890fb7fb2d, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("has_edge", method_pointer_aa4fe59aa93259058eefa351987b14a0, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("add_edge", method_pointer_f6f55f2ce1b8520a90414bd8ddb2b9a0, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("remove_edge", method_pointer_79ee1ce0e30659ed87227d82dd06cd15, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("in_degree", method_pointer_c899763bf91b59fab7b88c40efc6f005, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("out_degree", method_pointer_0e88678e31b752698a7d3dbe5e774ebc, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("parents", method_pointer_b5d96bf2d95e5444b8f31e3eed66fefa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("children", method_pointer_4ec5f2bafa1651a880b08c3bf0bc78fe, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("are_weakly_connected", method_pointer_60b5aae520765dcf9bb0ffb1b706c466, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("are_weakly_connected", method_pointer_79809c5d4289578a95662ad02f98beb0, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("are_separated", method_pointer_ea9d150484fe598ba985b057ca3d7eac, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("are_separated", method_pointer_0a698bb536ef5fb5b2dbf44fd6a95c41, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("undirected_graph", method_pointer_1469195eeb685bde8489d142602d9c2b, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("moral_graph", method_pointer_c4c368d8d740584da6f3f48840b105d7, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("depth_first_search", method_pointer_c00e9f48f1655f0d92084e1468360e5c, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("has_immorality", method_pointer_e07e878e8d98578680fc1df6fb75560f, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("is_acyclic", method_pointer_08dd63930b075fa1a27dbc61d2bbfae9, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("is_weakly_connected", method_pointer_89aea75e463c51a78bfc7e2cfb02004c, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("density", method_pointer_069ea493bf7d53949b63c9faeac6e45b, "");
    class_454131c9ff7b5cc294c9a6c79611bbe8.def("copy", method_pointer_e485dc198d015b1aae90896dae26f851, "");

}