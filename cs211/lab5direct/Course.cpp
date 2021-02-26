#include "Course.h"
#include<iostream> 
#include<iomanip>
using namespace std ; //we include using namespace std into course.h so we dont actually have to include it 

//should pass 3 values
void Course:: setACourse(long courseNum, string courseNombre, int numOfCredits) 
{
  //These are our data members 
  courseNumber = courseNum;
  courseName = courseNombre ;
  numberOfCredits = numOfCredits ;

}

void Course:: printACourse() const 
{
  cout << courseNumber << " " << courseName << " " << numberOfCredits << endl ; 
}
