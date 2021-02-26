//INSTRUCTION
//Look for **. (do control-S)
//Update the comments using the HOW TO COMMENT file, 
//  complete exception handling and 
//  finish ClearIt to make this complete - Yoshii (CS311)
// When done, compile stack.cpp to make sure there are no syntax errors.
  
//=========================================================
//HW#: HW1P2 vector stack
//Your name: Rogelio Cordova
//Complier:  g++
//File type: stack implementation file
//=========================================================

using namespace std;  
#include <iostream>
#include "vstack.h"


stack::stack()
{}
  
//PURPOSE:  Destructor does not have to do anything since this is a static array.
stack::~stack()
{ clearIt(); }//keeps vector empty  

  
//PURPOSE:  checks size and returns true if empty, false otherwise.
bool stack::isEmpty()
{if(el.size() == 0)
    return true ;
  else return false ; 
}
    
//PURPOSE: checks size and returns true if full, false otherwise.
bool stack::isFull(){ 
    return false; }
  
//PURPOSE: calls isFull and if true, throws an exception (Overflow)
//   Otherwise, adds an element to el after pushing back
//PARAMETER: pass the element (elem) to be pushed 
 void stack::push(el_t elem)
 { if (isFull()) 
     throw Overflow() ;  
   else 
     el.push_back(elem);
}
 
 //PURPOSE: calls isEmpty and if true, throws an exception (Underflow)
 //  Otherwise, removes an element from el and gives it back.
 //PARAMETER: provide a holder (elem) for the element popped (pass by ref)
 void stack::pop(el_t& elem)
 { if (isEmpty()) 
     throw Underflow() ; 
   else { 
     elem = el[el.size()-1];
     el.pop_back() ; }} //gives you
 
// PURPOSE: calls isEmpty and if true, throws an exception (underflow)
//    Otherwise, gives back the top element from el.
//PARAMETER: provide a holder (elem) for the element (pass by ref)
 void stack::topElem(el_t& elem)
 { if (isEmpty()) 
     throw Underflow() ;
   else { elem = el[el.size()-1]; }
 }
 
//PURPOSE: dislayAll calls isEmpty and if true, displays [ empty ].
//          Otherwise, diplays the elements vertically.
 void stack::displayAll()
 {  if (isEmpty()) cout << "[ empty ]" << endl;
   else for (int i=el.size()-1; i>=0; i--)
     { cout << el[i] << endl; }
   cout << "--------------" << endl;
 }
 
 
//PURPOSE: pops all elements from the stack to make it empty if it is not empty yet.
 void stack::clearIt(){
   el_t s ; //s is the local variable of type el_t. s is passed to pop.        
   while (!isEmpty()) // while its not empty it will pop 
     { pop(s);}
}
 

