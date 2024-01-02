#include <iostream>
#include "Matrix.h"
using namespace std;
//
//  Main Class, shows functionaility of the Matrix class.
//
int main(){
  Matrix A = Matrix();
  Matrix B = Matrix();
  cout<<"\nMatrix A: \n"<<A.toString()<<"\n"<<endl;
  cout<<"Matrix B: \n"<<B.toString()<<"\n"<<endl;
  cout<<"Multiplication (*) opperator:\n"<<(A*B).toString()<<"\n"<<endl;
  cout<<"Equal (==) opperator:\n"<<(A==B)<<"\n"<<endl;
  int pause;
  cin>> pause;
  return 0;
}
