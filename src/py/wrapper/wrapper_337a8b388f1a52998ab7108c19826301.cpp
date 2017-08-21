#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator const volatile * get_pointer<class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator const volatile >(class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_337a8b388f1a52998ab7108c19826301()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    std::string name_d544dc310ae557008b400b4a8f8175e1 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._directed_gaussian_distribution_ml_estimation");
    boost::python::object module_d544dc310ae557008b400b4a8f8175e1(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d544dc310ae557008b400b4a8f8175e1.c_str()))));
    boost::python::scope().attr("_directed_gaussian_distribution_ml_estimation") = module_d544dc310ae557008b400b4a8f8175e1;
    boost::python::scope scope_d544dc310ae557008b400b4a8f8175e1 = module_d544dc310ae557008b400b4a8f8175e1;
    enum ::statiskit::linalg::solver_type const & (::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator::*method_pointer_c5bc1a54844b55b38dc648b582c05f91)() const = &::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator::get_solver;
    void  (::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator::*method_pointer_cde7298ca2805ccfb4e2f534f20cad70)(enum ::statiskit::linalg::solver_type const &) = &::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator::set_solver;
    class ::statiskit::pgm::DirectedGraph const * (::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator::*method_pointer_5b64bf20f2125a6ab99438a4199f1c1a)() const = &::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator::get_graph;
    void  (::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator::*method_pointer_37b4c251676b5a8085340da15b31c3a1)(class ::statiskit::pgm::DirectedGraph const &) = &::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator::set_graph;
    boost::python::class_< class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator, autowig::Held< class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > > class_337a8b388f1a52998ab7108c19826301("Estimator", "", boost::python::no_init);
    class_337a8b388f1a52998ab7108c19826301.def(boost::python::init<  >(""));
    class_337a8b388f1a52998ab7108c19826301.def(boost::python::init< class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator const & >(""));
    class_337a8b388f1a52998ab7108c19826301.def("get_solver", method_pointer_c5bc1a54844b55b38dc648b582c05f91, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_337a8b388f1a52998ab7108c19826301.def("set_solver", method_pointer_cde7298ca2805ccfb4e2f534f20cad70, "");
    class_337a8b388f1a52998ab7108c19826301.def("get_graph", method_pointer_5b64bf20f2125a6ab99438a4199f1c1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_337a8b388f1a52998ab7108c19826301.def("set_graph", method_pointer_37b4c251676b5a8085340da15b31c3a1, "");

    if(autowig::Held< class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::DirectedGaussianDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Type >();
    }

}