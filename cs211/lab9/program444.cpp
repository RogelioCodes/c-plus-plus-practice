#include <iostream>
#include <string> 
#include<vector> 
using namespace std;

string *getFullName (string fullName[]);
int main ()
{
  //string *fullName = NULL ; 
  string fN   ; 
  string *fullName = &fN; 

  /*cout << "Enter first Name";
getline (cin, fullName[0]);
cout << "Enter first Name";
getline (cin, fullName[1]);
cout << "Enter first Name";
getline (cin, fullName[2]);
  */
  cout << *(getFullName(fullName)+1) << endl ;
  cout << "here " << endl ; 
  //swap(&num1, &num2);
  // cout << *getfullName ;  
  return 0 ; 
}
string *getFullName (string fullName[])
{

  //  cin.ignore(100, '\n');
  cout << "Enter first Name: ";
  getline (cin, fullName[0]);
  
  cout << "Enter first Name: ";
  getline (cin, fullName[1]);
  //  cin.ignore(10, '\n');
  cout << "Enter first Name: ";
  getline (cin, fullName[2]);
  return fullName;
}


