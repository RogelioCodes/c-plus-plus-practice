#include <iostream>

using namespace std;

int main()
{
  bool pass = false ;
  P = false;
  A = false;
  B = false;
  C = false;

  int grade;
  cout << "Enter Grade:\n";
  cin >> grade;
  if (grade == 100)
    {
      P = true;
      if (P = true)
        {
	  cout << "Perfect Score!";
        }
    }
  if (grade >= 90 && grade < 100)

    {
      A = true;
      if (A = true)
        {
	  cout << "A" << "\n" << "Excellent! ";
        }
    }
  if (grade >= 80 && grade < 90)
    {
      B = true;
      if (B = true)
        {
	  cout << "B";
        }
    }
  if (grade >= 70 && grade < 80)
    {
      C = true;
      if (C = true)
        {
	  cout << "C" << "\n" << "OK" ;
        }
    }
  if (grade >= 60 && grade < 70)
    {
      D = true;
      if (D = true)
        {
	  cout << "D";
        }
    }
  if (grade >= 50 && grade < 60)
    {
      F = true;
      if (F = true)
        {
	  cout << "F";
        }
    }

  return 0;
}