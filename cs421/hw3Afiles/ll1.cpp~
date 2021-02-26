#include<iostream>
#include<stdlib.h>
#include<fstream>
//#include "stack.h"  // ** can be removed
#include<vector>
#include<string>
using namespace std;

//---------------------------------------
// CS421 File ll1.cpp for HW3A LL1 Table-Driven Parser
// Your name: **Rogelio Cordova
//---------------------------------------
// Complete this to fit the HW3A specification - look for **
// Must have the same types of tracing couts as my demo program.
// Feel free to use your stack.h and stack.cpp or use vectors


vector<char> M[3][2];
                       // the table of rules 
                       // 3 rows for S, A, B
                       // 2 rows for 0, 1
       // Each slot contains a rule's right side
       // which is a vector of characters

// ** It helps to add conversion functions here
// to convert S, A, B to 0, 1, 2 and vice versa.
// This way your code is not dependent on specific
// non-terminals.
// ** Then complete the following functions.




void readrules()
{ 
  ifstream fin ("rules", ios::in);
  // ** Read in the rules info M, make sure $ is not stored
  // Note that each entry of M is a vector representing 
  // the right hand side of a rule 
  // - first char of the rule determines the row
  // - second char of the rule determine the column  
  /*
  for (int row = 1; row < 2; row++)
    {
      for (int col = 1; col < 3; col++)
	{
	  fin  >>  M[row][0] >> M[0][col] >> M[row][col] ;
	  // printf("row %s col %s : %s\n", M[row][0], M[0][col], M[row][col]);
	}
    }
  */
  // ** display the table 

}

void addtostack(vector<char> V)
{  cout << "Adding rhs of a rule to the stack" << endl;
   // ** push V contents to the stack - be careful of the order
}

int main()
{ 
  // vo readrules();

  string ss;
  cout << "Enter a string made of 0's and/or 1's: ";
  cin >> ss;

  // ** push 'S' onto the stack to start
  cout << "Stack";
  // ** display the stack vertically

  int i = 0;
  while (ss[i] != '\0')  // for each char of ss
    {
     // ** based on the current character and 
     //    the top of stack, update the stack
     // ** note that mismatches of char and top of stack
     //    will cause immediate failure 
     // ** note that no entry in M will cause immediate
     //    failure

    } // end of string

  // ** check for success for failure based on stack empty     or not

}// end of main
