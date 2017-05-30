#include "_pgm.h"



namespace autowig
{

    void method_decorator_88ecb8b588ca5a72b0908deb77eeccac(class ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > > const & instance, const struct ::statiskit::MixtureUndirectedGraphDistribution::Computation & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0a38b1c5789754d5ac66516950c84773()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_0a38b1c5789754d5ac66516950c84773_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > > const & unique_ptr_0a38b1c5789754d5ac66516950c84773)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > > & >(unique_ptr_0a38b1c5789754d5ac66516950c84773).release()).ptr());
            std::shared_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation  > shared_ptr_0a38b1c5789754d5ac66516950c84773(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > > & >(unique_ptr_0a38b1c5789754d5ac66516950c84773)));
            return boost::python::incref(boost::python::object(shared_ptr_0a38b1c5789754d5ac66516950c84773).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > >, unique_ptr_0a38b1c5789754d5ac66516950c84773_to_python >();
}