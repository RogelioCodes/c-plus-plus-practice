#include<string>
#ifndef PERSON_H 
#define PERSON_H 

using namespace std;  

class Person 
{
 private: 
  string firstName ;  
  string lastName ; 
  char gender ; 
  long ssn ; 
 public: 
  void setAPerson(string fName, string lName, char gen, long SSN) ; 

  void printAPerson() const ; 
}
;
#endif
