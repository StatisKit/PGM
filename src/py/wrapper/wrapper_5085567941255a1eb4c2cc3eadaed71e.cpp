#include "_pgm.h"



namespace autowig
{
    class Wrap_5085567941255a1eb4c2cc3eadaed71e : public ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation, struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation, struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > >
    {
        public:
            
            virtual class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  assignment(class ::statiskit::pgm::MixtureUndirectedGraphProcess const & param_0, class ::statiskit::pgm::UndirectedGraph const * param_1) const
            { return this->get_override("assignment")(param_0, param_1); }
                        
            virtual class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >  posterior(class ::statiskit::pgm::MixtureUndirectedGraphProcess const & param_0, class ::statiskit::pgm::UndirectedGraph const * param_1, bool const & param_2) const
            { return this->get_override("posterior")(param_0, param_1, param_2); }
                        
            virtual double  ldf(class ::statiskit::pgm::MixtureUndirectedGraphProcess const & param_0, class ::statiskit::pgm::UndirectedGraph const * param_1) const
            { return this->get_override("ldf")(param_0, param_1); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_5085567941255a1eb4c2cc3eadaed71e const volatile * get_pointer<autowig::Wrap_5085567941255a1eb4c2cc3eadaed71e const volatile >(autowig::Wrap_5085567941255a1eb4c2cc3eadaed71e const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation, struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation, struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation, struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5085567941255a1eb4c2cc3eadaed71e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_5085567941255a1eb4c2cc3eadaed71e, autowig::Held< autowig::Wrap_5085567941255a1eb4c2cc3eadaed71e >::Type, boost::python::bases< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation >, boost::noncopyable > class_5085567941255a1eb4c2cc3eadaed71e("_PolymorphicCopy_5085567941255a1eb4c2cc3eadaed71e", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation, struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_5085567941255a1eb4c2cc3eadaed71e >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation, struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation, struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, class ::statiskit::pgm::MixtureUndirectedGraphProcess::VariationalComputation, struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > >::Type, autowig::Held< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation >::Type >();
    }

}