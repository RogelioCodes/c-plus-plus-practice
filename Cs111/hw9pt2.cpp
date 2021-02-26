#include <iostream>
using namespace std;

int main()
{
  int x, fnum1= 0, fnum2 = 1, nextNum = 0;
  cout << "This program will get the first x number of terms of the fibonacci series. \n" ;
  cout << "Please enter any number of terms: ";
  cin >> x;

  cout << "Fibonacci Series: ";

  for (int i = 1; i <= x; ++i)
    {
      
      if(i == 1)
        {
	  cout << " " << fnum1;
	  continue;
        }
      if(i == 2)
        {
	  cout << fnum2 << " ";
	  continue;
        }
      nextNum = fnum1 + fnum2;
      fnum1 = fnum2;
      fnum2 = nextNum;
        
      cout << nextNum << " ";
    }
  return 0;
}
