#include "_pgm.h"



namespace autowig
{
    class Wrap_c3453b289f88575a987388299e08b905 : public ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
                        
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_c3453b289f88575a987388299e08b905 const volatile * get_pointer<autowig::Wrap_c3453b289f88575a987388299e08b905 const volatile >(autowig::Wrap_c3453b289f88575a987388299e08b905 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c3453b289f88575a987388299e08b905()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_c3453b289f88575a987388299e08b905, autowig::Held< autowig::Wrap_c3453b289f88575a987388299e08b905 >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateDistribution >, boost::noncopyable > class_c3453b289f88575a987388299e08b905("_PolymorphicCopy_c3453b289f88575a987388299e08b905", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_c3453b289f88575a987388299e08b905 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, class ::statiskit::pgm::ChordalGaussianDistribution, struct ::statiskit::ContinuousMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistribution >::Type >();
    }

}