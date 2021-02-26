/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 4
3-4-2017

This is a loop that will calculate the top and bottom numbers of a square root of a positive number
****************************************************************************************************************************************************/


#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std; 

int main() 
{
  //variables
  double num ; //user input and also the square root 
  int top ; 
  int bot ; 
  int input ; // calculates square root

  cout << "Enter Num: " ;
  cin >> num ; 

  for( top = 1 ; top < num ; top ++ )
    {
      input = top*top ; //multiplies it by itself 
      if (input < num) // if it is less than the number then it is the bottom
	{
	  bot= top ;
	}
    }
      top = bot + 1 ;  //always 1 more than the bottom 
      cout << "Top is " << top << endl ; 
      cout << "Bottom is " << bot << endl ; 
      cout << endl ; 
      return 0 ; 
}
