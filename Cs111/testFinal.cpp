// Example program
#include <iostream>
#include <string>
using namespace std ; 

int main()
{
  string fullName, address, major ; 
  char gender ; 
 
  cout << "Enter your full name: " ;
  getline(cin, fullName) ; 
 
  cout << "=>" << fullName << "<=" << endl ; 
 
  cout << "Enter your gender (m or f): " ; 
  cin >> gender ;
  cout << "=>" << gender << "<=" << endl ; 
 
  cout << "Enter your address: " ; 
  getline(cin, address);
  cout << "=>" << address << "<=" << endl ; 
 
  cout << "Enter your major: " ; 
  getline(cin, major) ;
  cout << "=>" << major << "<=" << endl ; 
 
  return 0 ; 
}
