/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 4
3-4-2017

This program will display the characters of the ascii table(33 through 126).
16 Characters are displayed on each line.
****************************************************************************************************************************************************/

#include <iostream>
#include<iomanip>   
using namespace std; 

int main()
{
  int counter = 0 ; 

  for(int ascii = 33 ; ascii <= 126 ; ascii++)//the loop that makes the table 
    {
      cout << setw(2) << (char) ascii ; 
      counter++ ; 
    
      if(counter ==16) //only 16 lines per row 
	{
	  cout << setw(3) << " " << endl ; 
	  counter = 0 ; 
	}
    }
  cout << endl ; 
 return 0 ; 
}
