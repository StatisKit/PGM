#ifndef AUTOWIG__PGM
#define AUTOWIG__PGM

#include <boost/python.hpp>
#include <type_traits>
#include <statiskit/pgm/graph.h>
#include <statiskit/pgm/process.h>
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

#endif