/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 3
2-25-2017

This program will ask the user what they want to convert , celsius to fahrenheit or vice versa, and then convert the temperature. 
****************************************************************************************************************************************************/

#include<iostream>
#include<iomanip>

using namespace std; 

int main() 
{
  char ch ; //char is used for switch
  double cel ; //celsius
  double fah ; //fahrenheit

  //asks for F or C and collects input
  cout << "Which temperature do you have? Enter F for Fahrenheit or C for Celsius: " ; 
  cin >> ch ; 
  switch(ch)
    {
    case 'F':
      cout << "Enter a temperature in Fahrenheit: " ; 
      cin >> fah ; 
      cel = (fah - 32) * 5/9 ; //converts to cel
      cout << fah << " Fahrenheit = " ; 
      cout << fixed ;
      cout << setprecision(2); 
      cout << cel << " Celsius" << endl ; 
      break ;
    case 'C':
      cout << "Enter a temperature in Celsius: " ;
      cin >> cel ;
      fah = (cel)*9/5 + 32 ; //converts to fahrenheit 
      cout << cel << " Celsius = " ;
      cout << fixed ;
      cout << setprecision(2);
      cout << fah << " Fahrenheit" << endl << endl ;
      break ;
    default : 
      cout << "Invalid choice" << endl << endl ; 
    }
  return 0;
}
