#ifndef DATE_H
#define DATE_H
#include<iostream>
#include <string>
using namespace std ;



class Date
{
  private:
  int month;
  int day;
  int year;
  
 public:
  void printDate() const ; 
  void setDate(int m, int d, int y) ; 
  Date(int m, int d, int y) ; 
  Date() ; 



  
  int getMonth()   ;
  int getDay()   ; 
  int getYear()  ; 
}
;
#endif
