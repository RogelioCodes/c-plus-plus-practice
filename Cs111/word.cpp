#include<iostream>
using namespace std;  
#include "myStrCharFunc.h" 
#include<fstream>
#include<cstdlib>


const int SIZE = 26 ; 
const int MAX = 30 ; 

typedef char cstr[MAX] ; 

struct letter
{
  int count ;
  cstr longest ;
  cstr shortest ; 

}
  ;

void initializeArray(letter ar[]);
void readFile(letter ar[]);
void processWord( letter ar[], cstr word);
void printInfoOnOneLetter(letter ar[]) ;
void printInfoOnAllLetters(letter ar[]);
// typedef gives an alias to an existing data type
//  e.g.
 typedef int integer;
 integer n = 5;
 typedef char cstr[MAX];
 cstr word; 




int main()
{
  int choice ; 
  letter ar[SIZE];
  initializeArray(ar); 
  readFile(ar) ;

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

  for(int i = 0 ; i < SIZE ; i++)
    {
      ar[i].count = 0 ;

      myStrcpy(ar[i].longest, "" );
      myStrcpy(ar[i].shortest, "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx" );
    }
    

}

void readFile(letter ar[])
{
  //open the input file
  //read one word at a time and send it to processWord()
  ifstream fin ;


  fin.open("project2.dat" ); //input file is located in same directory as program file
  if(!fin) //checks for file
    {
      cout << "Doesnt exist " << endl ;
      exit(1) ;
    }
  else //if file exists it inputs all the info
    {

  fin >> word;
  while(fin)
    {

      // cout << word << " " ; 
      processWord(ar, word);
      fin>> word;
    }
    }
}

void processWord( letter ar[],cstr word)
{

    int length ;   
    int index = myToUpper(word[0]) - 'A';
    ar[index].count++ ;    
    // cout << index << " "  ; 
length = myStrlen(word);    
 if(length > myStrlen(ar[index].longest))
   {
     myStrcpy(ar[index].longest, word)  ;
   }
 if(length < myStrlen(ar[index].shortest))
   {
     myStrcpy(ar[index].shortest, word) ;
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
  for(int i = 0; i < SIZE; i++, letterFirst++)
    {
      cout << (char)letterFirst << " " << right << setw(2) << ar[i].count << ":";

      if(ar[i].count != 0)
        {
          for(int s = 0; s < ar[i].count; s++)
            {
              cout << "*";
            }
          cout << " " << ar[i].longest << " - " << ar[i].shortest << endl;
         
        }
      else
        {
          cout << endl;
         
        }
    }
  cout << endl;
}
