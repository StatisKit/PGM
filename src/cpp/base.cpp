#include "base.h"

namespace statiskit
{
    namespace pgm
    {
        std::vector< Index > rank_to_ordering(const std::vector< Index >& rank)
        {
            std::vector< Index > ordering(rank.size());
            for(Index u = 0, v = ordering.size(); u < v; ++u)
            { ordering[rank[u]] = u;  }
            return ordering;
        }

        std::vector< Index > ordering_to_rank(const std::vector< Index >& ordering)
        { return rank_to_ordering(ordering); }

         // Indices set_intersection(const Indices& l, const Indices& r)
         // {
         //    Indices inter = Indices();
         //    Indices itl = l.begin(), itl_end = l.end(), itr = r.begin(), itr_end = r.end();
         //    while(itl != itl_end && itr != itr_end)
         //    {
         //        if(*itl < *itr)
         //        { ++itl; }
         //        else if(*itr < *itl)
         //        { ++itr; }
         //        else
         //        {
         //            inter.insert(inter.end(), *itr);
         //            ++itr;
         //            ++itl;
         //        }
         //    }
         //    return inter;
         // }
    }
}