#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main ()

{
  const int Games = 999999 ; 
  int win=0, lose=0;
  int first_roll,roll;
  double winRate, loseRate , sum ; 

  srand(time(0));
  for(int i=0; i<= Games ;i++)
    {

      sum = (rand()%6+1)+(rand()%6+1);

      if(sum == 7 || sum  == 11)
        {
	  win++;
        }
      else if (sum == 2 || sum == 3 || sum == 12)
        {
          lose++;
        }
      else
        {
	  roll = (rand()%6 + 1) + (rand()%6 +1) ;
	  do
	    {
	      roll = (rand()%6 +1)+(rand()%6 +1);

	    }while(roll!= 7 && roll!= sum);

      if(roll == 7)
        {

          lose++;
        }
      else if(roll==sum)
        {

         win++;
        }


        }

    }

  winRate=((double)(win)/Games) ;
  loseRate=((double)(lose)/Games)  ;
  
  cout << setw(9) << "Win %" << setw(9) << "Lose %" << endl ; 
  cout << setw(9) << winRate*100 << setw(9) << loseRate*100 << endl;
 
  return 0;
}




