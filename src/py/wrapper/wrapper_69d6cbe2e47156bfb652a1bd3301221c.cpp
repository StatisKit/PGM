#include "_pgm.h"



namespace autowig
{
    class Wrap_69d6cbe2e47156bfb652a1bd3301221c : public ::statiskit::pgm::UndirectedGraphProcess, public boost::python::wrapper< struct ::statiskit::pgm::UndirectedGraphProcess >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess > > (result);
            }
                        
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
    template <> autowig::Wrap_69d6cbe2e47156bfb652a1bd3301221c const volatile * get_pointer<autowig::Wrap_69d6cbe2e47156bfb652a1bd3301221c const volatile >(autowig::Wrap_69d6cbe2e47156bfb652a1bd3301221c const volatile *c) { return c; }
    template <> struct ::statiskit::pgm::UndirectedGraphProcess const volatile * get_pointer<struct ::statiskit::pgm::UndirectedGraphProcess const volatile >(struct ::statiskit::pgm::UndirectedGraphProcess const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_69d6cbe2e47156bfb652a1bd3301221c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    double  (::statiskit::pgm::UndirectedGraphProcess::*method_pointer_3f9511dc89915bc9bf824e39dddc9523)(class ::statiskit::pgm::UndirectedGraph const *) const = &::statiskit::pgm::UndirectedGraphProcess::ldf;
    double  (::statiskit::pgm::UndirectedGraphProcess::*method_pointer_854479c20c7051f4919fd2cc7c794145)(class ::statiskit::pgm::UndirectedGraph const *) const = &::statiskit::pgm::UndirectedGraphProcess::pdf;
    class ::std::unique_ptr< class ::statiskit::pgm::UndirectedGraph, struct ::std::default_delete< class ::statiskit::pgm::UndirectedGraph > >  (::statiskit::pgm::UndirectedGraphProcess::*method_pointer_397fba6314f45bcc937074d4ac95d8a7)() const = &::statiskit::pgm::UndirectedGraphProcess::simulate;
    class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess::RandomWalk > >  (::statiskit::pgm::UndirectedGraphProcess::*method_pointer_3078fd5842da57208307a14ef2b9d634)(enum ::statiskit::pgm::UndirectedGraphProcess::walk_type const &) const = &::statiskit::pgm::UndirectedGraphProcess::random_walk;
    class ::std::unique_ptr< struct ::statiskit::pgm::UndirectedGraphProcess, struct ::std::default_delete< struct ::statiskit::pgm::UndirectedGraphProcess > >  (::statiskit::pgm::UndirectedGraphProcess::*method_pointer_a265bf73ffdf50968ae2e503a57b743b)() const = &::statiskit::pgm::UndirectedGraphProcess::copy;
    boost::python::class_< autowig::Wrap_69d6cbe2e47156bfb652a1bd3301221c, autowig::Held< autowig::Wrap_69d6cbe2e47156bfb652a1bd3301221c >::Type, boost::noncopyable > class_69d6cbe2e47156bfb652a1bd3301221c("UndirectedGraphProcess", "", boost::python::no_init);
    class_69d6cbe2e47156bfb652a1bd3301221c.def("ldf", boost::python::pure_virtual(method_pointer_3f9511dc89915bc9bf824e39dddc9523), "");
    class_69d6cbe2e47156bfb652a1bd3301221c.def("pdf", method_pointer_854479c20c7051f4919fd2cc7c794145, "");
    class_69d6cbe2e47156bfb652a1bd3301221c.def("simulate", boost::python::pure_virtual(method_pointer_397fba6314f45bcc937074d4ac95d8a7), "");
    class_69d6cbe2e47156bfb652a1bd3301221c.def("random_walk", method_pointer_3078fd5842da57208307a14ef2b9d634, "");
    class_69d6cbe2e47156bfb652a1bd3301221c.def("copy", boost::python::pure_virtual(method_pointer_a265bf73ffdf50968ae2e503a57b743b), "");
    if(autowig::Held< struct ::statiskit::pgm::UndirectedGraphProcess >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_69d6cbe2e47156bfb652a1bd3301221c >::Type, autowig::Held< struct ::statiskit::pgm::UndirectedGraphProcess >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::pgm::UndirectedGraphProcess >::Type >();
    }    

}