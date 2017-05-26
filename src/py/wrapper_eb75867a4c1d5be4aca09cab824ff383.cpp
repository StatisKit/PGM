#include "_pgm.h"



namespace autowig
{
    class Wrap_eb75867a4c1d5be4aca09cab824ff383 : public ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, public boost::python::wrapper< class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >
    {
        public:
            

        protected:
            
            virtual bool  valid_vertex_property(::statiskit::Index const & param_0) const
            { return this->get_override("valid_vertex_property")(param_0); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_eb75867a4c1d5be4aca09cab824ff383 const volatile * get_pointer<autowig::Wrap_eb75867a4c1d5be4aca09cab824ff383 const volatile >(autowig::Wrap_eb75867a4c1d5be4aca09cab824ff383 const volatile *c) { return c; }
    template <> class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile * get_pointer<class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile >(class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_eb75867a4c1d5be4aca09cab824ff383()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const & (::statiskit::VertexPropertyGraph< ::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_1a18e6b497c757acae681bce1f5f302f)(::statiskit::Index const &) const = &::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >::get_vertex_property;
    void  (::statiskit::VertexPropertyGraph< ::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_77578d88be225afbbc78e67198382446)(::statiskit::Index const &, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const &) = &::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >::set_vertex_property;
    boost::python::class_< autowig::Wrap_eb75867a4c1d5be4aca09cab824ff383, autowig::Held< autowig::Wrap_eb75867a4c1d5be4aca09cab824ff383 >::Type, boost::noncopyable > class_eb75867a4c1d5be4aca09cab824ff383("_VertexPropertyGraph_eb75867a4c1d5be4aca09cab824ff383", "", boost::python::no_init);
    class_eb75867a4c1d5be4aca09cab824ff383.def("get_vertex_property", method_pointer_1a18e6b497c757acae681bce1f5f302f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_eb75867a4c1d5be4aca09cab824ff383.def("set_vertex_property", method_pointer_77578d88be225afbbc78e67198382446, "");
    if(autowig::Held< class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_eb75867a4c1d5be4aca09cab824ff383 >::Type, autowig::Held< class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type, class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_eb75867a4c1d5be4aca09cab824ff383 >::Type, autowig::Held< class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type >();
    }    

}