#include "_pgm.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::pgm::UndirectedForest const volatile * get_pointer<struct ::statiskit::pgm::UndirectedForest const volatile >(struct ::statiskit::pgm::UndirectedForest const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_189748b3972b518492650003ae3ef038()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_371d94ac4c135d82a973fb39a0a6d037 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".pgm");
    boost::python::object module_371d94ac4c135d82a973fb39a0a6d037(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_371d94ac4c135d82a973fb39a0a6d037.c_str()))));
    boost::python::scope().attr("pgm") = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::scope scope_371d94ac4c135d82a973fb39a0a6d037 = module_371d94ac4c135d82a973fb39a0a6d037;
    boost::python::class_< struct ::statiskit::pgm::UndirectedForest, autowig::Held< struct ::statiskit::pgm::UndirectedForest >::Type, boost::python::bases< class ::statiskit::pgm::UndirectedGraph > > class_189748b3972b518492650003ae3ef038("UndirectedForest", "", boost::python::no_init);
    class_189748b3972b518492650003ae3ef038.def(boost::python::init< ::statiskit::Index const & >(""));
    class_189748b3972b518492650003ae3ef038.def(boost::python::init< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & >(""));
    class_189748b3972b518492650003ae3ef038.def(boost::python::init< struct ::statiskit::pgm::UndirectedForest const & >(""));

    if(autowig::Held< struct ::statiskit::pgm::UndirectedForest >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::pgm::UndirectedForest >::Type, autowig::Held< class ::statiskit::pgm::UndirectedGraph >::Type >();
    }

}