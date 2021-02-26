#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{

  int max;
  double total=0;

  cout << "Enter the number" << endl;
  cin >> max;

  for (int i=0;i <  max; i++)
    {
      total += (i+1) * (pow(5, max - i));
    }
  cout << total << endl;

  double total2 = 0;
  int fact = 1;

  for(int i=1; i <= max; i++)
    {
      fact = fact * i;
      total2 += (fact) * (pow(5,max-(i-1)));
    }
  cout << total2 << endl;
   
  return 0;
}  
