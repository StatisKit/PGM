#include "_pgm.h"



namespace autowig
{
    class Wrap_ba1d12947e8b51849790a5ffe68a94d2 : public ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, public boost::python::wrapper< class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >
    {
        public:
            

        protected:
            
            virtual bool  valid_edge_property(::statiskit::Index const & param_0, ::statiskit::Index const & param_1) const
            { return this->get_override("valid_edge_property")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_ba1d12947e8b51849790a5ffe68a94d2 const volatile * get_pointer<autowig::Wrap_ba1d12947e8b51849790a5ffe68a94d2 const volatile >(autowig::Wrap_ba1d12947e8b51849790a5ffe68a94d2 const volatile *c) { return c; }
    template <> class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile * get_pointer<class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile >(class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ba1d12947e8b51849790a5ffe68a94d2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const & (::statiskit::EdgePropertyGraph< ::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_cf5fcfa383e8568084d2348e43f93ab9)(::statiskit::Index const &, ::statiskit::Index const &) const = &::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >::get_edge_property;
    void  (::statiskit::EdgePropertyGraph< ::std::set< unsigned long int, ::std::less< unsigned long int >, ::std::allocator< unsigned long int > > >::*method_pointer_70b58065c1c554e1ab031eb9f0bccc8a)(::statiskit::Index const &, ::statiskit::Index const &, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const &) = &::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >::set_edge_property;
    boost::python::class_< autowig::Wrap_ba1d12947e8b51849790a5ffe68a94d2, autowig::Held< autowig::Wrap_ba1d12947e8b51849790a5ffe68a94d2 >::Type, boost::noncopyable > class_ba1d12947e8b51849790a5ffe68a94d2("_EdgePropertyGraph_ba1d12947e8b51849790a5ffe68a94d2", "", boost::python::no_init);
    class_ba1d12947e8b51849790a5ffe68a94d2.def("get_edge_property", method_pointer_cf5fcfa383e8568084d2348e43f93ab9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_ba1d12947e8b51849790a5ffe68a94d2.def("set_edge_property", method_pointer_70b58065c1c554e1ab031eb9f0bccc8a, "");
    if(autowig::Held< class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ba1d12947e8b51849790a5ffe68a94d2 >::Type, autowig::Held< class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type, class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ba1d12947e8b51849790a5ffe68a94d2 >::Type, autowig::Held< class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type >();
    }    

}