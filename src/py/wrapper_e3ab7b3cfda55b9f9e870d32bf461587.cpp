#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile * get_pointer<class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile >(class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e3ab7b3cfda55b9f9e870d32bf461587()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, autowig::Held< class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type, boost::python::bases< class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, class ::statiskit::UndirectedForest > > class_e3ab7b3cfda55b9f9e870d32bf461587("_PropertyGraph_e3ab7b3cfda55b9f9e870d32bf461587", "", boost::python::no_init);
    class_e3ab7b3cfda55b9f9e870d32bf461587.def(boost::python::init< ::statiskit::Index const & >(""));
    class_e3ab7b3cfda55b9f9e870d32bf461587.def(boost::python::init< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_e3ab7b3cfda55b9f9e870d32bf461587.def(boost::python::init< class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > const & >(""));

    if(autowig::Held< class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type, autowig::Held< class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type, autowig::Held< class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type, autowig::Held< class ::statiskit::UndirectedForest >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >::Type, class ::statiskit::PropertyGraph< class ::statiskit::UndirectedForest, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > >, class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > > > >();
    }

}