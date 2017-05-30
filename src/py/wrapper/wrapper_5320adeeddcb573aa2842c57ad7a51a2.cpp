#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::UndirectedForest const volatile * get_pointer<class ::statiskit::UndirectedForest const volatile >(class ::statiskit::UndirectedForest const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5320adeeddcb573aa2842c57ad7a51a2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::UndirectedForest, autowig::Held< class ::statiskit::UndirectedForest >::Type, boost::python::bases< class ::statiskit::UndirectedGraph > > class_5320adeeddcb573aa2842c57ad7a51a2("UndirectedForest", "", boost::python::no_init);
    class_5320adeeddcb573aa2842c57ad7a51a2.def(boost::python::init< ::statiskit::Index const & >(""));
    class_5320adeeddcb573aa2842c57ad7a51a2.def(boost::python::init< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_5320adeeddcb573aa2842c57ad7a51a2.def(boost::python::init< class ::statiskit::UndirectedForest const & >(""));

    if(autowig::Held< class ::statiskit::UndirectedForest >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::UndirectedForest >::Type, autowig::Held< class ::statiskit::UndirectedGraph >::Type >();
    }

}