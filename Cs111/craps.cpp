#include<iostream>
#include<cstdlib>
using namespace std;

int rollDice();

int main()
{
  int firstRoll ;
  int roll ;

  srand(time(0)) ;

  firstRoll = rollDice ();
  cout << firstRoll << endl ;

  if (firstRoll == 7 || firstRoll == 11 )
    {
      cout << " ==== WIN ==== " << endl;
    }
  else if (firstRoll == 2 || firstRoll == 3 || firstRoll == 12 )
    {
      cout << " ==== LOSE ==== " << endl;
    }
  else
    {
      do{
	roll = rollDice();
	cout << roll << endl;
      }while (roll != 7 && roll != firstRoll );
    }
  if (roll == 7 )

    cout << " ==== LOSE ==== " << endl ;

  else if (roll == firstRoll )

    cout << " ==== WIN ==== " << endl;

  return 0 ;
}

int rollDice ()
{
  int roll ;
  roll = (rand() % 6 + 1 ) + (rand() % 6 + 1 );

  return roll ;
}
