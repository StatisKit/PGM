#include "_pgm.h"



namespace autowig
{

    void method_decorator_0d35a42345b35a30be898daee8d54185(class ::std::unique_ptr< struct ::statiskit::UndirectedGraphDistribution, struct ::std::default_delete< struct ::statiskit::UndirectedGraphDistribution > > const & instance, struct ::statiskit::UndirectedGraphDistribution & param_out)     { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::UndirectedGraphDistribution, struct ::std::default_delete< struct ::statiskit::UndirectedGraphDistribution > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::UndirectedGraphDistribution, struct ::std::default_delete< struct ::statiskit::UndirectedGraphDistribution > > const volatile >(class ::std::unique_ptr< struct ::statiskit::UndirectedGraphDistribution, struct ::std::default_delete< struct ::statiskit::UndirectedGraphDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e8f8545142215102b65a587a54b8eb26()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_e8f8545142215102b65a587a54b8eb26_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::UndirectedGraphDistribution, struct ::std::default_delete< struct ::statiskit::UndirectedGraphDistribution > > const & unique_ptr_e8f8545142215102b65a587a54b8eb26)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::UndirectedGraphDistribution, struct ::std::default_delete< struct ::statiskit::UndirectedGraphDistribution > > & >(unique_ptr_e8f8545142215102b65a587a54b8eb26).release()).ptr());
            std::shared_ptr< struct ::statiskit::UndirectedGraphDistribution  > shared_ptr_e8f8545142215102b65a587a54b8eb26(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::UndirectedGraphDistribution, struct ::std::default_delete< struct ::statiskit::UndirectedGraphDistribution > > & >(unique_ptr_e8f8545142215102b65a587a54b8eb26)));
            return boost::python::incref(boost::python::object(shared_ptr_e8f8545142215102b65a587a54b8eb26).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::UndirectedGraphDistribution, struct ::std::default_delete< struct ::statiskit::UndirectedGraphDistribution > >, unique_ptr_e8f8545142215102b65a587a54b8eb26_to_python >();
}