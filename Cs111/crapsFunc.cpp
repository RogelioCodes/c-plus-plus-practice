#include <iostream>
#include<cstdlib>
using namespace std;
int diceRoll(int diceroll);

int main()
{
  srand(time(0));
  int diceroll = diceRoll();

int newroll;

  cout << "Dice roll:" << diceroll << "\n" ;

  if(diceroll == 7 || diceroll == 11)
    {
      cout << "You win!" << endl;
    }

  else if(diceroll == 2 || diceroll == 3 || diceroll ==12)
    {
      cout << "You lose!" << endl;
    }

  else
    {

      do{
        newroll = (rand() % 6+1) + (rand() % 6+1 ) ;
        cout << newroll << endl;
      }while(newroll!=7 &&  newroll!=diceroll) ;
      if(newroll==7)
        {
          cout << "You lose!" << endl;

        }
      else if(newroll==diceroll)
	{
          cout << "You win!" << endl;

        }
    }


  return 0;
}

int diceRoll(int diceroll)
{
  diceroll = (rand() % 6 + 1) + (rand() % 6 + 1) ;
  return diceroll ; 
  }
