#include "_pgm.h"



namespace autowig
{
    class Wrap_acd10274bef3532e8944df64bfea0a51 : public ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > >
    {
        public:
            
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
    template <> autowig::Wrap_acd10274bef3532e8944df64bfea0a51 const volatile * get_pointer<autowig::Wrap_acd10274bef3532e8944df64bfea0a51 const volatile >(autowig::Wrap_acd10274bef3532e8944df64bfea0a51 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_acd10274bef3532e8944df64bfea0a51()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_acd10274bef3532e8944df64bfea0a51, autowig::Held< autowig::Wrap_acd10274bef3532e8944df64bfea0a51 >::Type, boost::python::bases< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >, boost::noncopyable > class_acd10274bef3532e8944df64bfea0a51("_PolymorphicCopy_acd10274bef3532e8944df64bfea0a51", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_acd10274bef3532e8944df64bfea0a51 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > >::Type, autowig::Held< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > > > >();
    }

}