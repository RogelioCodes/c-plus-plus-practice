#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void getData (string names[], double grade[], int numStudent);
void higherThanAvg (int numStudent[], double grade[]);

int main()
{
  ifstream fin;
  ofstream fout;
  string names [numStudent];
  double grade [numStudent];
  int const numStudent = 5;

  cout << getData (names, grade, numStudent);
  cout << higherThanAvg (numStudent, grade);
  return 0;
}

void getData (string name[], int numStudent, double grade[])
{

  ifstream fin;
  fin.open ("input.txt");
  if(!=fin)
    {
      cout << "Input file does not exist." << endl;
    }
  else
    {
      for (int i = 0; i < numStudent; i++)
        fin >> name [i] >> grade [i];
    }
}

double higherThanAvg (string numStudent, double grade[]);
{
  int test = 0;
  double avg, sum = 0;
  for (test = 0; test < 5; test++)
    {
      sum += grades[numStudent];
    }
  avg = sum/ 5;

  cout << avg << "This is average" << endl;

  for (test; test < 5; test++)
    {
      if (grades[test] > avg;
          fout >> names[test] >> endl;
	  }
      return avg;
    }
