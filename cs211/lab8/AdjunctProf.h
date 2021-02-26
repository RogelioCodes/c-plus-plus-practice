#ifndef  AdjunctProf_H
#define  AdjunctProf_H
#include "TenureTrackProf.h" 
using namespace std ; 

class AdjunctProf:public CompSciProfessor
{
 private: 
  char degree ;
  int NoOfTA ; 
  int NoOfCourses  ;
  float salary ; 
 public: 
  //  AdjunctProf(char aDegree, int aNoOfTA, int aNoOfCourses ) ; 
  AdjunctProf();
 
 char getDegree()const  ; 
  int getNoOfTA()const  ; 
  int getNoOfCourses()const  ; 
  float findSalary() const ; 
  float getSalary() const ;


  void printAdjunctProf() const ;
  
  void setDegree(char aDegree) ; 
  void setNoOfCourses(int aNoOfCourses) ; 
  void setNoOfTA(int aNoOfTA) ; 


}
;
#endif
