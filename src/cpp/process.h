#ifndef STATISKIT_PGM_PROCESS_H
#define STATISKIT_PGM_PROCESS_H

#include <boost/random/uniform_01.hpp>
#include <statiskit/core/distribution.h>
#include <statiskit/core/estimation.h>
#include "graph.h"

namespace statiskit
{
    namespace pgm
    {
        struct STATISKIT_PGM_API UndirectedGraphProcess
        {
            public:
                enum walk_type {
                    FREE,
                    CHORDAL,
                    CONNECTED
                };

                struct STATISKIT_PGM_API RandomWalk
                {
                    virtual ~RandomWalk() = 0;

                    virtual void operator() () = 0;
                    void operator() (const unsigned int& length);

                    virtual const UndirectedGraph* get_graph() const = 0;
                    virtual void set_graph(const UndirectedGraph& graph) = 0;

                    virtual std::unique_ptr< RandomWalk > copy() const = 0;
                };

                virtual ~UndirectedGraphProcess() = 0;

                virtual double ldf(const UndirectedGraph* graph) const = 0;
                virtual double pdf(const UndirectedGraph* graph) const;

                virtual std::unique_ptr< UndirectedGraph > simulate() const = 0;

                virtual std::unique_ptr< RandomWalk > random_walk(const walk_type& walk) const;

                virtual std::unique_ptr< UndirectedGraphProcess > copy() const = 0;

            protected:
                class STATISKIT_PGM_API FreeRandomWalk : public RandomWalk
                {
                    public:
                        class STATISKIT_PGM_API ChordalRandomWalk : public PolymorphicCopy< RandomWalk, ChordalRandomWalk >
                        {
                            public:
                                ChordalRandomWalk(const FreeRandomWalk& walk);
                                ChordalRandomWalk(const ChordalRandomWalk& walk);
                                virtual ~ChordalRandomWalk();

                                virtual void operator() ();

                                virtual const UndirectedGraph* get_graph() const;
                                virtual void set_graph(const UndirectedGraph& graph);

                                bool get_unique() const;
                                void set_unique(const bool& unique);

                                unsigned int get_maxits() const;
                                void set_maxits(const unsigned int& maxits);

                            protected:
                                FreeRandomWalk* _walk;
                                bool _unique;
                                unsigned int _maxits;
                        };

                        class STATISKIT_PGM_API ConnectedRandomWalk : public PolymorphicCopy< RandomWalk, ConnectedRandomWalk >
                        {
                            public:
                                ConnectedRandomWalk(const FreeRandomWalk& walk);
                                ConnectedRandomWalk(const ConnectedRandomWalk& walk);
                                virtual ~ConnectedRandomWalk();

                                virtual void operator() ();

                                virtual const UndirectedGraph* get_graph() const;
                                virtual void set_graph(const UndirectedGraph& graph);

                                bool get_unique() const;
                                void set_unique(const bool& unique);

                                unsigned int get_maxits() const;
                                void set_maxits(const unsigned int& maxits);

                            protected:
                                FreeRandomWalk* _walk;
                                bool _unique;
                                unsigned int _maxits;
                        };

                        FreeRandomWalk();
                        virtual ~FreeRandomWalk();

                        virtual const UndirectedGraph* get_graph() const;
                        virtual void set_graph(const UndirectedGraph& graph);

                    protected:
                        UndirectedGraph* _graph;
                };

                virtual std::unique_ptr< FreeRandomWalk > free_random_walk() const = 0;
        };

        class STATISKIT_PGM_API ErdosRenyiUndirectedGraphProcess : public PolymorphicCopy< UndirectedGraphProcess, ErdosRenyiUndirectedGraphProcess >
        {
            public:
                ErdosRenyiUndirectedGraphProcess(const Index& nb_vertices, const double& pi=0.5);
                ErdosRenyiUndirectedGraphProcess(const ErdosRenyiUndirectedGraphProcess& distribution);
                virtual ~ErdosRenyiUndirectedGraphProcess();

                virtual double ldf(const UndirectedGraph* graph) const;

                virtual std::unique_ptr< UndirectedGraph > simulate() const;

                Index get_nb_vertices() const;
                void set_nb_vertices(const Index& nb_vertices);

                double get_pi() const;
                void set_pi(const double& pi);

            protected:
                class STATISKIT_PGM_API FreeRandomWalk : public PolymorphicCopy< RandomWalk, FreeRandomWalk, UndirectedGraphProcess::FreeRandomWalk >
                {
                    public:
                        FreeRandomWalk(const ErdosRenyiUndirectedGraphProcess* process);
                        FreeRandomWalk(const FreeRandomWalk& walk);
                        virtual ~FreeRandomWalk();

