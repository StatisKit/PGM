#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::MixtureUndirectedGraphProcess const volatile * get_pointer<class ::statiskit::pgm::MixtureUndirectedGraphProcess const volatile >(class ::statiskit::pgm::MixtureUndirectedGraphProcess const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c5364bf6a7375db8ba8ffc4938cdbf83()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    ::statiskit::Index  (::statiskit::pgm::MixtureUndirectedGraphProcess::*method_pointer_1ef0c769b5d75375ad0f0d1b24015baf)() const = &::statiskit::pgm::MixtureUndirectedGraphProcess::get_nb_states;
    struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation const * (::statiskit::pgm::MixtureUndirectedGraphProcess::*method_pointer_219420444120560fbf8dd9d0592d88d3)() const = &::statiskit::pgm::MixtureUndirectedGraphProcess::get_computation;
    void  (::statiskit::pgm::MixtureUndirectedGraphProcess::*method_pointer_fece54ee1a0253b88374f6cfd8f084ef)(struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation const *) = &::statiskit::pgm::MixtureUndirectedGraphProcess::set_computation;
    ::statiskit::Index  (::statiskit::pgm::MixtureUndirectedGraphProcess::*method_pointer_38e18cba5d455742a7aaaeeef6e45c56)() const = &::statiskit::pgm::MixtureUndirectedGraphProcess::get_nb_vertices;
    void  (::statiskit::pgm::MixtureUndirectedGraphProcess::*method_pointer_f6e5c9f0d05b5f1b9fe78925365363ec)(::statiskit::Index const &) = &::statiskit::pgm::MixtureUndirectedGraphProcess::set_nb_vertices;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::pgm::MixtureUndirectedGraphProcess::*method_pointer_06366dbfa57d5c66a4d00316d80b5c73)() const = &::statiskit::pgm::MixtureUndirectedGraphProcess::get_alpha;
    void  (::statiskit::pgm::MixtureUndirectedGraphProcess::*method_pointer_2165a9342c0452f3895f36ea249f0c03)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::pgm::MixtureUndirectedGraphProcess::set_alpha;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::pgm::MixtureUndirectedGraphProcess::*method_pointer_00f845fb510650398a8be5c5fceb397f)() const = &::statiskit::pgm::MixtureUndirectedGraphProcess::get_pi;
    void  (::statiskit::pgm::MixtureUndirectedGraphProcess::*method_pointer_ad67bcdf7cf851d9b931703ff75e64a2)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::pgm::MixtureUndirectedGraphProcess::set_pi;
    class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >  (::statiskit::pgm::MixtureUndirectedGraphProcess::*method_pointer_d694b2c0a8d05967a15f174588092abb)(class ::statiskit::pgm::UndirectedGraph const *, bool const &) const = &::statiskit::pgm::MixtureUndirectedGraphProcess::posterior;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::pgm::MixtureUndirectedGraphProcess::*method_pointer_c182d9ddb34a52d4be1a002d4d4d9769)(class ::statiskit::pgm::UndirectedGraph const *) const = &::statiskit::pgm::MixtureUndirectedGraphProcess::assignment;
    boost::python::class_< class ::statiskit::pgm::MixtureUndirectedGraphProcess, autowig::Held< class ::statiskit::pgm::MixtureUndirectedGraphProcess >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::UndirectedGraphProcess, class ::statiskit::pgm::MixtureUndirectedGraphProcess, struct ::statiskit::pgm::UndirectedGraphProcess > > > class_c5364bf6a7375db8ba8ffc4938cdbf83("MixtureUndirectedGraphProcess", "", boost::python::no_init);
    class_c5364bf6a7375db8ba8ffc4938cdbf83.def(boost::python::init< ::statiskit::Index const &, ::statiskit::Index const & >(""));
    class_c5364bf6a7375db8ba8ffc4938cdbf83.def(boost::python::init< class ::statiskit::pgm::MixtureUndirectedGraphProcess const & >(""));
    class_c5364bf6a7375db8ba8ffc4938cdbf83.def("get_nb_states", method_pointer_1ef0c769b5d75375ad0f0d1b24015baf, "");
    class_c5364bf6a7375db8ba8ffc4938cdbf83.def("get_computation", method_pointer_219420444120560fbf8dd9d0592d88d3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c5364bf6a7375db8ba8ffc4938cdbf83.def("set_computation", method_pointer_fece54ee1a0253b88374f6cfd8f084ef, "");
    class_c5364bf6a7375db8ba8ffc4938cdbf83.def("get_nb_vertices", method_pointer_38e18cba5d455742a7aaaeeef6e45c56, "");
    class_c5364bf6a7375db8ba8ffc4938cdbf83.def("set_nb_vertices", method_pointer_f6e5c9f0d05b5f1b9fe78925365363ec, "");
    class_c5364bf6a7375db8ba8ffc4938cdbf83.def("get_alpha", method_pointer_06366dbfa57d5c66a4d00316d80b5c73, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c5364bf6a7375db8ba8ffc4938cdbf83.def("set_alpha", method_pointer_2165a9342c0452f3895f36ea249f0c03, "");
    class_c5364bf6a7375db8ba8ffc4938cdbf83.def("get_pi", method_pointer_00f845fb510650398a8be5c5fceb397f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c5364bf6a7375db8ba8ffc4938cdbf83.def("set_pi", method_pointer_ad67bcdf7cf851d9b931703ff75e64a2, "");
    class_c5364bf6a7375db8ba8ffc4938cdbf83.def("posterior", method_pointer_d694b2c0a8d05967a15f174588092abb, "");
    class_c5364bf6a7375db8ba8ffc4938cdbf83.def("assignment", method_pointer_c182d9ddb34a52d4be1a002d4d4d9769, "");

    if(autowig::Held< class ::statiskit::pgm::MixtureUndirectedGraphProcess >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::MixtureUndirectedGraphProcess >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::UndirectedGraphProcess, class ::statiskit::pgm::MixtureUndirectedGraphProcess, struct ::statiskit::pgm::UndirectedGraphProcess > >::Type >();
    }

}