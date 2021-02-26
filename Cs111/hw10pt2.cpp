#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void numberSplitting (int);
void fibonacciSeries(int,int,int);
void baseConversion(int,int);
void patternPrinting(int);

int main()
{

  int num,num1,num2,num3,choice;

do
  {
    cout << "Math Menu" << endl;
    cout << "1. Number splitting" << endl;
    cout << "2. Fibonacci Sequence" << endl;
    cout << "3. Base Conversion" << endl;
    cout << "4. Pattern Printing" << endl;
    cout << "5. Quit" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    switch (choice)
      {
      case 1:
      do
        { cout << "Enter a positive integer " << endl;
          cin >> num;
        }
      while (num<0);

      numberSplitting(num);

      break;
      case 2:
      do
        { cout << "Enter three positive integers" << endl;
          cin >> num1 >> num2 >> num3;
        }
      while (num1 < 0 || num2 < 0 || num3 < 0);

      fibonacciSeries (num1, num2, num3);

      break;

      case 3:
      do
        {
          cout << "Enter two positive integers" << endl;
          cin >> num1 >> num2;
        }
      while (num1 < 0 || num2 < 0);

      baseConversion (num1,num2);
      break;
      case 4:
      do
        {
          cout << "Enter a positive integer" << endl;
          cin >> num;
        }
      while (num < 0);

      patternPrinting(num);
      break;
      default:
        cout << "Invalid choice please enter a number between 1-5" << endl;
      }
  }
 while (choice!=5);
 return 0;
}
void numberSplitting (int num)
{
  int reverse=0, remain;
  cout << "original number: " << num << " " << endl;
  while (num!=0)
    {
      remain = num%10;
      reverse = reverse * 10 + remain;
      num /=10;
    }
  cout << "reversed number: " << reverse << endl;
}

void fibonacciSeries ( int num1, int num2, int num3)
{
  int sequence;
  for (int n = 0; n < num3; n++)
    {
      if (n == 0)
        {
          cout << num1 << endl;
        }
      else if (n==1)
        {
          cout << num2 << endl;
        }
      else
        {
          for (; n < num3; n++)
            {
              sequence = num1 + num2;
              num1 = num2;
              num2 = sequence;
              cout << sequence << endl;
            }
        }
    }
}
void baseConversion (int num1, int num2)
{
  int i = 0;
  int total = 0;
  int remain;
  while (num1 != 0)
    {
      remain = num1 % 10;
      num1 /= 10;
      remain = remain * pow(num2,1);
      i++;
      total += remain;
    }
  cout << total << endl;
}
void patternPrinting (int num)
{
  for (int row = num; row >=1 ; row--)
    {
      for (int col = 0; col <= num-row; col++)
        {
          cout << "*";
        }
      for (int n = 1; n<= row; n++)
        {
          cout << n;
        }
      cout << endl;
    }
}
