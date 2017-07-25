#include "_pgm.h"



namespace autowig
{
    class Wrap_6fee7d5564885e61ba1ab1226b2db115 : public ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, public boost::python::wrapper< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk > > (result);
            }
                        
            virtual void  set_graph(class ::statiskit::pgm::UndirectedGraph const & param_0) 
            { this->get_override("set_graph")(param_0); }
                        
            virtual class ::statiskit::pgm::UndirectedGraph const * get_graph() const
            { return this->get_override("get_graph")(); }
                        
            virtual void  operator()() 
            { this->get_override("operator()")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_6fee7d5564885e61ba1ab1226b2db115 const volatile * get_pointer<autowig::Wrap_6fee7d5564885e61ba1ab1226b2db115 const volatile >(autowig::Wrap_6fee7d5564885e61ba1ab1226b2db115 const volatile *c) { return c; }
    template <> struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk const volatile * get_pointer<struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk const volatile >(struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6fee7d5564885e61ba1ab1226b2db115()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    std::string name_69d6cbe2e47156bfb652a1bd3301221c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._undirected_graph_process");
    boost::python::object module_69d6cbe2e47156bfb652a1bd3301221c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_69d6cbe2e47156bfb652a1bd3301221c.c_str()))));
    boost::python::scope().attr("_undirected_graph_process") = module_69d6cbe2e47156bfb652a1bd3301221c;
    boost::python::scope scope_69d6cbe2e47156bfb652a1bd3301221c = module_69d6cbe2e47156bfb652a1bd3301221c;
    void  (::statiskit::pgm::UndirectedGraphProcess::RandomWalk::*method_pointer_ec2ee40328a457abb72221e8c5ebff56)() = &::statiskit::pgm::UndirectedGraphProcess::RandomWalk::operator();
    void  (::statiskit::pgm::UndirectedGraphProcess::RandomWalk::*method_pointer_a08bf4e1f83254bb9b0c870a067636d2)(unsigned int const &) = &::statiskit::pgm::UndirectedGraphProcess::RandomWalk::operator();
    class ::statiskit::pgm::UndirectedGraph const * (::statiskit::pgm::UndirectedGraphProcess::RandomWalk::*method_pointer_be1e7ea2fc1d501c83882cb657e0647d)() const = &::statiskit::pgm::UndirectedGraphProcess::RandomWalk::get_graph;
    void  (::statiskit::pgm::UndirectedGraphProcess::RandomWalk::*method_pointer_31eb11f29aeb5fbaa3578cbb14103596)(class ::statiskit::pgm::UndirectedGraph const &) = &::statiskit::pgm::UndirectedGraphProcess::RandomWalk::set_graph;
    class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk > >  (::statiskit::pgm::UndirectedGraphProcess::RandomWalk::*method_pointer_45fd7ecb931f5de88fec5f8362f32edd)() const = &::statiskit::pgm::UndirectedGraphProcess::RandomWalk::copy;
    boost::python::class_< autowig::Wrap_6fee7d5564885e61ba1ab1226b2db115, autowig::Held< autowig::Wrap_6fee7d5564885e61ba1ab1226b2db115 >::Type, boost::noncopyable > class_6fee7d5564885e61ba1ab1226b2db115("RandomWalk", "", boost::python::no_init);
    class_6fee7d5564885e61ba1ab1226b2db115.def("__call__", boost::python::pure_virtual(method_pointer_ec2ee40328a457abb72221e8c5ebff56), "");
    class_6fee7d5564885e61ba1ab1226b2db115.def("__call__", method_pointer_a08bf4e1f83254bb9b0c870a067636d2, "");
    class_6fee7d5564885e61ba1ab1226b2db115.def("get_graph", boost::python::pure_virtual(method_pointer_be1e7ea2fc1d501c83882cb657e0647d), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6fee7d5564885e61ba1ab1226b2db115.def("set_graph", boost::python::pure_virtual(method_pointer_31eb11f29aeb5fbaa3578cbb14103596), "");
    class_6fee7d5564885e61ba1ab1226b2db115.def("copy", boost::python::pure_virtual(method_pointer_45fd7ecb931f5de88fec5f8362f32edd), "");
    if(autowig::Held< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_6fee7d5564885e61ba1ab1226b2db115 >::Type, autowig::Held< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk >::Type >();
    }    

}