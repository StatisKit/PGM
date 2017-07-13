#include "_pgm.h"



namespace autowig
{
    class Wrap_2adb3c996533527c9ad5b76c754ab21d : public ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::UndirectedGraphProcess, ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess, struct ::statiskit::pgm::UndirectedGraphProcess >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::UndirectedGraphProcess, class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess, struct ::statiskit::pgm::UndirectedGraphProcess > >
    {
        public:
            
            virtual class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > >  simulate() const
            {
                 ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > > (result);
            }
                        
            virtual double  ldf(class ::statiskit::pgm::UndirectedGraph const * param_0) const
            { return this->get_override("ldf")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_2adb3c996533527c9ad5b76c754ab21d const volatile * get_pointer<autowig::Wrap_2adb3c996533527c9ad5b76c754ab21d const volatile >(autowig::Wrap_2adb3c996533527c9ad5b76c754ab21d const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::UndirectedGraphProcess, class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess, struct ::statiskit::pgm::UndirectedGraphProcess > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::UndirectedGraphProcess, class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess, struct ::statiskit::pgm::UndirectedGraphProcess > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::UndirectedGraphProcess, class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess, struct ::statiskit::pgm::UndirectedGraphProcess > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2adb3c996533527c9ad5b76c754ab21d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_2adb3c996533527c9ad5b76c754ab21d, autowig::Held< autowig::Wrap_2adb3c996533527c9ad5b76c754ab21d >::Type, boost::python::bases< struct ::statiskit::pgm::UndirectedGraphProcess >, boost::noncopyable > class_2adb3c996533527c9ad5b76c754ab21d("_PolymorphicCopy_2adb3c996533527c9ad5b76c754ab21d", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::UndirectedGraphProcess, class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess, struct ::statiskit::pgm::UndirectedGraphProcess > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_2adb3c996533527c9ad5b76c754ab21d >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::UndirectedGraphProcess, class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess, struct ::statiskit::pgm::UndirectedGraphProcess > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::UndirectedGraphProcess, class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess, struct ::statiskit::pgm::UndirectedGraphProcess > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::pgm::UndirectedGraphProcess, class ::statiskit::pgm::ErdosRenyiUndirectedGraphProcess, struct ::statiskit::pgm::UndirectedGraphProcess > >::Type, autowig::Held< struct ::statiskit::pgm::UndirectedGraphProcess >::Type >();
    }

}