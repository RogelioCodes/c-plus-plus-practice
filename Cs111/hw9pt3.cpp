#include <iostream>
#include <stdio.h>      
#include <math.h>
using namespace std;

int main()
{
  int r, n, sum=0, firstNum;
  cout << "Please enter an integer: ";
  cin >> n;

  for(int p=0; p<4; p++)
    {
      r = n%10;
      firstNum = r * pow(4,p) ;
      sum += firstNum;
      n /=10 ;
    }

  cout << "Answer:" << sum;

  return 0;
}
