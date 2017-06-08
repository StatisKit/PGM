#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator const volatile * get_pointer<class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator const volatile >(class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dc0ca5adebf159fdb8131fd1e3715a8c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    std::string name_195f6697feba5629b32edc45dea47f01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._graphical_gaussian_distribution_iml_estimation");
    boost::python::object module_195f6697feba5629b32edc45dea47f01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_195f6697feba5629b32edc45dea47f01.c_str()))));
    boost::python::scope().attr("_graphical_gaussian_distribution_iml_estimation") = module_195f6697feba5629b32edc45dea47f01;
    boost::python::scope scope_195f6697feba5629b32edc45dea47f01 = module_195f6697feba5629b32edc45dea47f01;
    enum ::statiskit::linalg::solver_type  (::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator::*method_pointer_e667d44434c853ea9d9767549a7e6987)() const = &::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator::get_solver;
    void  (::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator::*method_pointer_a83fa9fd120b5a6aacc3395727c9f984)(enum ::statiskit::linalg::solver_type const &) = &::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator::set_solver;
    double  (::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator::*method_pointer_e9da8c8ab1b65837b7da802b9fd582cb)() const = &::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator::get_alpha;
    void  (::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator::*method_pointer_587147d5ec22589a9742e271b369d5e7)(double const &) = &::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator::set_alpha;
    double  (::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator::*method_pointer_4686fd5a3abf53d3915dd95d37c76b29)() const = &::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator::get_beta;
    void  (::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator::*method_pointer_e561f1ff1980517bb4411695e5d8c590)(double const &) = &::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator::set_beta;
    boost::python::class_< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator, autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator >::Type, boost::python::bases< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::CDEstimator > > class_dc0ca5adebf159fdb8131fd1e3715a8c("NREstimator", "", boost::python::no_init);
    class_dc0ca5adebf159fdb8131fd1e3715a8c.def(boost::python::init<  >(""));
    class_dc0ca5adebf159fdb8131fd1e3715a8c.def(boost::python::init< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator const & >(""));
    class_dc0ca5adebf159fdb8131fd1e3715a8c.def("get_solver", method_pointer_e667d44434c853ea9d9767549a7e6987, "");
    class_dc0ca5adebf159fdb8131fd1e3715a8c.def("set_solver", method_pointer_a83fa9fd120b5a6aacc3395727c9f984, "");
    class_dc0ca5adebf159fdb8131fd1e3715a8c.def("get_alpha", method_pointer_e9da8c8ab1b65837b7da802b9fd582cb, "");
    class_dc0ca5adebf159fdb8131fd1e3715a8c.def("set_alpha", method_pointer_587147d5ec22589a9742e271b369d5e7, "");
    class_dc0ca5adebf159fdb8131fd1e3715a8c.def("get_beta", method_pointer_4686fd5a3abf53d3915dd95d37c76b29, "");
    class_dc0ca5adebf159fdb8131fd1e3715a8c.def("set_beta", method_pointer_e561f1ff1980517bb4411695e5d8c590, "");

    if(autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::NREstimator >::Type, autowig::Held< class ::statiskit::pgm::GraphicalGaussianDistributionIMLEstimation::CDEstimator >::Type >();
    }

}