//B
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
const int SIZE = 15;

int inputData (string fn[], string ln[], int h[],int q[], int l[], int m[], int f[]);
int calcGrade (int h[], int q[], int l[], int m[], int f[], float t[], char g[]);
int outputData (string fn[], string ln[], float t[], char g[]);
float getAverage (float t[]);
int getHighest (string fn[], string ln[], float t[], char g[], string *first, string *last, float *tot, char *grad);
int getLowest (string fn[], string ln[], float t[], char g[], string *first, string *last, float *tot, char *grad);
int main (int argc, char ** argv)
{
  const int SIZE = 15;
  string firstName [SIZE];
  string lastName [SIZE];
  int HW [SIZE];
  int quiz [SIZE];
  int lab [SIZE];
  int midterm [SIZE];
  int final [SIZE];
  float total [SIZE];
  char grade [SIZE];

  intputData (firstName, lastName, HW, quiz, lab, midterm, final);
  calcGrade (HW, quiz, lab, midterm, final, total, grade);
  outputData (firstName, lastName, total, grade);

  float average;
  average = getAverage (total);
  cout << "The average of total grades in the class is " << average << endl;

  string fn_max;
  string ln_max;
  float t_max;
  char grade_max;
  getHighest (firstName, lastName, total, grade, &fn_max, &ln_max, &t_max, &grade_max);


  string fn_min;
  string ln_min;
  float t_min;
  char grade_min;
  getLowest (firstName, lastName, total, grade, &fn_min, &ln_min, &t_min, &grade_min);
}

int inputData (string fn[], string ln[], int h[], int q[], int l[], int m[], int f[])
{
  ifstream inputStream;
  inputStream.open ("gradeBook.txt");
  if (inputStream.is_open())
    {
      for (int i = 0; i < SIZE; i++)
        inputStream >> fn[i] >> ln[i] >> h[i] >> q[i] >> l[i] >> m[i] >> f[i];
    }
  inputStream.close();
  return 0;
}

int calcGrade (int h[], int q[], int l[], int m[], int f[], float t[], char g[])
{
  for (int i = 0; i < SIZE; i++)
    {
      t[i] = h[i] *0.2 + q[i] * 0.1 + l[i] * 0.1 + m[i] * 0.3 + f[i] * 0.3;
      if (t[i] >= 0)
	{
	  if (t[i] < 60)
	    g[i] = 'F';
	  else if (t[i] < 70)
	    g[i] = 'D';
	  else if (t[i] < 80)
	    g[i] = 'C';
	  else if (t[i] < 90)
	    g[i] = 'B';
	  else if (t[i] <= 100)
	    g[i] = 'A';
	}
    }
  int outputData (string fn[], string ln[], float t[], char g[])
  {
    ofstream out ("output.txt");
    for (int i=0; i < SIZE; i++)
      {
	out << fn[1] << " " << ln[i] << " " << t[i] << " " << g[i] << endl;
      }
    out.close();
  }

  float getAverage (float t[])
  {
    float ave = 0;
    for (int i = 0; i < SIZE; i++)
      {
	ave = t[i] + ave;
      }
    ave = ave/SIZE;
    return ave;
  }

  int getHighest (string fn[], string ln[], float t[], char g[], string *first, string *last, float *tot, char *grad)
  {
    float highest = 0;
    int index = 0;
    for (int i = 0; i < SIZE; i++)
      {
	if (t[i] >= highest)
	  {
	    index = i;
	    highest = t[i];
	  }
      }
    *first = fn[index];
    *last = ln[index];
    *tot = t[index];
    *grad = g[index];
    cout << "The highest grade is for " << *first << " " << *last << " who obtained a total of " << *tot << " which is " << *grad;

    return index;
  }

  int getLowest (string fn[], string ln[], float t[], char g[], string *first, string *last, float *tot, char *grad)
  {
    float lowest = 100;
    int index = 0;
    for (int i = 0; i < SIZE; i++)
      {
	if (t[i] <= lowest)
	  {
	    index = i;
	    lowest = t[i];
	  }
      }
    *first = fn[index];
    *last = ln [index];
    *tot = t[index];
    *grad = g[index];
    cout << "the lowest grade is for " << *first << " " << *last << " who obtained a total of " << *tot << " which is " << *grad;
  }
