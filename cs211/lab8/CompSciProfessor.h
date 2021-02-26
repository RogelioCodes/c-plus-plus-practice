#ifndef COMPSCIPROFESSOR_H
#define COMPSCIPROFESSOR_H 
#include<string>
#include<iostream>
using namespace std;  

class CompSciProfessor
{
 private: 
  string name ; 
  string email ; 
  long facultyID ; 
 public: 
  CompSciProfessor() ;
 string getName()const ; 
 string getEmail()const  ; 
 long getFacultyID()const ;

 void setName(string pName) ; 
 void setEmail(string pEmail) ; 
 void setFacultyID(long fID) ; 
}
;
#endif 
