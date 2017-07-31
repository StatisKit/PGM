#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::ChordalGaussianDistribution const volatile * get_pointer<class ::statiskit::pgm::ChordalGaussianDistribution const volatile >(class ::statiskit::pgm::ChordalGaussianDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1ebe62d5bc095691ba3ee21974357bad()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    class ::statiskit::pgm::DirectedGraph const * (::statiskit::pgm::ChordalGaussianDistribution::*method_pointer_6dd8e80afef6584fb32d18ef7a0d04e2)() const = &::statiskit::pgm::ChordalGaussianDistribution::get_graph;
    class ::statiskit::glm::ScalarPredictor * (::statiskit::pgm::ChordalGaussianDistribution::*method_pointer_44bcc2c130d552acaebec3376b787013)(::statiskit::Index const &) const = &::statiskit::pgm::ChordalGaussianDistribution::get_predictor;
    void  (::statiskit::pgm::ChordalGaussianDistribution::*method_pointer_a03e4dd4163055de9fac7c81feb99715)(::statiskit::Index const &, class ::statiskit::glm::ScalarPredictor const &) = &::statiskit::pgm::ChordalGaussianDistribution::set_predictor;
    double  (::statiskit::pgm::ChordalGaussianDistribution::*method_pointer_f152fafcce645b58a63d87f251292f97)(::statiskit::Index const &) const = &::statiskit::pgm::ChordalGaussianDistribution::get_mu;
    void  (::statiskit::pgm::ChordalGaussianDistribution::*method_pointer_7f004bfc249153269cdc53240afafb65)(::statiskit::Index const &, double const &) = &::statiskit::pgm::ChordalGaussianDistribution::set_mu;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::pgm::ChordalGaussianDistribution::*method_pointer_5d90b7aaa2c456838c314f790e110da0)() const = &::statiskit::pgm::ChordalGaussianDistribution::get_sigma;
    void  (::statiskit::pgm::ChordalGaussianDistribution::*method_pointer_8901cf151fc55e6b91b263983bb13936)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::pgm::ChordalGaussianDistribution::set_sigma;
    boost::python::class_< class ::statiskit::pgm::ChordalGaussianDistribution, autowig::Held< class ::statiskit::pgm::ChordalGaussianDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > > > class_1ebe62d5bc095691ba3ee21974357bad("ChordalGaussianDistribution", "", boost::python::no_init);
    class_1ebe62d5bc095691ba3ee21974357bad.def(boost::python::init< class ::statiskit::pgm::DirectedGraph const & >(""));
    class_1ebe62d5bc095691ba3ee21974357bad.def(boost::python::init< class ::statiskit::pgm::ChordalGaussianDistribution const & >(""));
    class_1ebe62d5bc095691ba3ee21974357bad.def("get_graph", method_pointer_6dd8e80afef6584fb32d18ef7a0d04e2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1ebe62d5bc095691ba3ee21974357bad.def("get_predictor", method_pointer_44bcc2c130d552acaebec3376b787013, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1ebe62d5bc095691ba3ee21974357bad.def("set_predictor", method_pointer_a03e4dd4163055de9fac7c81feb99715, "");
    class_1ebe62d5bc095691ba3ee21974357bad.def("get_mu", method_pointer_f152fafcce645b58a63d87f251292f97, "");
    class_1ebe62d5bc095691ba3ee21974357bad.def("set_mu", method_pointer_7f004bfc249153269cdc53240afafb65, "");
    class_1ebe62d5bc095691ba3ee21974357bad.def("get_sigma", method_pointer_5d90b7aaa2c456838c314f790e110da0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ebe62d5bc095691ba3ee21974357bad.def("set_sigma", method_pointer_8901cf151fc55e6b91b263983bb13936, "");

    if(autowig::Held< class ::statiskit::pgm::ChordalGaussianDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::ChordalGaussianDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
    }

}