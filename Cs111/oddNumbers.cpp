#include<iostream>
#include<iomanip>
using namespace std ; 

int main() 
{
  int number ; 
  int Double ; 
  int triple ; 

  cout << setw(10) << "Number" << setw(10) << "Double" << setw(10) << "Triple" << endl ; 
  for( int n = 99; n >=1 ; n-=2 ) 
    { 
      cout << setw(10) << n << setw(10) << n*2 << setw(10) << n*3 << endl ; 
    }
       return 0 ; 

}
