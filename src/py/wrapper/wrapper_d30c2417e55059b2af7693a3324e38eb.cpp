#include "_pgm.h"



namespace autowig
{

    void method_decorator_6e32e4f76cd25b37aad39decefcd134c(class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk > > const & instance, const struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk > > const volatile >(class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d30c2417e55059b2af7693a3324e38eb()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_d30c2417e55059b2af7693a3324e38eb_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk > > const & unique_ptr_d30c2417e55059b2af7693a3324e38eb)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk > > & >(unique_ptr_d30c2417e55059b2af7693a3324e38eb).release()).ptr());
            std::shared_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk  > shared_ptr_d30c2417e55059b2af7693a3324e38eb(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk > > & >(unique_ptr_d30c2417e55059b2af7693a3324e38eb)));
            return boost::python::incref(boost::python::object(shared_ptr_d30c2417e55059b2af7693a3324e38eb).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk > >, unique_ptr_d30c2417e55059b2af7693a3324e38eb_to_python >();
}