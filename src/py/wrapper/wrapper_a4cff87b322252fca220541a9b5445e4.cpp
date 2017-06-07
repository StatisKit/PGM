#include "_pgm.h"



namespace autowig
{

    void method_decorator_fe02cff2fb1257a18ac0bd8f10c3d1f1(class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > > const & instance, const class ::statiskit::pgm::UndirectedGraph & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > > const volatile >(class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a4cff87b322252fca220541a9b5445e4()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_a4cff87b322252fca220541a9b5445e4_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > > const & unique_ptr_a4cff87b322252fca220541a9b5445e4)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > > & >(unique_ptr_a4cff87b322252fca220541a9b5445e4).release()).ptr());
            std::shared_ptr< class ::statiskit::pgm::UndirectedGraph  > shared_ptr_a4cff87b322252fca220541a9b5445e4(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > > & >(unique_ptr_a4cff87b322252fca220541a9b5445e4)));
            return boost::python::incref(boost::python::object(shared_ptr_a4cff87b322252fca220541a9b5445e4).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > >, unique_ptr_a4cff87b322252fca220541a9b5445e4_to_python >();
}