
#ifndef InstructorProfile_H
#define InstructorProfile_H
#include"Instructor.h"
#include"person.h"

#include<iostream>


class InstructorProfile
{
  Person personalInfo ;
  Instructor instructorInfo ;
 public:
 void  setInstructorProfile(string fName, string lName, char gen, long SSN, long empID, string officeNum,  long c1num, string c1name, int c1cr,
			     long c2num, string c2name, int c2cr,
			     long c3num, string c3name, int c3cr);

    void  printInstructorProfile() const ;
};



#endif


