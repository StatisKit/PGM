#include "_pgm.h"



namespace autowig
{

    void method_decorator_df02a07357f35fbb8611edcdfa2e17d3(class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess > > const & instance, const struct ::statiskit::pgm::UndirectedGraphProcess & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess > > const volatile >(class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_207ca75f2cff5bcbb42828fbb044cb53()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_207ca75f2cff5bcbb42828fbb044cb53_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess > > const & unique_ptr_207ca75f2cff5bcbb42828fbb044cb53)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess > > & >(unique_ptr_207ca75f2cff5bcbb42828fbb044cb53).release()).ptr());
            std::shared_ptr< struct ::statiskit::pgm::UndirectedGraphProcess  > shared_ptr_207ca75f2cff5bcbb42828fbb044cb53(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess > > & >(unique_ptr_207ca75f2cff5bcbb42828fbb044cb53)));
            return boost::python::incref(boost::python::object(shared_ptr_207ca75f2cff5bcbb42828fbb044cb53).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess > >, unique_ptr_207ca75f2cff5bcbb42828fbb044cb53_to_python >();
}