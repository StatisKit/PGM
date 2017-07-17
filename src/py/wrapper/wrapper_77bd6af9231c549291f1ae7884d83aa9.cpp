#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > const volatile >(class ::statiskit::LazyEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_77bd6af9231c549291f1ae7884d83aa9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::statiskit::pgm::GraphicalGaussianDistribution const * (::statiskit::LazyEstimation< ::statiskit::pgm::GraphicalGaussianDistribution, ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::*method_pointer_c4b48535a53150aabfd99128fe1ceaaa)() const = &::statiskit::LazyEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > >::Type, boost::python::bases< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > > class_77bd6af9231c549291f1ae7884d83aa9("_LazyEstimation_77bd6af9231c549291f1ae7884d83aa9", "", boost::python::no_init);
    class_77bd6af9231c549291f1ae7884d83aa9.def(boost::python::init<  >(""));
    class_77bd6af9231c549291f1ae7884d83aa9.def(boost::python::init< class ::statiskit::pgm::GraphicalGaussianDistribution const * >(""));
    class_77bd6af9231c549291f1ae7884d83aa9.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > const & >(""));
    class_77bd6af9231c549291f1ae7884d83aa9.def("get_estimated", method_pointer_c4b48535a53150aabfd99128fe1ceaaa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > >::Type, autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::Type >();
    }

}