#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::GraphicalGaussianDistribution const volatile * get_pointer<class ::statiskit::pgm::GraphicalGaussianDistribution const volatile >(class ::statiskit::pgm::GraphicalGaussianDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5c2a7cec30185bd1b4045fa949b66f81()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::pgm::GraphicalGaussianDistribution::*method_pointer_b0af71e3053c511bbe7d1818d12355bc)() const = &::statiskit::pgm::GraphicalGaussianDistribution::get_mu;
    void  (::statiskit::pgm::GraphicalGaussianDistribution::*method_pointer_c56e9061cd285a25aadda76918ac0803)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::pgm::GraphicalGaussianDistribution::set_mu;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::pgm::GraphicalGaussianDistribution::*method_pointer_63a06558a5a8507e9fb3d4a03f907520)() const = &::statiskit::pgm::GraphicalGaussianDistribution::get_theta;
    void  (::statiskit::pgm::GraphicalGaussianDistribution::*method_pointer_3a58e3d817da5cb585b1a05c1e13b40d)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::pgm::GraphicalGaussianDistribution::set_theta;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::pgm::GraphicalGaussianDistribution::*method_pointer_6d961f1784bd5843a66cc4bf13b72532)() const = &::statiskit::pgm::GraphicalGaussianDistribution::get_cholesky;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::pgm::GraphicalGaussianDistribution::*method_pointer_0c801a7692925b268888876d3916c534)() const = &::statiskit::pgm::GraphicalGaussianDistribution::get_sigma;
    class ::statiskit::pgm::UndirectedGraph  (::statiskit::pgm::GraphicalGaussianDistribution::*method_pointer_fde746a0d0c557989fa3257ff9b7b040)() const = &::statiskit::pgm::GraphicalGaussianDistribution::get_graph;
    boost::python::class_< class ::statiskit::pgm::GraphicalGaussianDistribution, autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::GraphicalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > > > class_5c2a7cec30185bd1b4045fa949b66f81("GraphicalGaussianDistribution", "", boost::python::no_init);
    class_5c2a7cec30185bd1b4045fa949b66f81.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_5c2a7cec30185bd1b4045fa949b66f81.def(boost::python::init< class ::statiskit::pgm::GraphicalGaussianDistribution const & >(""));
    class_5c2a7cec30185bd1b4045fa949b66f81.def("get_mu", method_pointer_b0af71e3053c511bbe7d1818d12355bc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5c2a7cec30185bd1b4045fa949b66f81.def("set_mu", method_pointer_c56e9061cd285a25aadda76918ac0803, "");
    class_5c2a7cec30185bd1b4045fa949b66f81.def("get_theta", method_pointer_63a06558a5a8507e9fb3d4a03f907520, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5c2a7cec30185bd1b4045fa949b66f81.def("set_theta", method_pointer_3a58e3d817da5cb585b1a05c1e13b40d, "");
    class_5c2a7cec30185bd1b4045fa949b66f81.def("get_cholesky", method_pointer_6d961f1784bd5843a66cc4bf13b72532, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5c2a7cec30185bd1b4045fa949b66f81.def("get_sigma", method_pointer_0c801a7692925b268888876d3916c534, "");
    class_5c2a7cec30185bd1b4045fa949b66f81.def("get_graph", method_pointer_fde746a0d0c557989fa3257ff9b7b040, "");

    if(autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::GraphicalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
    }

}