#include "_pgm.h"



namespace autowig
{

    void method_decorator_ff6cd4307b865b7fa234eab484038545(class ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > > const & instance, const class ::statiskit::UndirectedGraph & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > > const volatile >(class ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_642c447329405201adba23745b018e97()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_642c447329405201adba23745b018e97_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > > const & unique_ptr_642c447329405201adba23745b018e97)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > > & >(unique_ptr_642c447329405201adba23745b018e97).release()).ptr());
            std::shared_ptr< class ::statiskit::UndirectedGraph  > shared_ptr_642c447329405201adba23745b018e97(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > > & >(unique_ptr_642c447329405201adba23745b018e97)));
            return boost::python::incref(boost::python::object(shared_ptr_642c447329405201adba23745b018e97).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > >, unique_ptr_642c447329405201adba23745b018e97_to_python >();
}