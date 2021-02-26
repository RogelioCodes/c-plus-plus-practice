/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 4
3-4-2017

This program will ask the user for the number of days worked and then calculate their salary. 
****************************************************************************************************************************************************/


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

  //collects days worked   
    cout << "Enter the number of days you worked: " ;
    cin >> days;
  
do
  {
    cout << "Enter the number of days you worked: " ;
    cin >> days; //this is looped 

  for (int dinero =1; dinero <= days; dinero ++)
      {

	cout << setw(5)<< dinero<< right<< setw(10)<<pennies<< endl;
	total += pennies ; //calculates the total so pennies+ pennies + pennies and so on 
	pennies *=2; //pennies multiplied by 2 every time 
      }
  }
 while (days <1) ; //rejects bad inputs 
    
//final output message 
 cout << "\n" << "Total" << setprecision(5)<<right <<setw(10)<< total <<endl << endl ;

  return 0;}









