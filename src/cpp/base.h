#ifndef STATISKIT_PGM_BASE_H
#define STATISKIT_PGM_BASE_H

#include <statiskit/core/base.h>
// #include <vector>

#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
    #ifdef LIBSTATISKIT_PGM
        #ifdef __GNUC__
            #define STATISKIT_PGM_API __attribute__ ((dllexport))
        #else
            #define STATISKIT_PGM_API __declspec(dllexport)
        #endif
    #else
        #ifdef __GNUC__
            #define STATISKIT_PGM_API __attribute__ ((dllimport))
        #else
            #define STATISKIT_PGM_API __declspec(dllimport)
        #endif
      #endif
#else
    #if __GNUC__ >= 4
        #define STATISKIT_PGM_API __attribute__ ((visibility ("default")))
    #else
        #define STATISKIT_PGM_API
    #endif
#endif

#if (defined _OPENMP) && (!defined STATISKIT_PGM_DONT_PARALLELIZE)
    #define STATISKIT_PGM_HAS_OPENMP
    #include <omp.h>
#endif

namespace statiskit
{
    namespace pgm
    {
        STATISKIT_PGM_API std::vector< Index > rank_to_ordering(const std::vector< Index >& rank);
        STATISKIT_PGM_API std::vector< Index > ordering_to_rank(const std::vector< Index >& ordering);

        template<class T, class U> Eigen::MatrixXd submatrix(const Eigen::MatrixXd& X, const T& rows, const U& cols);

        template<class T, class U> void submatrix(Eigen::MatrixXd& X, const T& rows, const U& cols, const Eigen::MatrixXd& Y);

        // STATISKIT_PGM_API Indices set_intersection(const Indices& l, const Indices& r);

    }
}

#include "base.hpp"
#endif