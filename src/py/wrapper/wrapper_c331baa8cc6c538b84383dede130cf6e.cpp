#include "_pgm.h"



namespace autowig
{

    void method_decorator_265dfdafc8d55193a6851a02f9eba489(class ::std::unique_ptr< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, struct ::std::default_delete< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > > const & instance, const struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, struct ::std::default_delete< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, struct ::std::default_delete< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > > const volatile >(class ::std::unique_ptr< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, struct ::std::default_delete< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c331baa8cc6c538b84383dede130cf6e()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_c331baa8cc6c538b84383dede130cf6e_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, struct ::std::default_delete< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > > const & unique_ptr_c331baa8cc6c538b84383dede130cf6e)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, struct ::std::default_delete< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > > & >(unique_ptr_c331baa8cc6c538b84383dede130cf6e).release()).ptr());
            std::shared_ptr< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation  > shared_ptr_c331baa8cc6c538b84383dede130cf6e(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, struct ::std::default_delete< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > > & >(unique_ptr_c331baa8cc6c538b84383dede130cf6e)));
            return boost::python::incref(boost::python::object(shared_ptr_c331baa8cc6c538b84383dede130cf6e).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, struct ::std::default_delete< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > >, unique_ptr_c331baa8cc6c538b84383dede130cf6e_to_python >();
}