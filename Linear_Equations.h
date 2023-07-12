//
// Created by Zhou on 11/07/2023.
//

#ifndef PROJECT_LINEAR_EQUATIONS_H
#define PROJECT_LINEAR_EQUATIONS_H

#include "Matrix.h"
#include "std_lib_facilities.h"
#include "MatrixIO.h"
#include "sstream"
using namespace Numeric_lib;
typedef Numeric_lib::Matrix<double,2> my_matrix;
typedef Numeric_lib::Matrix<double,1> my_vector;

my_vector classical_gaussian_elimination(my_matrix A, my_vector b);
void Do_Liner_Equations();

#endif //PROJECT_LINEAR_EQUATIONS_H