                        virtual void operator() ();

                    protected:
                        const ErdosRenyiUndirectedGraphProcess* _process;
                };

                Index _nb_vertices;
                double _pi;

                std::unique_ptr< UndirectedGraphProcess::FreeRandomWalk > free_random_walk() const;
        };

        class STATISKIT_PGM_API MixtureUndirectedGraphProcess : public PolymorphicCopy< UndirectedGraphProcess, MixtureUndirectedGraphProcess >
        {
            public:
                struct STATISKIT_PGM_API Computation
                {
                    virtual double ldf(const MixtureUndirectedGraphProcess& mixture, const UndirectedGraph* graph) const = 0;

                    virtual std::vector< Eigen::VectorXd > posterior(const MixtureUndirectedGraphProcess& mixture, const UndirectedGraph* graph, const bool& logarithm=false) const = 0;

                    virtual std::vector< Index > assignment(const MixtureUndirectedGraphProcess& mixture, const UndirectedGraph* graph) const = 0;

                    virtual std::unique_ptr< Computation > copy() const = 0;
                };

                class STATISKIT_PGM_API VariationalComputation : public PolymorphicCopy< Computation, VariationalComputation >, public Optimization< statiskit::Estimator >
                {
                    public:
                        VariationalComputation();
                        VariationalComputation(const VariationalComputation& computation);
                        virtual ~VariationalComputation();
                        
                        #if defined STATISKIT_PGM_HAS_OPENMP
                        unsigned int get_nb_jobs() const;
                        void set_nb_jobs(const unsigned int& nb_jobs);
                        #endif

                        virtual double ldf(const MixtureUndirectedGraphProcess& mixture, const UndirectedGraph* graph) const;

                        virtual std::vector< Eigen::VectorXd > posterior(const MixtureUndirectedGraphProcess& mixture, const UndirectedGraph* graph, const bool& logarithm=false) const;

                        virtual std::vector< Index > assignment(const MixtureUndirectedGraphProcess& mixture, const UndirectedGraph* graph) const;

                    protected:
                        #if defined STATISKIT_PGM_HAS_OPENMP
                        unsigned int _nb_jobs;
                        #endif

                        inline double ldf(const std::vector< Eigen::VectorXd >& tau) const;
                };

                MixtureUndirectedGraphProcess(const Index& nb_vertices, const Index& nb_states);
                MixtureUndirectedGraphProcess(const MixtureUndirectedGraphProcess& distribution);
                virtual ~MixtureUndirectedGraphProcess();

                virtual double ldf(const UndirectedGraph* graph) const;

                virtual std::unique_ptr< UndirectedGraph > simulate() const;

                Index get_nb_states() const;

                const Computation* get_computation() const;
                void set_computation(const Computation* computation);

                Index get_nb_vertices() const;
                void set_nb_vertices(const Index& nb_vertices);

                const Eigen::VectorXd& get_alpha() const;
                void set_alpha(const Eigen::VectorXd& alpha);

                const Eigen::MatrixXd& get_pi() const;
                void set_pi(const Eigen::MatrixXd& pi);

                std::vector< Eigen::VectorXd > posterior(const UndirectedGraph* graph, const bool& logarithm=false) const;

                std::vector< Index > assignment(const UndirectedGraph* graph) const;

                // double uncertainty(const UndirectedGraph* graph, const Index& u) const;
                // double uncertainty(const UndirectedGraph* graph) const;

            protected:
                class STATISKIT_PGM_API FreeRandomWalk : public PolymorphicCopy< RandomWalk, FreeRandomWalk, UndirectedGraphProcess::FreeRandomWalk >
                {
                    public:
                        FreeRandomWalk(const MixtureUndirectedGraphProcess* process);
                        FreeRandomWalk(const FreeRandomWalk& walk);
                        virtual ~FreeRandomWalk();

                        virtual void operator() ();

                        const std::vector< Index >& get_labels() const;

                    protected:
                        const MixtureUndirectedGraphProcess* _process;
                        std::vector< Index > _labels;
                };

                Computation* _computation;
                Index _nb_vertices;
                Eigen::VectorXd _alpha;
                Eigen::MatrixXd _pi;

                std::unique_ptr< UndirectedGraphProcess::FreeRandomWalk > free_random_walk() const;
        };
    }
}

#endif