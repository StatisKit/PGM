#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b524a54a3c975d31bfe4bbdba016c0e0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateDistributionEstimation > > class_b524a54a3c975d31bfe4bbdba016c0e0("_LazyEstimation_b524a54a3c975d31bfe4bbdba016c0e0", "", boost::python::no_init);
    class_b524a54a3c975d31bfe4bbdba016c0e0.def(boost::python::init<  >(""));
    class_b524a54a3c975d31bfe4bbdba016c0e0.def(boost::python::init< class ::statiskit::pgm::UndirectedGaussianDistribution const * >(""));
    class_b524a54a3c975d31bfe4bbdba016c0e0.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Type >();
    }

}