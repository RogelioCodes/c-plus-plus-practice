#include<iostream>
using namespace std ; 
#include "myMath.h"

int main()
{
  cout << pow(2,3) << endl ; 
 
  int ans = pow(5,2);
  cout << ans << endl ; 

  int base, power ; 
  cout << "Enter base: " ; 
  cin >> base ; 
  cout << "Enter power: " ; 
  cin >> power ; 

  cout << pow(base, power) << endl ; 
  return 0 ; 
}


 
