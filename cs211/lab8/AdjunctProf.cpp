#include "AdjunctProf.h" 

AdjunctProf::AdjunctProf()
{
  //  degree ;
  NoOfTA = 0 ;
  NoOfCourses = 0  ;
  // salary = 0 ; 
}
/*AdjunctProf::AdjunctProf() 
{

}
*/
char AdjunctProf:: getDegree()const  
{
  return degree ; 
}
int AdjunctProf::getNoOfTA()const
{
  return NoOfTA ; 
}
int AdjunctProf::getNoOfCourses()const 
{
  return NoOfCourses ; 
}
/*float AdjunctProf:: getSalary() const 
{
  return salary ; 
  }*/

void AdjunctProf:: setDegree(char aDegree) 
{
  degree = aDegree ;
}
void AdjunctProf:: setNoOfCourses(int aNoOfCourses) 
{
  NoOfCourses = aNoOfCourses ;

}
void AdjunctProf:: setNoOfTA(int aNoOfTA) 
{
  NoOfTA = aNoOfTA ;

}

float  AdjunctProf:: findSalary() const 
{
  float salary ;
  if(degree == 'B')
    salary = ( getNoOfTA() * 1500) + (getNoOfCourses() * 3000) ;
  if(degree == 'M')
    salary = ( getNoOfTA() * 2000) + (getNoOfCourses() * 4000) ;
  if(degree == 'P')
    salary = ( getNoOfTA() * 2500) + (getNoOfCourses() * 5000) ;


/* if(degree == 'M')
   
  if(degree == 'P')
*/ 
  return salary ; 
}



void AdjunctProf:: printAdjunctProf() const 
{
  cout << "Name: " << getName() << endl ; 
  cout << "Email: " << getEmail() <<  endl ; 
  cout << "ID: " << getFacultyID() << endl ; 
  cout << "Degree: " << getDegree() << endl ; 
  cout << "Number of TAs: " << getNoOfTA() << endl ; 
  cout << "Number of courses: " << getNoOfCourses() << endl ; 
  cout << "Salary: $ " ;
  cout <<  findSalary() ;
  cout << endl << endl ; 
}

