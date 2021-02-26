#include<iostream>
#include<cmath>
#include<iomanip>
#include"morgage.h"

using namespace std ; 
//MORGAGE.H
/*class Morgage 
{
  double amt ; 
  double rate ; 
  int years ; 
  
public:   
  double getAmount() const ; //DONT NEED MORGAGE BECAUSE its inside the MORGAGE CLASS  
  double getInterest() const  ;
  double getYears() const ; 
  //double getTerm() const ; 
  double getMonthlyPayment() const ; 
  double getTotalPayback() const ;

  void setAmount(double a);
  void setInterest(double r );    
  void setYears(double y ) ; 
 
 
};
*/
 //NOTE MORGAGE IS ACTUALLY SPELLED MORTGAGE M O R T G A G E 
//think of the purple word as a shortcut 
double Morgage:: getAmount() const //CANT CHANGE DATA MEMBERS 
{
  return amt ; 
}


void Morgage::setAmount(double a ) 
{
  amt = a ; 
}



////////////////////////////////


double Morgage :: getInterest() const
{
  return rate ;
}
void Morgage::setInterest(double r )
{
  rate = r ;
}

//////////////////////////////////////////
double Morgage :: getYears() const
{
  return years ;
}
void Morgage::setYears(double y )
{
  years = y ;
}







double Morgage:: getMonthlyPayment() const
{
  double monthlyPayment ;

  double term ;
  term = pow((1+getInterest()/12.00), getYears()*12)  ;

  monthlyPayment = (getAmount() * term * (getInterest() /12))/(term-1) ;

  return monthlyPayment ; 
}


double Morgage:: getTotalPayback() const 
{
  double totalPayback ; 
  totalPayback =  (getMonthlyPayment()*12.00 )* getYears() ;

  return totalPayback ; 
}




