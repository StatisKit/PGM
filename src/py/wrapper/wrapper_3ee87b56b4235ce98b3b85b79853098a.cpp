#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3ee87b56b4235ce98b3b85b79853098a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::pgm::DirectedGaussianDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_91d5a54835845b44a0933847f7d8893e)() const = &::statiskit::ActiveEstimation< class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > > class_3ee87b56b4235ce98b3b85b79853098a("_ActiveEstimation_3ee87b56b4235ce98b3b85b79853098a", "", boost::python::no_init);
    class_3ee87b56b4235ce98b3b85b79853098a.def(boost::python::init<  >(""));
    class_3ee87b56b4235ce98b3b85b79853098a.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_3ee87b56b4235ce98b3b85b79853098a.def(boost::python::init< class ::statiskit::pgm::DirectedGaussianDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_3ee87b56b4235ce98b3b85b79853098a.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >(""));
    class_3ee87b56b4235ce98b3b85b79853098a.def("get_data", method_pointer_91d5a54835845b44a0933847f7d8893e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type >();
    }

}