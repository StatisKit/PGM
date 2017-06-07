#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation const volatile * get_pointer<class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation const volatile >(class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2f99a056e37254eeaea9c90166e6ee79()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    std::string name_c5364bf6a7375db8ba8ffc4938cdbf83 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._mixture_undirected_graph_process");
    boost::python::object module_c5364bf6a7375db8ba8ffc4938cdbf83(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c5364bf6a7375db8ba8ffc4938cdbf83.c_str()))));
    boost::python::scope().attr("_mixture_undirected_graph_process") = module_c5364bf6a7375db8ba8ffc4938cdbf83;
    boost::python::scope scope_c5364bf6a7375db8ba8ffc4938cdbf83 = module_c5364bf6a7375db8ba8ffc4938cdbf83;
    boost::python::class_< class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation, autowig::Held< class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation, struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation >, class ::statiskit::Optimization > > class_2f99a056e37254eeaea9c90166e6ee79("VariationalComputation", "", boost::python::no_init);
    class_2f99a056e37254eeaea9c90166e6ee79.def(boost::python::init<  >(""));
    class_2f99a056e37254eeaea9c90166e6ee79.def(boost::python::init< class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation const & >(""));

    if(autowig::Held< class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation, struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
    }

}