#include<iomanip>
#include <iostream>
#include <string>
#include<cmath>
#include <cstring>
using namespace std;

int main()
{
  string fullname = "John Smith. " ;
  string address = "3600 Twin Oaks, San Marcos, CS, 92068. " ;
  string telephone = "76045236845. " ;
  string major = "Computer Science. " ;
  int studentid ;
  studentid = 44652346 ;
  char first ;
  char last ;
  first = 'J' ;
  last = 'S' ;
  cout << "The name of student is  " << fullname << '\n' ;
  float average = (3.3*4 + 2.7*3 + 3.0*3)/(4+3+3) ;
  cout << "The address is " << address << '\n' ;
  cout << "The phone number of student is " << telephone << '\n' ;
  cout << "The major of student is " << major << '\n' ;
  cout << "The ID of student is " << studentid << '\n' ;
  cout << "The initial of student is " << first << last << '\n' ;
  cout << "The weighted average is " << average <<  '\n' ;
  return 0;
}
