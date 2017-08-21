#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::UndirectedGaussianDistribution const volatile * get_pointer<class ::statiskit::pgm::UndirectedGaussianDistribution const volatile >(class ::statiskit::pgm::UndirectedGaussianDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5b22809394035357b3788e5074c6a26b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::pgm::UndirectedGaussianDistribution::*method_pointer_667aea6254b55675b007158fd5bd4f52)() const = &::statiskit::pgm::UndirectedGaussianDistribution::get_mu;
    void  (::statiskit::pgm::UndirectedGaussianDistribution::*method_pointer_13a9a78b83885c4eadba3d5a105eb48c)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::pgm::UndirectedGaussianDistribution::set_mu;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::pgm::UndirectedGaussianDistribution::*method_pointer_f54231018b005976a242d2833795bab6)() const = &::statiskit::pgm::UndirectedGaussianDistribution::get_theta;
    void  (::statiskit::pgm::UndirectedGaussianDistribution::*method_pointer_92aef5c2d7a85a0e8b99c69507e58eb2)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::pgm::UndirectedGaussianDistribution::set_theta;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::pgm::UndirectedGaussianDistribution::*method_pointer_7c296aee7e54594888cc14efff842aa8)() const = &::statiskit::pgm::UndirectedGaussianDistribution::get_cholesky;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >  (::statiskit::pgm::UndirectedGaussianDistribution::*method_pointer_9ed1539c702156aea6de765fec8f6f5b)() const = &::statiskit::pgm::UndirectedGaussianDistribution::get_sigma;
    class ::statiskit::pgm::UndirectedGraph  (::statiskit::pgm::UndirectedGaussianDistribution::*method_pointer_894f97e7e768577da6804f061360861c)() const = &::statiskit::pgm::UndirectedGaussianDistribution::get_graph;
    boost::python::class_< class ::statiskit::pgm::UndirectedGaussianDistribution, autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > > > class_5b22809394035357b3788e5074c6a26b("UndirectedGaussianDistribution", "", boost::python::no_init);
    class_5b22809394035357b3788e5074c6a26b.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >(""));
    class_5b22809394035357b3788e5074c6a26b.def(boost::python::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_5b22809394035357b3788e5074c6a26b.def(boost::python::init< class ::statiskit::pgm::UndirectedGaussianDistribution const & >(""));
    class_5b22809394035357b3788e5074c6a26b.def("get_mu", method_pointer_667aea6254b55675b007158fd5bd4f52, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5b22809394035357b3788e5074c6a26b.def("set_mu", method_pointer_13a9a78b83885c4eadba3d5a105eb48c, "");
    class_5b22809394035357b3788e5074c6a26b.def("get_theta", method_pointer_f54231018b005976a242d2833795bab6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5b22809394035357b3788e5074c6a26b.def("set_theta", method_pointer_92aef5c2d7a85a0e8b99c69507e58eb2, "");
    class_5b22809394035357b3788e5074c6a26b.def("get_cholesky", method_pointer_7c296aee7e54594888cc14efff842aa8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5b22809394035357b3788e5074c6a26b.def("get_sigma", method_pointer_9ed1539c702156aea6de765fec8f6f5b, "");
    class_5b22809394035357b3788e5074c6a26b.def("get_graph", method_pointer_894f97e7e768577da6804f061360861c, "");

    if(autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::UndirectedGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
    }

}