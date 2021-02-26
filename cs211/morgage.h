#include<iostream>
#include<cmath>
#include<iomanip>
//#include"myMath.h"
using namespace std ; 

class Morgage 
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


