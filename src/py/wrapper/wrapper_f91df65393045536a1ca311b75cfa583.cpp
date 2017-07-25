#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Optimization< class ::statiskit::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< class ::statiskit::Estimator > const volatile >(class ::statiskit::Optimization< class ::statiskit::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f91df65393045536a1ca311b75cfa583()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::Estimator >::*method_pointer_b0c129ce83d85f72a43dbc3811d37f36)() const = &::statiskit::Optimization< class ::statiskit::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::Estimator >::*method_pointer_2ebd321d8d97536cbe9dd13a90383daa)(double const &) = &::statiskit::Optimization< class ::statiskit::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::Estimator >::*method_pointer_5e1dee0d027b53b69f5a4f485b7598f6)() const = &::statiskit::Optimization< class ::statiskit::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::Estimator >::*method_pointer_94cd8ba1a27c525b988f55f4a8c53b48)(unsigned int const &) = &::statiskit::Optimization< class ::statiskit::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::Estimator >::*method_pointer_4830e1dcb5f05334bfb1c24e2123899a)() const = &::statiskit::Optimization< class ::statiskit::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::Estimator >::*method_pointer_7fa2e27c3fd85c15bbc119708a566b70)(unsigned int const &) = &::statiskit::Optimization< class ::statiskit::Estimator >::set_maxits;
    boost::python::class_< class ::statiskit::Optimization< class ::statiskit::Estimator >, autowig::Held< class ::statiskit::Optimization< class ::statiskit::Estimator > >::Type, boost::python::bases< class ::statiskit::Estimator > > class_f91df65393045536a1ca311b75cfa583("_Optimization_f91df65393045536a1ca311b75cfa583", "", boost::python::no_init);
    class_f91df65393045536a1ca311b75cfa583.def(boost::python::init<  >(""));
    class_f91df65393045536a1ca311b75cfa583.def(boost::python::init< class ::statiskit::Optimization< class ::statiskit::Estimator > const & >(""));
    class_f91df65393045536a1ca311b75cfa583.def("get_mindiff", method_pointer_b0c129ce83d85f72a43dbc3811d37f36, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f91df65393045536a1ca311b75cfa583.def("set_mindiff", method_pointer_2ebd321d8d97536cbe9dd13a90383daa, "");
    class_f91df65393045536a1ca311b75cfa583.def("get_minits", method_pointer_5e1dee0d027b53b69f5a4f485b7598f6, "");
    class_f91df65393045536a1ca311b75cfa583.def("set_minits", method_pointer_94cd8ba1a27c525b988f55f4a8c53b48, "");
    class_f91df65393045536a1ca311b75cfa583.def("get_maxits", method_pointer_4830e1dcb5f05334bfb1c24e2123899a, "");
    class_f91df65393045536a1ca311b75cfa583.def("set_maxits", method_pointer_7fa2e27c3fd85c15bbc119708a566b70, "");

    if(autowig::Held< class ::statiskit::Optimization< class ::statiskit::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< class ::statiskit::Estimator > >::Type, autowig::Held< class ::statiskit::Estimator >::Type >();
    }

}