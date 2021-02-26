#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include<string> 

using namespace std ; 

class Student
{
  friend void setTuition(Student& s) ;
 private:
  string name;
  const int studentID;
  string major; //CS, MATH, PHYS…
  string classification; // graduate or undergraduate
  int units; // total units enrolled
  float tuition;
  static int totalNumofStudents;
  static int nextStudentID;

 public: 
  Student() ;


  Student(string theName, string theMajor, string theClassification, int theUnits);
  ~Student() ;
  /* {
   totalNumofStudents-- ;

   }*/
  //  Student();  //  ~Student();
  void  print() const  ; 
  void  getData() ;

  // ~Student():studentID(nextStudentID);
};

#endif 
