#include <iostream>
using namespace std;

int main()
{
  int r, n, reversedNum=0;
  cout << "This program will reverse any integer you enter.\n" ;
  cout << "Please enter an integer: ";
  cin >> n;

  while(n != 0)
    {
      r = n%10;
      reversedNum = reversedNum*10 + r;
      n /= 10;
    }

  cout << "Reversed Number: " << reversedNum;

  return 0;
}







