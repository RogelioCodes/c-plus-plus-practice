#include<iostream>
using namespace std ; 

int main()
{
  int x = 42 ; 
  cout << "x is: " << x << endl ; 
  cout << "x's address is: " << &x << endl ; 

  cin >> x ; 

  cout << "x is: " << x << endl ;
  cout << "x's address is: " << &x << endl ;

  return 0 ; 
}
