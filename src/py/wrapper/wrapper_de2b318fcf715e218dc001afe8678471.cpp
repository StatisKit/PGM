#include "_pgm.h"



namespace autowig
{

    void method_decorator_f3c2efca201350fb82c55c71b38419a0(class ::std::unique_ptr< class ::statiskit::pgm::DirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::DirectedGraph > > const & instance, const class ::statiskit::pgm::DirectedGraph & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::pgm::DirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::DirectedGraph > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::pgm::DirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::DirectedGraph > > const volatile >(class ::std::unique_ptr< class ::statiskit::pgm::DirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::DirectedGraph > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_de2b318fcf715e218dc001afe8678471()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_de2b318fcf715e218dc001afe8678471_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::pgm::DirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::DirectedGraph > > const & unique_ptr_de2b318fcf715e218dc001afe8678471)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::pgm::DirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::DirectedGraph > > & >(unique_ptr_de2b318fcf715e218dc001afe8678471).release()).ptr());
            std::shared_ptr< class ::statiskit::pgm::DirectedGraph  > shared_ptr_de2b318fcf715e218dc001afe8678471(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::pgm::DirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::DirectedGraph > > & >(unique_ptr_de2b318fcf715e218dc001afe8678471)));
            return boost::python::incref(boost::python::object(shared_ptr_de2b318fcf715e218dc001afe8678471).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::pgm::DirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::DirectedGraph > >, unique_ptr_de2b318fcf715e218dc001afe8678471_to_python >();
}