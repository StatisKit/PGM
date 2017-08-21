#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::DirectedGaussianDistribution const volatile * get_pointer<class ::statiskit::pgm::DirectedGaussianDistribution const volatile >(class ::statiskit::pgm::DirectedGaussianDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ec45d8adf29059808cda43b9d1b15211()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    class ::statiskit::pgm::DirectedGraph const * (::statiskit::pgm::DirectedGaussianDistribution::*method_pointer_c722d72a8bad5e5f9b72b5531b869179)() const = &::statiskit::pgm::DirectedGaussianDistribution::get_graph;
    class ::statiskit::glm::ScalarPredictor * (::statiskit::pgm::DirectedGaussianDistribution::*method_pointer_e6e0ff9fb63e5db8b670eb1b2510e474)(::statiskit::Index const &) const = &::statiskit::pgm::DirectedGaussianDistribution::get_predictor;
    void  (::statiskit::pgm::DirectedGaussianDistribution::*method_pointer_ee0e6874812559d8857fe98c07c03b3c)(::statiskit::Index const &, class ::statiskit::glm::ScalarPredictor const &) = &::statiskit::pgm::DirectedGaussianDistribution::set_predictor;
    double  (::statiskit::pgm::DirectedGaussianDistribution::*method_pointer_cc9e5fdd13905348a92537e2ada0b075)(::statiskit::Index const &) const = &::statiskit::pgm::DirectedGaussianDistribution::get_mu;
    void  (::statiskit::pgm::DirectedGaussianDistribution::*method_pointer_29a28b59836f53bc979182ce8d9cf16e)(::statiskit::Index const &, double const &) = &::statiskit::pgm::DirectedGaussianDistribution::set_mu;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::pgm::DirectedGaussianDistribution::*method_pointer_95118a9e0c355a858c82aa95b88068c4)() const = &::statiskit::pgm::DirectedGaussianDistribution::get_sigma;
    void  (::statiskit::pgm::DirectedGaussianDistribution::*method_pointer_f7d218a0715555419bb83c9f0d944f3d)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::pgm::DirectedGaussianDistribution::set_sigma;
    boost::python::class_< class ::statiskit::pgm::DirectedGaussianDistribution, autowig::Held< class ::statiskit::pgm::DirectedGaussianDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > > > class_ec45d8adf29059808cda43b9d1b15211("DirectedGaussianDistribution", "", boost::python::no_init);
    class_ec45d8adf29059808cda43b9d1b15211.def(boost::python::init< class ::statiskit::pgm::DirectedGraph const & >(""));
    class_ec45d8adf29059808cda43b9d1b15211.def(boost::python::init< class ::statiskit::pgm::DirectedGaussianDistribution const & >(""));
    class_ec45d8adf29059808cda43b9d1b15211.def("get_graph", method_pointer_c722d72a8bad5e5f9b72b5531b869179, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ec45d8adf29059808cda43b9d1b15211.def("get_predictor", method_pointer_e6e0ff9fb63e5db8b670eb1b2510e474, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ec45d8adf29059808cda43b9d1b15211.def("set_predictor", method_pointer_ee0e6874812559d8857fe98c07c03b3c, "");
    class_ec45d8adf29059808cda43b9d1b15211.def("get_mu", method_pointer_cc9e5fdd13905348a92537e2ada0b075, "");
    class_ec45d8adf29059808cda43b9d1b15211.def("set_mu", method_pointer_29a28b59836f53bc979182ce8d9cf16e, "");
    class_ec45d8adf29059808cda43b9d1b15211.def("get_sigma", method_pointer_95118a9e0c355a858c82aa95b88068c4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ec45d8adf29059808cda43b9d1b15211.def("set_sigma", method_pointer_f7d218a0715555419bb83c9f0d944f3d, "");

    if(autowig::Held< class ::statiskit::pgm::DirectedGaussianDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::DirectedGaussianDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::DirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
    }

}