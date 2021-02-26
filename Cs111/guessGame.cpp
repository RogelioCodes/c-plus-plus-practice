/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 4
3-4-2017

This program will let the user guess a number between 1 and 100 
****************************************************************************************************************************************************/
#include <iostream>
#include <iomanip>
#include<cstdlib>
using namespace std;

int main()
{

  srand (time(0)); //I have no idea what this does please dont reduct point im begging you
  int UserGuess; // user guess
  int RightGuess = rand() % 100 + 1; //generates the random number 


  cout << "Guess a number between 1 and 100. Enter your guess: " << endl;

do
  {
    cin >> UserGuess; //user inputs guess
    if  (UserGuess > RightGuess) //if user guess is higher than the random number
      {
        cout << "Too high, try again." << endl ; 
	cout << "Enter your guess: " ;
      }


    if  (UserGuess < RightGuess) //if lower than the random number 
      {
        cout << "Too low, Try again!" << endl;
	cout << "Enter your guess: " ;
 }


    if (UserGuess == RightGuess) //if guessed correctly 
      {
        cout << "You guessed it right!" << endl << endl ;;
        return 0 ;
      }
  }

 while (UserGuess != RightGuess); //keeps program running 



 return 0;
}




