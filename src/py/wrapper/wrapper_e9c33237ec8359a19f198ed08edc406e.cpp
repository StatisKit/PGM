#include "_pgm.h"



namespace autowig
{
    class Wrap_e9c33237ec8359a19f198ed08edc406e : public ::statiskit::UndirectedGraphDistribution, public boost::python::wrapper< struct ::statiskit::UndirectedGraphDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UndirectedGraphDistribution, struct ::std::default_delete< struct ::statiskit::UndirectedGraphDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UndirectedGraphDistribution, struct ::std::default_delete< struct ::statiskit::UndirectedGraphDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UndirectedGraphDistribution, struct ::std::default_delete< struct ::statiskit::UndirectedGraphDistribution > > (result);
            }
                        
            virtual class ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > >  simulate() const
            {
                 ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > > (result);
            }
                        
            virtual double  ldf(class ::statiskit::UndirectedGraph const * param_0) const
            { return this->get_override("ldf")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_e9c33237ec8359a19f198ed08edc406e const volatile * get_pointer<autowig::Wrap_e9c33237ec8359a19f198ed08edc406e const volatile >(autowig::Wrap_e9c33237ec8359a19f198ed08edc406e const volatile *c) { return c; }
    template <> struct ::statiskit::UndirectedGraphDistribution const volatile * get_pointer<struct ::statiskit::UndirectedGraphDistribution const volatile >(struct ::statiskit::UndirectedGraphDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e9c33237ec8359a19f198ed08edc406e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::UndirectedGraphDistribution::*method_pointer_bc5cb6477c08503998d59c7b3bd378e5)(class ::statiskit::UndirectedGraph const *) const = &::statiskit::UndirectedGraphDistribution::ldf;
    double  (::statiskit::UndirectedGraphDistribution::*method_pointer_46a527edba755608b498fe4b7024df5e)(class ::statiskit::UndirectedGraph const *) const = &::statiskit::UndirectedGraphDistribution::pdf;
    class ::std::unique_ptr< class ::statiskit::UndirectedGraph, struct ::std::default_delete< class ::statiskit::UndirectedGraph > >  (::statiskit::UndirectedGraphDistribution::*method_pointer_c733f4a873d35a69ac9301794eccff1a)() const = &::statiskit::UndirectedGraphDistribution::simulate;
    class ::std::unique_ptr< struct ::statiskit::UndirectedGraphDistribution, struct ::std::default_delete< struct ::statiskit::UndirectedGraphDistribution > >  (::statiskit::UndirectedGraphDistribution::*method_pointer_6211f2ab16bd5201a9e712fa2383141f)() const = &::statiskit::UndirectedGraphDistribution::copy;
    boost::python::class_< autowig::Wrap_e9c33237ec8359a19f198ed08edc406e, autowig::Held< autowig::Wrap_e9c33237ec8359a19f198ed08edc406e >::Type, boost::noncopyable > class_e9c33237ec8359a19f198ed08edc406e("UndirectedGraphDistribution", "", boost::python::no_init);
    class_e9c33237ec8359a19f198ed08edc406e.def("ldf", boost::python::pure_virtual(method_pointer_bc5cb6477c08503998d59c7b3bd378e5), "");
    class_e9c33237ec8359a19f198ed08edc406e.def("pdf", method_pointer_46a527edba755608b498fe4b7024df5e, "");
    class_e9c33237ec8359a19f198ed08edc406e.def("simulate", boost::python::pure_virtual(method_pointer_c733f4a873d35a69ac9301794eccff1a), "");
    class_e9c33237ec8359a19f198ed08edc406e.def("copy", boost::python::pure_virtual(method_pointer_6211f2ab16bd5201a9e712fa2383141f), "");
    if(autowig::Held< struct ::statiskit::UndirectedGraphDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e9c33237ec8359a19f198ed08edc406e >::Type, autowig::Held< struct ::statiskit::UndirectedGraphDistribution >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::UndirectedGraphDistribution >::Type >();
    }    

}