#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

//========================================================
// CS421 Extra Credit by: **
// transform NFAe into NFA  (nfa-e.txt into nfa.txt)
//========================================================

// e.g. Output line 1 a 2 3  means 1 on a goes to 2 and 3

// Transitions of the NFAe in a matrix.  
// 10 states (0-9) and 5 chars (a-e). 
//      e as epsilon is in column 4.
// Each slot of the matrix contains a vector of integers indicating the next states.
vector<int> NFAe[10][5]; 
int maxState;   // the highest state number used in NFAe

int E_Ends[10];  // For each state, 
                 // all the states you can go to using only e-moves

/* ALGORITHM:
   Read in nfa-e.txt into NFAe. 
   To handle Trs(s, e*...), for each state s, find
   all states you can go using only epsilons and
   store them in E-Ends[s].
   To handleTrs(s, e*c..), for each state s and char c,
   find all states you can go from E-Ends[s] on c.
   Store the transitions (s on c to the destination).
   And then find all states you can go using only
   epsilons from the destinations and
   store the transitions (s on c to the e-end). 
*/

// ----- put your utility functions here ---------------------------

// Such as display and conversion functions


// --------- Storing NFAe --------------------------

void buildnfae()
{ 
  int state; int dest; char c; 

  ifstream fin ("nfa-e.txt", ios::in);

  fin >> maxState; // states are 0 through this

  // ** store nfa-e.txt into NFAe and display it

  fin.close();
}

// ------------- Test Driver ----------------------

int main()
{ 

  buildnfae(); // NFAe has been created

  // For each state-char pair of NFAe,
  // compute e* char e* to add to the NFA

  cout << "For each state, find all the states reachable using only e's" << endl; 
  for (int s = 0; s <= maxState;  s++)
    {
      // ** From state s, find all the states rechable using only e's
      // ** These should be stored in the E_Ends[s]
    }

  // ** display the E_Ends here
  // ** open the output file nfa.txt

  cout << "Computing e* c e* for each state-c pair.. " << endl;
  for (int s = 0; s <= maxState; s++)
    for (int ci = 0; ci < 4; ci++)  // ci 4 is epsilon so not used
      { 
        // ** From s get direct on ci destinations 

        // ** For each E_End[s], add on (E_End, ci) destinations e*c

        // ** For each destination, add on the E_Ends of it e*ce*

        // ** Send the final result for (s, ci) pair to output file
      }
   cout << "Sent NFA to nfa.txt .... " << endl;

   // ** close nfa.txt

}//the end

 
