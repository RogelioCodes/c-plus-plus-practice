#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <iostream>
using namespace std;
#include "myStrCharFunc.h"

const int SIZE = 26;
const int MAX = 30;

typedef char cstr[MAX];

struct letter
{
  int count;
  cstr shortest;
  cstr longest;
};

void initializeArray(letter ar[]);
void readFile(letter a[]);
void processWord(cstr word, letter ar[]);
void printInfoOnOneLetter(letter ar[]);
void printInfoOnAllLetters(letter ar[]);

int main()
{
  int choice;
  letter ar[SIZE];
  initializeArray (ar);
  readFile(ar);

  do
    {
      cout << "1. Show information on all letters." << endl;
      cout << "2. Show information on one letter." << endl;
      cout << "3. Quit the program." << endl;
      cout << "Enter your choice here: ";
      cin >> choice;

      switch(choice)
        {
        case 1: printInfoOnAllLetters(ar);
          break;
        case 2: printInfoOnOneLetter(ar);
          break;
        case 3: cout << "\nThank you for using the system! Goodbye." << endl << endl;
          break;
        default: cout << "\nInvalid choice. Please try again." << endl << endl;
        }

    }while(choice != 3);

  return 0;
}

void initializeArray(letter ar[])
{
  for(int i = 0; i < SIZE; i++)
    {
      ar[i].count = 0;

      myStrcpy(ar[i].longest, "" );
      myStrcpy(ar[i].shortest, "zzzzzzzzzzzzzzzzzzzzzzzzzzzzz" );
    }

}

void readFile(letter a[])
{
  cstr word;
  ifstream fin;
  fin.open("project2.dat");

  fin >> word;

  if(!fin)
    cout << "File cannot open" << endl;
  else
    {
      while(fin)
        {
          processWord(word, a);
          fin>> word;
        }
    }
}

void processWord(cstr word, letter ar[])
{
  //increment the counter in the appropriate slot of the array
  int i = myToUpper(word[0]) - 'A';
  int length = myStrlen(word);
  ar[i].count++;

  if(length > myStrlen(ar[i].longest))
    {
      myStrcpy(ar[i].longest,word);
    }

  {
    myStrcpy(ar[i].shortest,word);
  }
}

void printInfoOnOneLetter(letter ar[])
{
  char interest;
  int index;

  cout << endl;
  cout << "Which letter are you interested in?: ";
  cin >> interest;

  index = interest - 'A';

  if(ar[index].count < 1)
    {
      ar[index].count = 0;
      cout << endl;
      cout << "Frequency:" << ar[index].count << endl;
      cout << endl;
    }
  else
    {
      cout << endl;
      cout << "Frequency: " << ar[index].count << endl;
      cout << "Longest: " << ar[index].longest << endl;
      cout << "Shortest: " << ar[index].shortest << endl;
      cout << endl;
    }
}

void printInfoOnAllLetters(letter ar[])
{
  int letterFirst = 65;

  cout << endl;
  for(int i = 0; i < SIZE; i++)
    {
      cout << (char)letterFirst << " " << right << setw(2) << ar[i].count << ":";

      if(ar[i].count > 0)
        {
          for(int s = 0; s < ar[i].count; s++)
            {
              cout << "*";
            }
          cout << " " << ar[i].longest << " - " << ar[i].shortest << endl;
          letterFirst++;
        }
      else
        {
          cout << endl;
          letterFirst;
        }
    }
  cout << endl;
}
