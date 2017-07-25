#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator > const volatile >(class ::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8a9da2cf5d7d5dbb8439fd5482c1ed36()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::*method_pointer_c35036702ca7595abc80c130739da0a5)() const = &::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::*method_pointer_d8727aa0c9825168859f99a62719cf64)(double const &) = &::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::*method_pointer_a185cdd15dc9564fbbc414f735fb6920)() const = &::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::*method_pointer_b0099fc2ec625388bbdd8acc7682f9a0)(unsigned int const &) = &::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::*method_pointer_00f18248208c5281928f70ac4c7f767e)() const = &::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::*method_pointer_b520ac539ddb53889435a931a6d4560a)(unsigned int const &) = &::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::set_maxits;
    boost::python::class_< class ::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >, autowig::Held< class ::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator > >::Type, boost::python::bases< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator > > class_8a9da2cf5d7d5dbb8439fd5482c1ed36("_Optimization_8a9da2cf5d7d5dbb8439fd5482c1ed36", "", boost::python::no_init);
    class_8a9da2cf5d7d5dbb8439fd5482c1ed36.def(boost::python::init<  >(""));
    class_8a9da2cf5d7d5dbb8439fd5482c1ed36.def(boost::python::init< class ::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator > const & >(""));
    class_8a9da2cf5d7d5dbb8439fd5482c1ed36.def("get_mindiff", method_pointer_c35036702ca7595abc80c130739da0a5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8a9da2cf5d7d5dbb8439fd5482c1ed36.def("set_mindiff", method_pointer_d8727aa0c9825168859f99a62719cf64, "");
    class_8a9da2cf5d7d5dbb8439fd5482c1ed36.def("get_minits", method_pointer_a185cdd15dc9564fbbc414f735fb6920, "");
    class_8a9da2cf5d7d5dbb8439fd5482c1ed36.def("set_minits", method_pointer_b0099fc2ec625388bbdd8acc7682f9a0, "");
    class_8a9da2cf5d7d5dbb8439fd5482c1ed36.def("get_maxits", method_pointer_00f18248208c5281928f70ac4c7f767e, "");
    class_8a9da2cf5d7d5dbb8439fd5482c1ed36.def("set_maxits", method_pointer_b520ac539ddb53889435a931a6d4560a, "");

    if(autowig::Held< class ::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator > >::Type, autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionMLEstimation::Estimator >::Type >();
    }

}