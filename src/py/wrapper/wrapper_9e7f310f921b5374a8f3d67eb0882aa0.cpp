#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::GAEstimator const volatile * get_pointer<struct ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::GAEstimator const volatile >(struct ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::GAEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9e7f310f921b5374a8f3d67eb0882aa0()
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
    boost::python::class_< struct ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::GAEstimator, autowig::Held< struct ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::GAEstimator >::Type, boost::python::bases< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator > > class_9e7f310f921b5374a8f3d67eb0882aa0("GAEstimator", "", boost::python::no_init);
    class_9e7f310f921b5374a8f3d67eb0882aa0.def(boost::python::init<  >(""));
    class_9e7f310f921b5374a8f3d67eb0882aa0.def(boost::python::init< struct ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::GAEstimator const & >(""));

    if(autowig::Held< struct ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::GAEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::GAEstimator >::Type, autowig::Held< class ::statiskit::pgm::UndirectedGaussianDistributionIMLEstimation::Estimator >::Type >();
    }

}