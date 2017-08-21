#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator const volatile * get_pointer<class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator const volatile >(class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_771d5a77f128532499d939770a51bf11()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    std::string name_58cfa053cab856b8b0d239dbaebbc87a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._undirected_gaussian_distribution_iml_estimation");
    boost::python::object module_58cfa053cab856b8b0d239dbaebbc87a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_58cfa053cab856b8b0d239dbaebbc87a.c_str()))));
    boost::python::scope().attr("_undirected_gaussian_distribution_iml_estimation") = module_58cfa053cab856b8b0d239dbaebbc87a;
    boost::python::scope scope_58cfa053cab856b8b0d239dbaebbc87a = module_58cfa053cab856b8b0d239dbaebbc87a;
    enum ::statiskit::linalg::solver_type  (::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator::*method_pointer_f69e52fd35b056d390122e56058f8621)() const = &::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator::get_solver;
    void  (::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator::*method_pointer_bfd8778c19095afc8bca4a5a66735271)(enum ::statiskit::linalg::solver_type const &) = &::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator::set_solver;
    double  (::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator::*method_pointer_962da51d964b5cdcacb981aaf0743c3c)() const = &::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator::get_alpha;
    void  (::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator::*method_pointer_110e76db70045da580dabf35fb26868c)(double const &) = &::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator::set_alpha;
    double  (::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator::*method_pointer_730f14fac9e952e1b359075b3d86c406)() const = &::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator::get_beta;
    void  (::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator::*method_pointer_a7f956bf84c55fa185a99347d0b36fe2)(double const &) = &::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator::set_beta;
    boost::python::class_< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator, autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator >::Type, boost::python::bases< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator > > class_771d5a77f128532499d939770a51bf11("NREstimator", "", boost::python::no_init);
    class_771d5a77f128532499d939770a51bf11.def(boost::python::init<  >(""));
    class_771d5a77f128532499d939770a51bf11.def(boost::python::init< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator const & >(""));
    class_771d5a77f128532499d939770a51bf11.def("get_solver", method_pointer_f69e52fd35b056d390122e56058f8621, "");
    class_771d5a77f128532499d939770a51bf11.def("set_solver", method_pointer_bfd8778c19095afc8bca4a5a66735271, "");
    class_771d5a77f128532499d939770a51bf11.def("get_alpha", method_pointer_962da51d964b5cdcacb981aaf0743c3c, "");
    class_771d5a77f128532499d939770a51bf11.def("set_alpha", method_pointer_110e76db70045da580dabf35fb26868c, "");
    class_771d5a77f128532499d939770a51bf11.def("get_beta", method_pointer_730f14fac9e952e1b359075b3d86c406, "");
    class_771d5a77f128532499d939770a51bf11.def("set_beta", method_pointer_a7f956bf84c55fa185a99347d0b36fe2, "");

    if(autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::NREstimator >::Type, autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator >::Type >();
    }

}