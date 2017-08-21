#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator > const volatile >(class ::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2ce7dd3622da55bdbbb4176264754530()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::*method_pointer_9a683df1f1f35ce88fcee2f1e8b935a9)() const = &::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::*method_pointer_9dab26e437ae5feaa83709b4065c1076)(double const &) = &::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::*method_pointer_73227136f19d5d8f88230de01099e837)() const = &::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::*method_pointer_fa0e5ad4a42f51d88c946320e40c625e)(unsigned int const &) = &::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::*method_pointer_5a77e02168ae5e87b79c01fbeadcfb95)() const = &::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::*method_pointer_12c93efc59e258b5bf72f13efa6749e5)(unsigned int const &) = &::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::set_maxits;
    boost::python::class_< class ::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >, autowig::Held< class ::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator > >::Type, boost::python::bases< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator > > class_2ce7dd3622da55bdbbb4176264754530("_Optimization_2ce7dd3622da55bdbbb4176264754530", "", boost::python::no_init);
    class_2ce7dd3622da55bdbbb4176264754530.def(boost::python::init<  >(""));
    class_2ce7dd3622da55bdbbb4176264754530.def(boost::python::init< class ::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator > const & >(""));
    class_2ce7dd3622da55bdbbb4176264754530.def("get_mindiff", method_pointer_9a683df1f1f35ce88fcee2f1e8b935a9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2ce7dd3622da55bdbbb4176264754530.def("set_mindiff", method_pointer_9dab26e437ae5feaa83709b4065c1076, "");
    class_2ce7dd3622da55bdbbb4176264754530.def("get_minits", method_pointer_73227136f19d5d8f88230de01099e837, "");
    class_2ce7dd3622da55bdbbb4176264754530.def("set_minits", method_pointer_fa0e5ad4a42f51d88c946320e40c625e, "");
    class_2ce7dd3622da55bdbbb4176264754530.def("get_maxits", method_pointer_5a77e02168ae5e87b79c01fbeadcfb95, "");
    class_2ce7dd3622da55bdbbb4176264754530.def("set_maxits", method_pointer_12c93efc59e258b5bf72f13efa6749e5, "");

    if(autowig::Held< class ::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator > >::Type, autowig::Held< class ::statiskit::pgm::ChordalGaussianDistributionMLEstimation::Estimator >::Type >();
    }

}