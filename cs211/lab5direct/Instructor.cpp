#include "Instructor.h" 

void Instructor:: setAnInstructor(long empID, string officeNum, 
				  long c1num, string c1name, int c1cr,
				  long c2num, string c2name, int c2cr,
				  long c3num, string c3name, int c3cr) //U MUST INCLUDE 11 parameters because we need space for all the shit in course 
{
  employeeID = empID ; 
  officeNumber = officeNum ; 

  
  courses[0].setACourse(c1num, c1name, c1cr); 
  courses[1].setACourse(c2num, c2name, c2cr);
  courses[2].setACourse(c3num, c3name, c3cr);

}




void Instructor ::  printAnInstructor() const
{
  cout << employeeID << " " << officeNumber << endl ; 
  courses[0].printACourse();
  courses[1].printACourse();
  courses[2].printACourse();

 
 
}