#include "CompSciProfessor.h"


CompSciProfessor::CompSciProfessor()
{

}
string CompSciProfessor:: getName()const 
{
  return name ; 
}
string CompSciProfessor::  getEmail()const  
{
  return email ; 
}
long CompSciProfessor::  getFacultyID()const 
{
  return facultyID ; 
}

void CompSciProfessor:: setName(string pName)
{
  name = pName ; 
}

void CompSciProfessor:: setEmail(string pEmail) 
{
  email = pEmail ;
}
void CompSciProfessor:: setFacultyID(long fID) 
{
  facultyID = fID ;
}
