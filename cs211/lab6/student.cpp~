//THIS IS THE IMPLENENTATION FILEEEEEEEEEEEEEEEEEEEE
#include "student.h"
#include <iostream>
#include <iomanip>



int Student::nextStudentID = 10000 ; 
int Student::totalNumofStudents = 0 ;

Student:: Student(): studentID(nextStudentID)
{
  name = "Unknown" ; 
  // studentID = nextStudentID; dont wanna do this inside the constructor because it will make a new student errtime


  
  major = "CS" ; //CS, MATH, PHYS…
  classification = "undergraduate" ; // graduate or undergraduate
  units = 12 ; // total units enrolled
  tuition = 0 ;
  
  nextStudentID++ ;
  totalNumofStudents++ ;


} 


Student::Student(string theName, string theMajor, string theClassification, int theUnits): studentID(nextStudentID)

{
  name = theName ; 
  major = theMajor ; 
  classification = theClassification ; 
  units = theUnits  ; 

}

Student::~Student()
{
    totalNumofStudents-- ;

    }

void Student:: getData()
{
  string theName ; 
  string theMajor ; 
  string theClassification ; 
  int theUnits ; 

  cout << "Enter the name: " ;
  getline(cin, name) ;
  cout << endl ; 

  cout << "Enter the major: " ; 
  cin >> major ; 
  cout << endl ; 

  cout << "Enter the classification: " ;
    cin >> classification ; 
  cout << endl ; 

  cout << "Enter the number of units:  " ; 
    cin >> units ; 
  cout << endl  ;
}


void Student:: print() const
{
  cout << "Name: " << name << endl ;
  cout << "StudentID: " << studentID << endl;
  cout << "Major: " << major << endl; //CS, MATH, PHYS…
  cout << "Classification: " <<  classification << endl; // graduate or undergraduate
  cout << "Units: " <<  units << endl; // total units enrolled
  cout << "Tuition: " << tuition << endl;
  cout << "Total number of students: " <<  totalNumofStudents << endl;
  //cout <<  nextStudentID << endl;
  
}
