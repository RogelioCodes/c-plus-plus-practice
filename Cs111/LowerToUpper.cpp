/***************************************************************************************************************************************************
Rogelio Cordova 
CS111
Assignment 2
2-10-2017

This program will ask the user for a lowercase letter and then convert it to the corresponding uppercase letter.
****************************************************************************************************************************************************/
#include <iostream>
using namespace std;

int main()
{ char ch ; //ch is any character

  cout << "Enter a lowercase letter: " ; //asks for a lowercase letter
  cin >> ch ; //user inputs lowercase letter

  char upper = ch - 32 ; //subtracting 32 will convert it to uppercase
  cout << "The uppercase is " << upper << "." <<  endl ; //outputs the message and then the upper variable 

  return 0;
}
