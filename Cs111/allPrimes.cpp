#include <iostream>
#include <iomanip>
#include "myMath.h"
using namespace std;

int main()
{
  //variables
  int counter = 0;
  int line = 0;
  int num=1000;
  
  for(int n = 2; n<=1000; n++)
    {
      bool prime = isPrime(n);

      if(prime)
	{
	  counter++;
	  cout << setw(5) << n;
	  line++;
	  if(line == 10)
	    {
	      cout << endl;
	      line = 0;
	    }
	}
    }
  cout<< endl;
  cout<< "There are " << counter << " prime numbers between 2 and 1000 " <<endl;

  return 0;
}
