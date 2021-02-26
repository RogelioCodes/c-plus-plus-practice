#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//==============================================
//  CS421 RE to NFA-e extra credit by: ** 
//===============================================

// Each transition 
struct transition
{
  int start;    // start state
  char arrow;   // what to see on an arrow
  int end;      // next state
};

// NFA can store up to 10 machines.  
// Each NFA machine is a vector of transitions.
vector<transition> NFA[10];

/* ALGORITHM:
   You will read the re.txt file to create initial 
   component machines and store the machines into NFA.
   You will then ask the user what operation they want
   to perform on the already created machines.
   As a new machine is created, add it to NFA. Repeat.
*/  

 

// ------------- Put your utility functions here --------------------
      
// Such as display and copy functions

// ------------- Machine processing functions follow -----------

void processConcat()
{ int M1, M2;
  cout << "Enter number of the first machine:"; cin >> M1; 
  cout << "Enter number of the second machine:"; cin >> M2; 
  if (M1 == M2) { 
    cout << "Concatenating with itself..." << endl;
    cout << "copying the machine first ...." << endl;
    // Copy the machine with new state numbers and display it  (***)
    // The copy should become M2
    }

  // Create transition from M1's end to M2's start.
  // Add the new concatenated machine to NFA.
  // Display the machine.
} 

// (***) It would be good to write a copy machine function
// which creates a new NFA with new state numbers

void processOr()
{ int M1, M2;
  cout << "Enter number of the first machine:"; cin >> M1; 
  cout << "Enter number of the second machine:"; cin >> M2; 
  if (M1 == M2) { // must be a different one from M1
    cout << "Enter differnt number for the second machine";  cin >> M2;}

  // For the new machine to add to NFA:     
     // create new start. 
     // create new final.
     // add transition from new start to M1 start.
     // add transition from new start to M2 start.
     // add M1 and M2. 
     // add transition from M1 end to new final.
     // add transition from M2 end to new final.
  // Display the machine.
 } 


void processStar()
{ int M1;
  cout << "Enter number of the machine:"; cin >> M1; 

  // For the new machine to add to NFA:
    // create new start. 
    // create new final.
    // add transition from new start to M1 start.
    // add M1. 
    // add transition (back) from M1 end to M1 start.
    // add transition from M1 end to new final.
    // add transition (skip) from new start to new final.
  // Display the machine.
} 

void processPlus()
{ int M1;
  cout << "Enter number of the machine:"; cin >> M1; 

  // For the new machine to add to NFA:
    // create new start. 
    // create new final.
    // add transition from new start to M1 start.
    // add M1. 
    // add transition (back) from M1 end to M1 start.
    // add transition from M1 end to new final.
   // Display the machine.
} 


// ------------ Test Driver ---------------------

int main()
{
 cout << "This program will transform regular expressions into NFA-e" << endl;
 cout << "But it is done interactively by asking you to apply operators" << endl;
 cout << "to component machines." << endl;

 ifstream fin ("re.txt", ios::in);  // components come from re.txt
 char c;
 transition s;

 cout << "Reading in the components from re.txt...." << endl;
 while (fin >> c)
    { 
      // Build a transition (s) for arrow label c.
      // Display the transition.
      // Add it to NFA.
    }  
  fin.close();
 // -- finished creating component machines

 // -- It then asks the user to combine machines.  
 // -- Combined machines' transitions will be added to NFA.

  char A;  // user choice
  while (A != 'n')
    {
  cout << "---- MENU -----" << endl;
  cout << "* for a machine" << endl;
  cout << "+ for a machine" << endl;
  cout << "| for two machines" << endl;
  cout << "- for appending two machines" << endl;
  cout << "n to quit" << endl;
  cin >> A;
  
   if (A == '*') processStar();
   else if (A == '+') processPlus();
   else if (A == '|') processOr();
   else if (A == '-') processConcat();

    }
  cout << "Outputting all machines to nfa-e.txt... " << endl;
  ofstream fout ("nfa-e.txt", ios::out);

  // Send all NFA contents to the output file which
  // is created new each time.

} // the end
