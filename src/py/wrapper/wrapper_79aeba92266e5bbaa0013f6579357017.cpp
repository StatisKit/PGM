#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation const volatile * get_pointer<class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation const volatile >(class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_79aeba92266e5bbaa0013f6579357017()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_198ee20e7c705afd9f6727631d97e361 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._mixture_undirected_graph_distribution");
    boost::python::object module_198ee20e7c705afd9f6727631d97e361(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_198ee20e7c705afd9f6727631d97e361.c_str()))));
    boost::python::scope().attr("_mixture_undirected_graph_distribution") = module_198ee20e7c705afd9f6727631d97e361;
    boost::python::scope scope_198ee20e7c705afd9f6727631d97e361 = module_198ee20e7c705afd9f6727631d97e361;
    boost::python::class_< class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, autowig::Held< class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >, class ::statiskit::Optimization > > class_79aeba92266e5bbaa0013f6579357017("VariationalComputation", "", boost::python::no_init);
    class_79aeba92266e5bbaa0013f6579357017.def(boost::python::init<  >(""));
    class_79aeba92266e5bbaa0013f6579357017.def(boost::python::init< class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation const & >(""));

    if(autowig::Held< class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
    }

}