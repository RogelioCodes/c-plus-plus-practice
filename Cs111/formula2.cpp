#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void fillArrays(string[], double[]);

void higherThanAvg(string names[], double grades[]);


const int NUMSTU =5;
int main ()
{

  string names[NUMSTU];
  double grades[NUMSTU];
  fillArrays(names, grades);
  higherThanAvg(names,grades);

  return 0;
}


void fillArrays(string names[], double grades[])
{
  ifstream fin;
  fin.open("inputFile.txt");
  if(!fin)
    {
      cout << "Input file des not exisr" << endl;
    }
  else
    {
      for (int i= 0; i < NUMSTU; i++)
        fin >> names[i] >> grades [i];

    }
}

void higherThanAvg(string names[], double grades[])
{
  ofstream fout;
  fout.open ("output.txt");
  double average;
  double total;
  for(int i=0; i< NUMSTU ; i++)
    {
      total+= grades[i];
    }
  average =total/NUMSTU;
  cout << average << endl;
  double average2;

  for(int i=0; i<NUMSTU; i++)
    {
      if(grades[i]>=average)
        fout << names[i] << " " << grades[i] << endl;
    }


}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void fillArrays(string[], double[]);

void higherThanAvg(string names[], double grades[]);


const int NUMSTU =5;
int main ()
{

  string names[NUMSTU];
  double grades[NUMSTU];
  fillArrays(names, grades);
  higherThanAvg(names,grades);

  return 0;
}


void fillArrays(string names[], double grades[])
{
  ifstream fin;
  fin.open("inputFile.txt");
  if(!fin)
    {
      cout << "Input file des not exisr" << endl;
    }
  else
    {
      for (int i= 0; i < NUMSTU; i++)
        fin >> names[i] >> grades [i];

    }
}

void higherThanAvg(string names[], double grades[])
{
  ofstream fout;
  fout.open ("output.txt");
  double average;
  double total;
  for(int i=0; i< NUMSTU ; i++)
    {
      total+= grades[i];
    }
  average =total/NUMSTU;
  cout << average << endl;
  double average2;

  for(int i=0; i<NUMSTU; i++)
    {
      if(grades[i]>=average)
        fout << names[i] << " " << grades[i] << endl;
    }


}
