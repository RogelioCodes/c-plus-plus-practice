#include <iostream>
#include <string>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{
  int days = 1;
  double pennies = 0.01; 
  double total =0.0 ; 

  cout << "How many days did you work?\n" << endl;
  cin >> days; 
  while (days <1)
    {
      cout << "You need to work at least one day.\n" << "Please enter a valid number of work days." ;
      cin >> days;
    
    }
  for (int dinero =1; dinero <= days; dinero ++)
    {
   
      cout << setw(5)<< dinero<< right<< setw(10)<<pennies<< endl;
      total += pennies ;
      pennies *=2;
      
      
    
    
    } cout << "\n" << "Total" << setprecision(5)<<right <<setw(10)<< total <<endl ;

  return 0;}




