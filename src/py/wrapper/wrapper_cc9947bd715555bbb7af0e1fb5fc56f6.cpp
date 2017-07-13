#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cc9947bd715555bbb7af0e1fb5fc56f6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::pgm::GraphicalGaussianDistribution, ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::*method_pointer_7faa715f333251848f7af77a1a63ac88)() const = &::statiskit::ActiveEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > > > class_cc9947bd715555bbb7af0e1fb5fc56f6("_ActiveEstimation_cc9947bd715555bbb7af0e1fb5fc56f6", "", boost::python::no_init);
    class_cc9947bd715555bbb7af0e1fb5fc56f6.def(boost::python::init<  >(""));
    class_cc9947bd715555bbb7af0e1fb5fc56f6.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_cc9947bd715555bbb7af0e1fb5fc56f6.def(boost::python::init< class ::statiskit::pgm::GraphicalGaussianDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_cc9947bd715555bbb7af0e1fb5fc56f6.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > const & >(""));
    class_cc9947bd715555bbb7af0e1fb5fc56f6.def("get_data", method_pointer_7faa715f333251848f7af77a1a63ac88, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::GraphicalGaussianDistribution, class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation > >::Type >();
    }

}