#ifndef AUTOWIG__PGM
#define AUTOWIG__PGM

#include <boost/python.hpp>
#include <type_traits>
#include <statiskit/pgm/base.h>
#include <statiskit/pgm/graph.h>
#include <memory>

namespace autowig
{
     template<class T> struct Held {
        typedef std::shared_ptr< T > Type;
        static bool const is_class = true;
    };
}

/*namespace autowig
{
    class Wrap_ba1d12947e8b51849790a5ffe68a94d2 : public ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, public boost::python::wrapper< class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >
    {
        public:
            

        protected:
            
            virtual bool  valid_edge_property(::statiskit::Index const & param_0, ::statiskit::Index const & param_1) const
            { return this->get_override("valid_edge_property")(param_0, param_1); }

        private:
            

    };

    class Wrap_eb75867a4c1d5be4aca09cab824ff383 : public ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, public boost::python::wrapper< class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >
    {
        public:
            

        protected:
            
            virtual bool  valid_vertex_property(::statiskit::Index const & param_0) const
            { return this->get_override("valid_vertex_property")(param_0); }

        private:
            

    };
}*/
#endif