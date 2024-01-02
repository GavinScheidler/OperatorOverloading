#include <iostream>
using namespace std;

#ifndef MATRIX_H_
#define MATRIX_H_

//
// Header file, forward declares the functions and constructor for the Matrix class.  
//
class Matrix{
public:
  int ma[3][3];

  Matrix();

  string toString();

  Matrix operator*(Matrix ma2);

  bool operator==(Matrix ma2);
};

#endif
