#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_476cb5789bc953b3b3563c75c42c3375()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::pgm::UndirectedGaussianDistribution, ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::*method_pointer_fc430b5fd34f5e0ea0a2417da5dd95ce)() const = &::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > > > class_476cb5789bc953b3b3563c75c42c3375("_ActiveEstimation_476cb5789bc953b3b3563c75c42c3375", "", boost::python::no_init);
    class_476cb5789bc953b3b3563c75c42c3375.def(boost::python::init<  >(""));
    class_476cb5789bc953b3b3563c75c42c3375.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_476cb5789bc953b3b3563c75c42c3375.def(boost::python::init< class ::statiskit::pgm::UndirectedGaussianDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_476cb5789bc953b3b3563c75c42c3375.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > const & >(""));
    class_476cb5789bc953b3b3563c75c42c3375.def("get_data", method_pointer_fc430b5fd34f5e0ea0a2417da5dd95ce, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::pgm::UndirectedGaussianDistribution, class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation > >::Type >();
    }

}