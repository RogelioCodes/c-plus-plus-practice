/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 2
2-10-2017

This program will ask the user for seconds and then convert seoonds to hours minutes and seconds
****************************************************************************************************************************************************/

#include<iostream>
using namespace std;

int main()
{
  int seconds ; //seconds
  int realseconds ; //final seconds outputed at the end of the message
  int hours  ; //hours
  int minutes ; //minutes

  //asks for seconds, user inputs seconds
  cout << "Enter the time in seconds: " ;
  cin >> seconds;

  cout << endl ; //skips a line

  minutes = seconds / 60 ; //seoonds is divided by 60. 60 seconds is 1 minute
  hours = minutes / 60 ; // minutes are divided by 60. 60 minutes is 1 hour

  minutes = minutes%60 ; //calculates minutes
  realseconds = seconds % 60 ; //calculates seconds
  
  //outputs information
  cout << hours << " hours " << minutes
       << " minutes and " << realseconds << " seconds." << endl;
  return 0;
}



