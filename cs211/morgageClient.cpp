#include<iostream>
#include<cmath>
#include<iomanip>
#include"morgage.h"


using namespace std ; 


int main()
{
  Morgage m ; // has 3 parts AMOUNT, RATE, YEARS AND ALL OF THEM HOLD JUNK JUNK JUNK 
  double loanAmount, interestRate, loanLength ; //monthlyPayment,term , totalPayback  ; 
  double monthsInYear = 12.00 ; 


    
  cout << "Enter the loan amount in dollars: " ;
  cin >> loanAmount ; 

  while(loanAmount < 1)
    {
      cout << "Please enter a number greater than 0" << endl ; 
      cout << "Enter the loan amount in dollars: " ;
      cin >> loanAmount ;
    }

  m.setAmount(loanAmount) ; 

  
  cout << "Enter the annual interest rate in decimal form: " ; 
  cin >> interestRate ; 
  
  m.setInterest(interestRate) ; 


  cout << "Enter the length of the loan in years: " ; 
  cin >> loanLength ; 
  m.setYears(loanLength) ; 

  
  cout << "Loan amount: " << m.getAmount() << endl ; 
  cout << "Interest rate: " <<  m.getInterest() << endl ; 
  cout << "Loan length: " << m.getYears() << endl << endl ; 
  
  

  cout << "Monthly payment: " << "$" << m.getMonthlyPayment() << endl ; 
  cout << "Total payback: "  << "$" <<  fixed << setprecision(2) << m.getTotalPayback() << endl ; 
  
return 0 ; 
}
