#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
bool playGame();
int rollDice();

int main()
{
  int Games ; 
  int first_roll ;
  int roll;
  bool win = 0 ;
  int Win = 0 ; 
  int lose = 0 ;
  double winRate ; 
double loseRate ;
  


  cout << "How many games do you wish to play?: " << endl ; 
  cin >> Games ; 

  
  for(int count = 1; count <= Games ; count ++)
    {
      win = playGame(); 

      if(win == true)
	{
	  Win++ ;
	    }
      else
	{
	  lose ++ ; 
	}

      winRate = (double)Win/Games ; 
      loseRate = (double)lose/Games ; 

  cout << setw(9) << "Win %" << setw(9) << "Lose %" << endl ;
  cout << setw(9) << winRate*100 << setw(9) << loseRate*100 << endl; 

  return 0 ; }
}

bool playGame()
{
  bool win ;
  
  int first_roll = rollDice() ;
  int roll;  
  
  if(first_roll == 7 || first_roll == 11)
    {
      win = true ; 
    }
 else if(first_roll == 2 || first_roll ==3 || first_roll == 12)
   {
     win = false ;
   }
 else 
      {
do
  {
    roll = rollDice(); 
  }
 while(roll! = 7 && roll != first_roll) ; 
 if(roll == firstRoll)
   {
     win = true ; 
   }
 else if(roll == 7)
   {
     win = false ; 
   }
 return win ; 
      }
}

 int rollDice()
 { int roll ; 
   roll = (rand()%6+1) + (rand()%6 + 1);
   return roll ;
 }
