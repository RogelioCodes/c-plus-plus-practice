#include "InstructorProfile.h" 
#include<iostream>

void InstructorProfile :: setInstructorProfile(string fName, string lName, char gen, long SSN, long empID, string officeNum,  
					       long c1num, string c1name, int c1cr,
					       long c2num, string c2name, int c2cr,
					       long c3num, string c3name, int c3cr) 
{
  personalInfo.setAPerson(fName, lName, gen, SSN) ; 
  instructorInfo.setAnInstructor(empID, officeNum, c1num, c1name, c1cr, c2num, c2name, c2cr,
				 c3num, c3name, c3cr) ;



}

void InstructorProfile :: printInstructorProfile()const 
{
  personalInfo.printAPerson() ;
  instructorInfo.printAnInstructor() ; 
}