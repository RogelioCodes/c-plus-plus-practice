/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 2
2-10-2017

This program will ask the user for minutes and hours and then tell the angles of the hour and minute hands of the clock.
****************************************************************************************************************************************************/

#include<cmath>
#include<iostream>
using namespace std;

int main()
{
  int hour ;//hours
  double degrees; //degrees is for the hour hand
  double  minutes ;//minutes

  //asks the user for the hour and the minute, collects information
  cout << "Enter hours: " ;
  cin >> hour ;
  cout << "Enter minutes: " ;
  cin >> minutes ; 

  hour = hour % 12 ; //12 is used because there is 12 hours in a clock
  degrees = (hour * 30) + (minutes/2); //hour multiplied by 30 because of the clock angles, minutes divided by 2 
  minutes = (minutes *6) ; //minutes is multiplied by 6 because of the clock angles 

  //outputs information
  cout << "The angle of the hour hand is: " << degrees << endl;
  cout << "The angle of the minute hand is: " << minutes << endl << endl; 
 
 return 0;
}
