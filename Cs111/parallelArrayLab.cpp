#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std; 
void fillArrays(string names[], int NUMSTU, double grades[]);
double HigherThanAvg(string names[], int NUMSTU, double grades[]);

int main()
{
  const int NUMSTU = 5;
  ifstream fin;
  ofstream fout; 
 string names[NUMSTU];
  double grades[NUMSTU];
  fillArrays(names, NUMSTU, grades);
  HigherThanAvg(names, NUMSTU, grades);
 return 0;
}

void fillArrays(string names[],int NUMSTU,  double grades[])
{
  ifstream fin ; 
  fin.open("input.txt") ;
  if(!fin)
    {
      cout << "Input file not found!" << endl;
}
  else
    {
      for(int i=0; i< NUMSTU; i++)
	{	fin >> names[i] >>  grades[i]; 
	}}
  fin.close();
}

double HigherThanAvg(string names[],int NUMSTU,  double grades[])
{
  ofstream fout;
  fout.open("output.txt");
int test = 0;
 double average, sum = 0;
 for(test; test < NUMSTU ; test++)
   {
 sum += grades[test];
   }
 average = sum / NUMSTU ;
 test = 0;
 for(test; test < NUMSTU ; test++)
   {
     if(grades[test] > average)
       fout <<  names[test] << " " <<   grades[test]<< " "  ; 
   }
 fout.close(); 
 return average; 
}