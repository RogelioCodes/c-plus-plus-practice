#include "person.h"
#include<iostream>

void Person :: setAPerson(string fName, string lName, char gen, long SSN)
{
  firstName = fName ; 
  lastName = lName ; 
  gender = gen ;
  ssn = SSN ; 
}

void Person :: printAPerson() const 
{
  cout << firstName << " " << lastName << " " << gender << " " << ssn << endl ; 
}
