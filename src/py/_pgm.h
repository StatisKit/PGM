#ifndef AUTOWIG__PGM
#define AUTOWIG__PGM

#include <boost/python.hpp>
#include <type_traits>
#include <statiskit/pgm/graph.h>
#include <statiskit/pgm/base.h>
#include <statiskit/pgm/distribution.h>
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
    class Wrap_1f859f9d3901599da851cd13463c8ad9 : public ::statiskit::MixtureUndirectedGraphDistribution::Computation, public boost::python::wrapper< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, struct ::std::default_delete< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > > (result);
            }
            virtual class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  assignment(class ::statiskit::MixtureUndirectedGraphDistribution const & param_0, class ::statiskit::UndirectedGraph const * param_1) const
            { return this->get_override("assignment")(param_0, param_1); }
            virtual class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >  posterior(class ::statiskit::MixtureUndirectedGraphDistribution const & param_0, class ::statiskit::UndirectedGraph const * param_1, bool const & param_2) const
            { return this->get_override("posterior")(param_0, param_1, param_2); }
            virtual double  ldf(class ::statiskit::MixtureUndirectedGraphDistribution const & param_0, class ::statiskit::UndirectedGraph const * param_1) const
            { return this->get_override("ldf")(param_0, param_1); }

        protected:
            

        private:
            

    };

    class Wrap_ba1d12947e8b51849790a5ffe68a94d2 : public ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, public boost::python::wrapper< class ::statiskit::EdgePropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >
    {
        public:
            

        protected:
            
            virtual bool  valid_edge_property(::statiskit::Index const & param_0, ::statiskit::Index const & param_1) const
            { return this->get_override("valid_edge_property")(param_0, param_1); }

        private:
            

    };

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

    class Wrap_eb75867a4c1d5be4aca09cab824ff383 : public ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > >, public boost::python::wrapper< class ::statiskit::VertexPropertyGraph< class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > > >
    {
        public:
            

        protected:
            
            virtual bool  valid_vertex_property(::statiskit::Index const & param_0) const
            { return this->get_override("valid_vertex_property")(param_0); }

        private:
            

    };

    class Wrap_4db0ff3e7f0a577296e63ea447c1b952 : public ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, ::statiskit::ErdosRenyiUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::ErdosRenyiUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > >
    {
        public:
            
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

    class Wrap_a171fcfcd46759fc9450f58d5118f67d : public ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UndirectedGraphDistribution, class ::statiskit::MixtureUndirectedGraphDistribution, struct ::statiskit::UndirectedGraphDistribution > >
    {
        public:
            
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

    class Wrap_acd10274bef3532e8944df64bfea0a51 : public ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MixtureUndirectedGraphDistribution::Computation, class ::statiskit::MixtureUndirectedGraphDistribution::VariationalComputation, struct ::statiskit::MixtureUndirectedGraphDistribution::Computation > >
    {
        public:
            
            virtual class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  assignment(class ::statiskit::MixtureUndirectedGraphDistribution const & param_0, class ::statiskit::UndirectedGraph const * param_1) const
            { return this->get_override("assignment")(param_0, param_1); }
            virtual class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >  posterior(class ::statiskit::MixtureUndirectedGraphDistribution const & param_0, class ::statiskit::UndirectedGraph const * param_1, bool const & param_2) const
            { return this->get_override("posterior")(param_0, param_1, param_2); }
            virtual double  ldf(class ::statiskit::MixtureUndirectedGraphDistribution const & param_0, class ::statiskit::UndirectedGraph const * param_1) const
            { return this->get_override("ldf")(param_0, param_1); }

        protected:
            

        private:
            

    };
}*/
#endif