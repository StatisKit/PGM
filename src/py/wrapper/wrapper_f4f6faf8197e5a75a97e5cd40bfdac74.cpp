#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f4f6faf8197e5a75a97e5cd40bfdac74()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::pgm::UndirectedGaussianDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_019d622230945603b3d76711318bce58)() const = &::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > > class_f4f6faf8197e5a75a97e5cd40bfdac74("_ActiveEstimation_f4f6faf8197e5a75a97e5cd40bfdac74", "", boost::python::no_init);
    class_f4f6faf8197e5a75a97e5cd40bfdac74.def(boost::python::init<  >(""));
    class_f4f6faf8197e5a75a97e5cd40bfdac74.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_f4f6faf8197e5a75a97e5cd40bfdac74.def(boost::python::init< class ::statiskit::pgm::UndirectedGaussianDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_f4f6faf8197e5a75a97e5cd40bfdac74.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >(""));
    class_f4f6faf8197e5a75a97e5cd40bfdac74.def("get_data", method_pointer_019d622230945603b3d76711318bce58, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type >();
    }

}