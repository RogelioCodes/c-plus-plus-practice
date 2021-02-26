/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 4
3-4-2017

This program will asks for a number of stars and then make a little pattern for the number indicated.
****************************************************************************************************************************************************/
#include<iostream>
using namespace std; 

int main()
{
  int row ; 
  int coll ; //collums
  int stars ; //numbers of stars
  int space ; //literally a space 
 
  //collects numbers of stars
  cout << "n = " ;
  cin >> stars ; 
 
  for(int row = 1 ; row <= stars ; row++ )
    {
      for(int space = 1; space <= stars - row ; space++)
	
	  cout << " " ;
	
      for(int coll = 1 ; coll <= row ; coll ++)
	
	  cout << "*" ; 
	  cout << endl ; 
    }
 return 0 ;
        
}


