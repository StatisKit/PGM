#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3b02ccaaf31e5876a23cacdeeb601f38()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::pgm::ChordalGaussianDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_f07322d74d59587791a54da6ae652809)() const = &::statiskit::ActiveEstimation< class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > > class_3b02ccaaf31e5876a23cacdeeb601f38("_ActiveEstimation_3b02ccaaf31e5876a23cacdeeb601f38", "", boost::python::no_init);
    class_3b02ccaaf31e5876a23cacdeeb601f38.def(boost::python::init<  >(""));
    class_3b02ccaaf31e5876a23cacdeeb601f38.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_3b02ccaaf31e5876a23cacdeeb601f38.def(boost::python::init< class ::statiskit::pgm::ChordalGaussianDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_3b02ccaaf31e5876a23cacdeeb601f38.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >(""));
    class_3b02ccaaf31e5876a23cacdeeb601f38.def("get_data", method_pointer_f07322d74d59587791a54da6ae652809, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type >();
    }

}