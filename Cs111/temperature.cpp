/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 2
2-10-2017

This program will ask the user for a celcius temperature and then convert it to the Fahrenheit temperature and round it to the nearest integer
****************************************************************************************************************************************************/
#include<iostream>
using namespace std; 

int main()
{
  //these are my variables
  int celsius = 0 ; //Temperature in Celcius 
  int rounded = 0 ; //rounded is the fahrenheight temperature after it is rounded
  double fahr = 0; //Temperature in fahrenheit 

  //outputs message, user then inputs celcius
  cout << "Enter a temperature in Celsius: " ;
  cin >> celsius ; 

  //skips a line
  cout << endl;
  
  
  fahr = (9.0/5) * celsius + 32; //fahrenheit is calculated
  rounded = (int)(fahr+0.5); //fahrenheit is rounded up

  //outputs the information
  cout << celsius << "C = " << rounded <<  "F" << endl << endl ;
 
 return 0 ; 
}
