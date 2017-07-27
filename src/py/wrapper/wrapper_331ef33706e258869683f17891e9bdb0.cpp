#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::UndirectedGraph const volatile * get_pointer<class ::statiskit::pgm::UndirectedGraph const volatile >(class ::statiskit::pgm::UndirectedGraph const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_331ef33706e258869683f17891e9bdb0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    ::statiskit::Index  (::statiskit::pgm::UndirectedGraph::*method_pointer_6d37489fd7cb5d8a90834ad40233faf5)() const = &::statiskit::pgm::UndirectedGraph::get_nb_vertices;
    ::statiskit::Index  (::statiskit::pgm::UndirectedGraph::*method_pointer_876cbc44ec105ac8b64f331704e01469)() const = &::statiskit::pgm::UndirectedGraph::get_nb_edges;
    bool  (::statiskit::pgm::UndirectedGraph::*method_pointer_708a733d74815ef19ff4cfc7b8e0df00)(::statiskit::Index const &, ::statiskit::Index const &) const = &::statiskit::pgm::UndirectedGraph::has_edge;
    void  (::statiskit::pgm::UndirectedGraph::*method_pointer_4b5b859fb3f35000ae6fee43051b9ea8)(::statiskit::Index const &, ::statiskit::Index const &) = &::statiskit::pgm::UndirectedGraph::add_edge;
    void  (::statiskit::pgm::UndirectedGraph::*method_pointer_beae2910c5365d16bffdc54522d991c3)(::statiskit::Index const &, ::statiskit::Index const &) = &::statiskit::pgm::UndirectedGraph::remove_edge;
    ::statiskit::Index  (::statiskit::pgm::UndirectedGraph::*method_pointer_0947a33ae06e58fd8143c9774d1b2ea6)(::statiskit::Index const &) const = &::statiskit::pgm::UndirectedGraph::degree;
    ::statiskit::pgm::Neighbours const & (::statiskit::pgm::UndirectedGraph::*method_pointer_d5966662feb456119b32d9a47675f6d3)(::statiskit::Index const &) const = &::statiskit::pgm::UndirectedGraph::neighbours;
    bool  (::statiskit::pgm::UndirectedGraph::*method_pointer_fc2ae6790c055a35b004c0551a1559f1)(::statiskit::Index const &, ::statiskit::Index const &) const = &::statiskit::pgm::UndirectedGraph::are_connected;
    bool  (::statiskit::pgm::UndirectedGraph::*method_pointer_e0f9e0e253d651a195f5c65373759bbe)(::statiskit::Indices const &, ::statiskit::Indices const &) const = &::statiskit::pgm::UndirectedGraph::are_connected;
    bool  (::statiskit::pgm::UndirectedGraph::*method_pointer_d163621b5bcd5333a83ced5198310632)(::statiskit::Index const &, ::statiskit::Index const &, ::statiskit::Indices const &) const = &::statiskit::pgm::UndirectedGraph::are_separated;
    bool  (::statiskit::pgm::UndirectedGraph::*method_pointer_54fd624378735a46a4cccc028376ae7a)(::statiskit::Indices const &, ::statiskit::Indices const &, ::statiskit::Indices const &) const = &::statiskit::pgm::UndirectedGraph::are_separated;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::pgm::UndirectedGraph::*method_pointer_b863d7cff2bf505990d7dd2666f1231e)() const = &::statiskit::pgm::UndirectedGraph::maximum_cardinality_search;
    class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > >  (::statiskit::pgm::UndirectedGraph::*method_pointer_1a5f753d4d22575ab2cc026e209f811c)(bool const &) const = &::statiskit::pgm::UndirectedGraph::maximum_cardinality_embedding;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::pgm::UndirectedGraph::*method_pointer_f05fc960b1a85c918a7ae9e3f9489fb6)() const = &::statiskit::pgm::UndirectedGraph::depth_first_search;
    bool  (::statiskit::pgm::UndirectedGraph::*method_pointer_7801bcf992eb510f9442354f964f36b4)() const = &::statiskit::pgm::UndirectedGraph::is_chordal;
    bool  (::statiskit::pgm::UndirectedGraph::*method_pointer_146b57b69002557892a97ccecef2293d)() const = &::statiskit::pgm::UndirectedGraph::is_connected;
    class ::std::vector< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::allocator< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >  (::statiskit::pgm::UndirectedGraph::*method_pointer_6d708644708250418009ece11b4916c0)() const = &::statiskit::pgm::UndirectedGraph::bron_kerbosch;
    double  (::statiskit::pgm::UndirectedGraph::*method_pointer_c20224adcfdf5fcf83dbb79fdb6415d2)() const = &::statiskit::pgm::UndirectedGraph::density;
    class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > >  (::statiskit::pgm::UndirectedGraph::*method_pointer_d75279f2192553b88f849aabd86abe20)() const = &::statiskit::pgm::UndirectedGraph::copy;
    boost::python::class_< class ::statiskit::pgm::UndirectedGraph, autowig::Held< class ::statiskit::pgm::UndirectedGraph >::Type > class_331ef33706e258869683f17891e9bdb0("UndirectedGraph", "", boost::python::no_init);
    class_331ef33706e258869683f17891e9bdb0.def(boost::python::init< ::statiskit::Index const & >(""));
    class_331ef33706e258869683f17891e9bdb0.def(boost::python::init< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_331ef33706e258869683f17891e9bdb0.def(boost::python::init< class ::statiskit::pgm::UndirectedGraph const & >(""));
    class_331ef33706e258869683f17891e9bdb0.def("get_nb_vertices", method_pointer_6d37489fd7cb5d8a90834ad40233faf5, "");
    class_331ef33706e258869683f17891e9bdb0.def("get_nb_edges", method_pointer_876cbc44ec105ac8b64f331704e01469, "");
    class_331ef33706e258869683f17891e9bdb0.def("has_edge", method_pointer_708a733d74815ef19ff4cfc7b8e0df00, "");
    class_331ef33706e258869683f17891e9bdb0.def("add_edge", method_pointer_4b5b859fb3f35000ae6fee43051b9ea8, "");
    class_331ef33706e258869683f17891e9bdb0.def("remove_edge", method_pointer_beae2910c5365d16bffdc54522d991c3, "");
    class_331ef33706e258869683f17891e9bdb0.def("degree", method_pointer_0947a33ae06e58fd8143c9774d1b2ea6, "");
    class_331ef33706e258869683f17891e9bdb0.def("neighbours", method_pointer_d5966662feb456119b32d9a47675f6d3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_331ef33706e258869683f17891e9bdb0.def("are_connected", method_pointer_fc2ae6790c055a35b004c0551a1559f1, "");
    class_331ef33706e258869683f17891e9bdb0.def("are_connected", method_pointer_e0f9e0e253d651a195f5c65373759bbe, "");
    class_331ef33706e258869683f17891e9bdb0.def("are_separated", method_pointer_d163621b5bcd5333a83ced5198310632, "");
    class_331ef33706e258869683f17891e9bdb0.def("are_separated", method_pointer_54fd624378735a46a4cccc028376ae7a, "");
    class_331ef33706e258869683f17891e9bdb0.def("maximum_cardinality_search", method_pointer_b863d7cff2bf505990d7dd2666f1231e, "");
    class_331ef33706e258869683f17891e9bdb0.def("maximum_cardinality_embedding", method_pointer_1a5f753d4d22575ab2cc026e209f811c, "");
    class_331ef33706e258869683f17891e9bdb0.def("depth_first_search", method_pointer_f05fc960b1a85c918a7ae9e3f9489fb6, "");
    class_331ef33706e258869683f17891e9bdb0.def("is_chordal", method_pointer_7801bcf992eb510f9442354f964f36b4, "");
    class_331ef33706e258869683f17891e9bdb0.def("is_connected", method_pointer_146b57b69002557892a97ccecef2293d, "");
    class_331ef33706e258869683f17891e9bdb0.def("bron_kerbosch", method_pointer_6d708644708250418009ece11b4916c0, "");
    class_331ef33706e258869683f17891e9bdb0.def("density", method_pointer_c20224adcfdf5fcf83dbb79fdb6415d2, "");
    class_331ef33706e258869683f17891e9bdb0.def("copy", method_pointer_d75279f2192553b88f849aabd86abe20, "");

}