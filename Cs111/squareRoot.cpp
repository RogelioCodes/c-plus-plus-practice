#include<iostream>
#include"myMath.h"
#include<iomanip>
using namespace std;

int main()
{
  int num;

  cout << "Enter an integer number that you want to find the square root for: " ;
  cin >> num;


  while ( num <= 0 )
    {
      cout << "This program finds the square root of a number greater than 0 only. Enter a positive integer numb\
er: " ;
      cin >> num;
    }
  cout <<  "The square root of " <<  num << " is " <<setprecision(5) << fixed << sqrt(num) << endl;
  cout << "The square root of the square root is " << num << endl;
}
