#include<iostream> 
using namespace std ; 

#include "myMath.h"

int main() 
{
  cout <<"test: " <<  pow(2,3) << endl ; 
  
  int a = pow(5 , 2 ); 
  cout << a << endl ; 

  int base ; 
  int exponent ; 
  cout << "Enter base: " ; 
  cin >> base ; 
  cout << "Enter exponent: " ; 
  cin >> exponent ;
  cout << pow(base, exponent) << endl ;    
return 0 ;
}
