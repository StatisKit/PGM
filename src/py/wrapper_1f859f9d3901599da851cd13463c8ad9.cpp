#include "_pgm.h"



namespace autowig
{
    class Wrap_1f859f9d3901599da851cd13463c8ad9 : public ::statiskit::MixtureUndirectedGraphDistribution::Computation, public boost::python::wrapper< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > > (result);
            }
                        
            virtual class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  assignment(class ::statiskit::MixtureUndirectedGraphDistribution const & param_0, class ::statiskit::UndirectedGraph const * param_1) const
            { return this->get_override("assignment")(param_0, param_1); }
                        
            virtual class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >  posterior(class ::statiskit::MixtureUndirectedGraphDistribution const & param_0, class ::statiskit::UndirectedGraph const * param_1, bool const & param_2) const
            { return this->get_override("posterior")(param_0, param_1, param_2); }
                        
            virtual double  ldf(class ::statiskit::MixtureUndirectedGraphDistribution const & param_0, class ::statiskit::UndirectedGraph const * param_1) const
            { return this->get_override("ldf")(param_0, param_1); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_1f859f9d3901599da851cd13463c8ad9 const volatile * get_pointer<autowig::Wrap_1f859f9d3901599da851cd13463c8ad9 const volatile >(autowig::Wrap_1f859f9d3901599da851cd13463c8ad9 const volatile *c) { return c; }
    template <> struct ::statiskit::MixtureUndirectedGraphDistribution::Computation const volatile * get_pointer<struct ::statiskit::MixtureUndirectedGraphDistribution::Computation const volatile >(struct ::statiskit::MixtureUndirectedGraphDistribution::Computation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1f859f9d3901599da851cd13463c8ad9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_198ee20e7c705afd9f6727631d97e361 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._mixture_undirected_graph_distribution");
    boost::python::object module_198ee20e7c705afd9f6727631d97e361(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_198ee20e7c705afd9f6727631d97e361.c_str()))));
    boost::python::scope().attr("_mixture_undirected_graph_distribution") = module_198ee20e7c705afd9f6727631d97e361;
    boost::python::scope scope_198ee20e7c705afd9f6727631d97e361 = module_198ee20e7c705afd9f6727631d97e361;
    double  (::statiskit::MixtureUndirectedGraphDistribution::Computation::*method_pointer_5819a3aa889d55529b27694202f793b7)(class ::statiskit::MixtureUndirectedGraphDistribution const &, class ::statiskit::UndirectedGraph const *) const = &::statiskit::MixtureUndirectedGraphDistribution::Computation::ldf;
    class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >  (::statiskit::MixtureUndirectedGraphDistribution::Computation::*method_pointer_a860fbd3a70c589d875059a7ce1b247f)(class ::statiskit::MixtureUndirectedGraphDistribution const &, class ::statiskit::UndirectedGraph const *, bool const &) const = &::statiskit::MixtureUndirectedGraphDistribution::Computation::posterior;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureUndirectedGraphDistribution::Computation::*method_pointer_f85cb7510a645c64b3fac116c5c7063a)(class ::statiskit::MixtureUndirectedGraphDistribution const &, class ::statiskit::UndirectedGraph const *) const = &::statiskit::MixtureUndirectedGraphDistribution::Computation::assignment;
    class ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > >  (::statiskit::MixtureUndirectedGraphDistribution::Computation::*method_pointer_ea7033e6d52c5f1dafbc807c594c2a84)() const = &::statiskit::MixtureUndirectedGraphDistribution::Computation::copy;
    boost::python::class_< autowig::Wrap_1f859f9d3901599da851cd13463c8ad9, autowig::Held< autowig::Wrap_1f859f9d3901599da851cd13463c8ad9 >::Type, boost::noncopyable > class_1f859f9d3901599da851cd13463c8ad9("Computation", "", boost::python::no_init);
    class_1f859f9d3901599da851cd13463c8ad9.def("ldf", boost::python::pure_virtual(method_pointer_5819a3aa889d55529b27694202f793b7), "");
    class_1f859f9d3901599da851cd13463c8ad9.def("posterior", boost::python::pure_virtual(method_pointer_a860fbd3a70c589d875059a7ce1b247f), "");
    class_1f859f9d3901599da851cd13463c8ad9.def("assignment", boost::python::pure_virtual(method_pointer_f85cb7510a645c64b3fac116c5c7063a), "");
    class_1f859f9d3901599da851cd13463c8ad9.def("copy", boost::python::pure_virtual(method_pointer_ea7033e6d52c5f1dafbc807c594c2a84), "");
    if(autowig::Held< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_1f859f9d3901599da851cd13463c8ad9 >::Type, autowig::Held< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >::Type, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_1f859f9d3901599da851cd13463c8ad9 >::Type, autowig::Held< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >::Type >();
    }    

}