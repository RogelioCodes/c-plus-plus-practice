//INSTRUCTION
//Look for ** to complete this program 
//The output should match my hw1stackDemo.out 

//=========================================================
//HW#: HW1P1 stack
//Your name: Rogelio Cordova
//Complier:  g++
//File type: client program
//===========================================================

using namespace std;

#include <iostream>
#include <stdlib.h>
#include <string>
#include "stack.h"
//Purpose of the program: ** The user will enter a post-fix expression. 
//The program will display the evaluated result (a number) or an error message describing what is wrong (the algorithm is in Notes-1, so use it as given).

//Algorithm: **
int main()
{
  stack postfixstack;  // integer stack
  string expression;   // user entered expression
  
  cout << "type a postfix expression: " ;
  cin >> expression;
  
  int i = 0;  // character position within expression
  char item;  // one char out of the expression
  
  int box1;  // receive things from pop
  int box2;  // receive things from pop
  int result ; 
  while (expression[i] != '\0')
    {
      try
	{
	  item = expression[i];  // current char
	  
	  //2.  if it is an operand (number), 
	  //    push it (you might get Overflow exception)

	  if(item >=48 && item <= 57 )
	    {
	     int temp =  static_cast<int> (item-48) ; 
	     postfixstack.push(temp) ; 

	    }
	  //3.  else if it is an operator,
	  //    pop the two operands (you might get Underflow exception), and
	  //	apply the operator to the two operands, and
	  //    push the result.

	  else if ( (item == '+') || (item == '-') || (item == '*'))
	    {
	      postfixstack.pop(box1);
	      postfixstack.pop(box2);
	     
	      //cases for different operators follow:
	      if (item == '-' ) result = box2-box1;
	      if(item == '+' ) {
	
		result = box2+box1 ; }
	      if(item == '*' ) result = box2*box1;
	      postfixstack.push(result) ; // pushes the result back into the stack 
	      // ** also do the + and * cases 
	      // ** Finally push the result
	    }
	  else throw "invalid item"; // this makes sure that the operator is + - or *
	} // this closes try
      
      // Catch exceptions and report problems and quit the program now. 
      // Error messages describe what is wrong with the expression.
      catch (stack::Overflow) 
	{cout << "Overflow, too many operands." << endl ; 
	  return 0 ;  }
      catch (stack::Underflow) // for too few operands
	{cout << "Underflow, too few operands" ; 
	  return 0 ;  }
       catch (char const* errorcode) // for invalid item
	{ cout << "Invalid character, try + - or *." << endl ;
	  return 0 ;   }
      
 // go back to the loop after incrementing i
      i++ ; 
    }// end of while
  
  // After the loop successfully completes: 
  // The result will be at the top of the stack. Pop it and show it.
  int bolo ; 
  postfixstack.pop(bolo) ;
  // If anything is left on the stack, an incomplete expression was found.
  // Inform the user.
  if(!postfixstack.isEmpty())
    cout << "Incomplete expression." << endl ; 
  else 
    cout << bolo << " is the final answer/whats left in the stack. " << endl ; 

}// end of the program
