#include "Date.h"


Date::Date()  
{
  month = 0 ; 
  day = 0 ; 
  year = 0  ; 
}

void Date::printDate() const 
{
  cout << "Date: " << month << "/" << day << "/" << year << endl ; 
}

Date:: Date(int m, int d, int y) 
{
  setDate(m, d, y) ; 
}

void Date:: setDate(int m, int d, int y) 
{
  month =  m ; 
  day = d ;
  year = y ; 
}




//Have to write getters because they are private attributes. 
int Date::  getMonth() 
{
  return month ; 
}
int  Date:: getDay()  
{
  return day ;  
}
int Date::   getYear() 
{
  return year ; 
}
