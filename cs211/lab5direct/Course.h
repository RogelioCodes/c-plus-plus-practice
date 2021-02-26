#ifndef COURSE_H 
#define COURSE_H
//#include "Instructor.h"
 #include<iostream>
#include<string>

using namespace std;  

class Course
{
private: 
long courseNumber ;
string courseName ;
int numberOfCredits ; 

 public:
 void  setACourse(long courseNum, string courseNombre, int numOfCredits) ;
 void  printACourse() const ;

} ;

#endif
