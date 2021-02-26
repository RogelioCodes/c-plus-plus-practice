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

  int num,val1,val2,val3,choice;

do
  {
    cout << "Math Menu" << endl;
    cout << "Number splitting" << endl;
    cout << "Fibonacci Sequence" << endl;
    cout << "Base Conversion" << endl;
    cout << "Pattern Printing" << endl;
    cout << "Quit" << endl;
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
          cin >> val1 << val2 << val3;
        }
      while (val1 < 0 || val2 < 0 || val3 < 0);

      fibonacciSeries (val1, val2, val3);

      break;

      case 3:
      do
        {
          cout << "Enter two positive integers" << endl;
          cin >> val1 >> val2;
        }
      while (val1 < 0 || val2 < 0);

      baseConversion (val1,val2);
      break;
      case 4:
      do
        {
          cout << "Enter a positive integer" < endl;
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

void fibonacciSeries ( int val1, int val2, int val3)
{
  int sequence;
  for (int n = 0; n < val3; n++)
    {
      if (n == 0)
        {
          cout << val1 << endl;
        }
      else if (n==1)
        {
          cout << val2 << endl;
        }
      else
        {
          for (; n < val3; n++)
            {
              sequence = val1 + val2;
              val1 = val2;
              val2 = sequence;
              cout << sequence << endl;
            }
        }
    }
}
void baseConversion (int val1, int val2)
{
  int i = 0;
  int total = 0;
  int remain;
  while (val1 != 0)
    {
      remain = val1 % 10;
      val1 /= 10;
      remain = remain * pow(val2,1);
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
