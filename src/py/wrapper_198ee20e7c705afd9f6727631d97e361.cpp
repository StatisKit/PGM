#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MixtureUndirectedGraphDistribution const volatile * get_pointer<class ::statiskit::MixtureUndirectedGraphDistribution const volatile >(class ::statiskit::MixtureUndirectedGraphDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_198ee20e7c705afd9f6727631d97e361()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::MixtureUndirectedGraphDistribution::*method_pointer_4006eb7a1ab1553f8e59b70b54b105bf)() const = &::statiskit::MixtureUndirectedGraphDistribution::get_nb_vertices;
    void  (::statiskit::MixtureUndirectedGraphDistribution::*method_pointer_9f9d5409e2545e9ba908222b701646a2)(::statiskit::Index const &) = &::statiskit::MixtureUndirectedGraphDistribution::set_nb_vertices;
    ::statiskit::Index  (::statiskit::MixtureUndirectedGraphDistribution::*method_pointer_b1b0f4b0b7bd59b3ac8c08a6aae4dcae)() const = &::statiskit::MixtureUndirectedGraphDistribution::get_nb_states;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureUndirectedGraphDistribution::*method_pointer_ac69b6d79d9150e2863191fead436328)() const = &::statiskit::MixtureUndirectedGraphDistribution::get_alpha;
    void  (::statiskit::MixtureUndirectedGraphDistribution::*method_pointer_7d5642f76ef555d28c5febc42536f2b6)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MixtureUndirectedGraphDistribution::set_alpha;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::MixtureUndirectedGraphDistribution::*method_pointer_7224df883136506f8890412e8ded818a)() const = &::statiskit::MixtureUndirectedGraphDistribution::get_pi;
    void  (::statiskit::MixtureUndirectedGraphDistribution::*method_pointer_9a888d4a3ec255b8ba753316f787d1b0)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &) = &::statiskit::MixtureUndirectedGraphDistribution::set_pi;
    boost::python::class_< class ::statiskit::MixtureUndirectedGraphDistribution, autowig::Held< class ::statiskit::MixtureUndirectedGraphDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > > > class_198ee20e7c705afd9f6727631d97e361("MixtureUndirectedGraphDistribution", "", boost::python::no_init);
    class_198ee20e7c705afd9f6727631d97e361.def(boost::python::init< ::statiskit::Index const &, ::statiskit::Index const & >(""));
    class_198ee20e7c705afd9f6727631d97e361.def(boost::python::init< class ::statiskit::MixtureUndirectedGraphDistribution const & >(""));
    class_198ee20e7c705afd9f6727631d97e361.def("get_nb_vertices", method_pointer_4006eb7a1ab1553f8e59b70b54b105bf, "");
    class_198ee20e7c705afd9f6727631d97e361.def("set_nb_vertices", method_pointer_9f9d5409e2545e9ba908222b701646a2, "");
    class_198ee20e7c705afd9f6727631d97e361.def("get_nb_states", method_pointer_b1b0f4b0b7bd59b3ac8c08a6aae4dcae, "");
    class_198ee20e7c705afd9f6727631d97e361.def("get_alpha", method_pointer_ac69b6d79d9150e2863191fead436328, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_198ee20e7c705afd9f6727631d97e361.def("set_alpha", method_pointer_7d5642f76ef555d28c5febc42536f2b6, "");
    class_198ee20e7c705afd9f6727631d97e361.def("get_pi", method_pointer_7224df883136506f8890412e8ded818a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_198ee20e7c705afd9f6727631d97e361.def("set_pi", method_pointer_9a888d4a3ec255b8ba753316f787d1b0, "");

    if(autowig::Held< class ::statiskit::MixtureUndirectedGraphDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureUndirectedGraphDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::MixtureUndirectedGraphDistribution >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::MixtureUndirectedGraphDistribution, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::MixtureUndirectedGraphDistribution >::Type, class ::statiskit::MixtureUndirectedGraphDistribution > > >();
    }

}