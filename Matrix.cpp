#include "Matrix.h"
#include <stdlib.h>
using namespace std;

//
// Default Constructor that generates random numbers to fill the Matrix.
//
Matrix::Matrix(){

  for(int i = 0; i<3; i++){
    for(int k = 0; k<3; k++){
      ma[i][k] = rand()%99 +1;
    }
  }
}

//
// toString method, returns a string in the form requested.
//
string Matrix::toString(){
  string result;
  for(int i = 0; i<3; i++){
    result.append(to_string(ma[i][0]) + " ");
    result.append(to_string(ma[i][1]) + " ");
    result.append(to_string(ma[i][2]) + "\n");

  }
  return result;
}

//
// Operator overloading, does matrix multiplacation by itterating through the 2D arrays and multiplying them.
//
Matrix Matrix::operator*(Matrix ma2){
  Matrix result = Matrix();
  int sum = 0;

  for(int i = 0; i< 3; i++){
    for(int j = 0; j<3; j++){
      for(int k = 0; k<3; k++){

          sum = (sum + (ma[j][k]*ma2.ma[k][i]));

      }
      result.ma[j][i] = sum;
      sum = 0;
    }

  }

  return result;
}

//
// Operator Overloading, checks each section of two arrays and returns false as soon as there is an issue
// and then returns true if there is no differences found.
//
bool Matrix::operator==(Matrix ma2){
  for(int i = 0; i<3;i++){
    for(int k = 0; k<3; k++){
      if(ma[0][0] != ma2.ma[0][0])
        return false;
    }
  }
  return true;
}
