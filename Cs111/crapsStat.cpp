#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main ()

{
  int win=0, lose=0;
  int first_roll,roll;
  srand(time(0));
  for(int i=0; i<100000;i++)
    {

      first_roll = (rand()%6+1)+(rand()%6+1);



      if(first_roll == 7 || first_roll == 11)
	{

	  win++;
	}
      else if (first_roll == 2 || first_roll == 3 || first_roll ==12)
	{

	  lose++;
	}
      else
	{
      do
        {
          roll = (rand()%6 +1)+(rand()%6 +1);



        }while(first_roll != roll && roll!= 7);

      if(roll == first_roll)
        {

          win++;
        }
      else if(roll== 7)
        {

          lose++;
        }


	}

    }
  double win_rate=(double)(win)/100000;
  double lose_rate=(double)(lose)/100000;
  cout << "win is " << win_rate*100 << "%" << endl;
  cout << "Lose is " << lose_rate*100 << "%" << endl;
  return 0;
}
