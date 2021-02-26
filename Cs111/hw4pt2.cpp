#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
  string month ; 
  double totalCollected; 
  const double stateTax = 0.04 ;
  const double countyTax = 0.02 ; 
  double sales ;
  double stateTaxTotal, countyTaxTotal, totalTax ;

  cout << "What is the month?" ;
  getline(cin, month) ; 
  cout << "What was the amount collected at the register?" ;
  cin >> totalCollected ;

  sales = totalCollected/1.06 ;

  stateTaxTotal = sales * stateTax ;
  countyTaxTotal = sales * countyTax ;
  totalTax = stateTaxTotal + countyTaxTotal ;

  cout << "Month: " << month << endl ; 
  cout << "---------------------------\n" ;
  cout << setprecision(2) << fixed ;
  cout << "Total collected: " << setw(10) << "$" << setw(9) << totalCollected << endl ;
  cout << "Sales: " << setw(20) << "$" << setw(9) << sales << endl ;
  cout << "County Sales Tax: " << setw(10) << "$" << setw(9) << countyTaxTotal << endl ;
  cout << "State Sales Tax: " << setw(10) << "$" << setw(9) << stateTaxTotal << endl ;
  cout << "Total Sales Tax: " << setw(10) << "$" << setw(9) << totalTax << endl ;

  return 0;
} 
