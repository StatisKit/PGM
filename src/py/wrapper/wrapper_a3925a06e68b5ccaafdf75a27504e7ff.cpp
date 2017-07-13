#include "_pgm.h"



namespace autowig
{
    class Wrap_a3925a06e68b5ccaafdf75a27504e7ff : public ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, public boost::python::wrapper< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, struct ::std::default_delete< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, struct ::std::default_delete< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, struct ::std::default_delete< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > > (result);
            }
                        
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
    template <> autowig::Wrap_a3925a06e68b5ccaafdf75a27504e7ff const volatile * get_pointer<autowig::Wrap_a3925a06e68b5ccaafdf75a27504e7ff const volatile >(autowig::Wrap_a3925a06e68b5ccaafdf75a27504e7ff const volatile *c) { return c; }
    template <> struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation const volatile * get_pointer<struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation const volatile >(struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a3925a06e68b5ccaafdf75a27504e7ff()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    std::string name_c5364bf6a7375db8ba8ffc4938cdbf83 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._mixture_undirected_graph_process");
    boost::python::object module_c5364bf6a7375db8ba8ffc4938cdbf83(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c5364bf6a7375db8ba8ffc4938cdbf83.c_str()))));
    boost::python::scope().attr("_mixture_undirected_graph_process") = module_c5364bf6a7375db8ba8ffc4938cdbf83;
    boost::python::scope scope_c5364bf6a7375db8ba8ffc4938cdbf83 = module_c5364bf6a7375db8ba8ffc4938cdbf83;
    double  (::statiskit::pgm::MixtureUndirectedGraphProcess::Computation::*method_pointer_682ee10228005fada802b12005a4ed67)(class ::statiskit::pgm::MixtureUndirectedGraphProcess const &, class ::statiskit::pgm::UndirectedGraph const *) const = &::statiskit::pgm::MixtureUndirectedGraphProcess::Computation::ldf;
    class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >  (::statiskit::pgm::MixtureUndirectedGraphProcess::Computation::*method_pointer_2fcff5a819f55219a105d3e000ccf802)(class ::statiskit::pgm::MixtureUndirectedGraphProcess const &, class ::statiskit::pgm::UndirectedGraph const *, bool const &) const = &::statiskit::pgm::MixtureUndirectedGraphProcess::Computation::posterior;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::pgm::MixtureUndirectedGraphProcess::Computation::*method_pointer_724727d729b15c1e801374f4369b2265)(class ::statiskit::pgm::MixtureUndirectedGraphProcess const &, class ::statiskit::pgm::UndirectedGraph const *) const = &::statiskit::pgm::MixtureUndirectedGraphProcess::Computation::assignment;
    class ::std::unique_ptr< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation, struct ::std::default_delete< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation > >  (::statiskit::pgm::MixtureUndirectedGraphProcess::Computation::*method_pointer_5f2f64ba9868558cb2a71cda0e50b3bf)() const = &::statiskit::pgm::MixtureUndirectedGraphProcess::Computation::copy;
    boost::python::class_< autowig::Wrap_a3925a06e68b5ccaafdf75a27504e7ff, autowig::Held< autowig::Wrap_a3925a06e68b5ccaafdf75a27504e7ff >::Type, boost::noncopyable > class_a3925a06e68b5ccaafdf75a27504e7ff("Computation", "", boost::python::no_init);
    class_a3925a06e68b5ccaafdf75a27504e7ff.def("ldf", boost::python::pure_virtual(method_pointer_682ee10228005fada802b12005a4ed67), "");
    class_a3925a06e68b5ccaafdf75a27504e7ff.def("posterior", boost::python::pure_virtual(method_pointer_2fcff5a819f55219a105d3e000ccf802), "");
    class_a3925a06e68b5ccaafdf75a27504e7ff.def("assignment", boost::python::pure_virtual(method_pointer_724727d729b15c1e801374f4369b2265), "");
    class_a3925a06e68b5ccaafdf75a27504e7ff.def("copy", boost::python::pure_virtual(method_pointer_5f2f64ba9868558cb2a71cda0e50b3bf), "");
    if(autowig::Held< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_a3925a06e68b5ccaafdf75a27504e7ff >::Type, autowig::Held< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::pgm::MixtureUndirectedGraphProcess::Computation >::Type >();
    }    

}