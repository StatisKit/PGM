#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile >(class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9c18980917245506bb1979aa8e8d808d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::statiskit::pgm::UndirectedGaussianDistribution const * (::statiskit::LazyEstimation< ::statiskit::pgm::UndirectedGaussianDistribution, ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::*method_pointer_98eb77583807567a802193ff1fe3ec18)() const = &::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type, boost::python::bases< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > > class_9c18980917245506bb1979aa8e8d808d("_LazyEstimation_9c18980917245506bb1979aa8e8d808d", "", boost::python::no_init);
    class_9c18980917245506bb1979aa8e8d808d.def(boost::python::init<  >(""));
    class_9c18980917245506bb1979aa8e8d808d.def(boost::python::init< class ::statiskit::pgm::UndirectedGaussianDistribution const * >(""));
    class_9c18980917245506bb1979aa8e8d808d.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const & >(""));
    class_9c18980917245506bb1979aa8e8d808d.def("get_estimated", method_pointer_98eb77583807567a802193ff1fe3ec18, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type, autowig::Held< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::Type >();
    }

}