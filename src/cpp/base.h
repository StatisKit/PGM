#ifndef STATISKIT_PGM_BASE_H
#define STATISKIT_PGM_BASE_H

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

#endif