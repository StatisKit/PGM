#ifndef STATISKIT_PGM_BASE_HPP
#define STATISKIT_PGM_BASE_HPP

namespace statiskit
{
    namespace pgm
    {
        template<class T, class U>
            Eigen::MatrixXd submatrix(const Eigen::MatrixXd& X, const T& rows, const U& cols)
            {
                Eigen::MatrixXd Y(rows.size(), cols.size());
                for(typename T::const_iterator itr = rows.begin(), itr_end = rows.end(); itr != itr_end; ++itr)
                {
                    for(typename U::const_iterator itc = cols.begin(), itc_end = cols.end(); itc != itc_end; ++itc)
                    { Y(distance(rows.begin(), itr), distance(cols.begin(), itc)) = X(*itr, *itc); }
                }
                return Y;
            }
           
        template<class T, class U> 
            void submatrix(Eigen::MatrixXd& X, const T& rows, const U& cols, const Eigen::MatrixXd& Y)
            {
                for(typename T::const_iterator itr = rows.begin(), itr_end = rows.end(); itr != itr_end; ++itr)
                {
                    for(typename U::const_iterator itc = cols.begin(), itc_end = cols.end(); itc != itc_end; ++itc)
                    { X(*itr, *itc) = Y(distance(rows.begin(), itr), distance(cols.begin(), itc)); }
                }
            }
    }
}

#endif