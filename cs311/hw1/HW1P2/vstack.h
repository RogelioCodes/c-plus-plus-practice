
// =======================================================
// HW#: HW1P2 stack
// Your name: Rogelio Cordova
// Compiler:  g++ 
// File type: headher file 
//=======================================================

#include <vector>

//----- Globally setting up the alias ----------------

typedef int el_t;      // the el_t type is ** for now
                      // el_t is unknown to the client
//-------------------------------------------------------


class stack
{ 
  
 private: // to be hidden from the client
  vector <el_t> el   ;        // el is  a vector of el_t's
  
 public:
   // the rest will be exactly the same as HW1P1. Therefore
   // the client should not have to change at all.

  class Overflow{};   // thrown when the stack overflows
  class Underflow{};  // thrown when the stack underflows

  stack();   // constructor to create an object
  ~stack();  // destructor  to destroy an object

  // PURPOSE: if not full, enters an element at the top;
  //          otherwise throws an exception - Overflow
  // PARAMETER: pass the element to be pushed
  void push(el_t);

  // PURPOSE: if not empty, removes and gives back the top element;
  //          otherwise throws an exception - Underflow
  // PARAMETER: provide variable to receive the popped element (pass by ref)
  void pop(el_t&);

  // PURPOSE: if not empty, gives the top element without removing it;
  //          otherwise, throws an exception - Underflow
  // PARAMETER: provide a holder (elem) for the element (pass by ref)
  void topElem(el_t&);

  // ** Must add good comments for each function - See Notes1B

  //PURPOSE: Checks if the function is empty
  //returns true if stack is empty else false
  bool isEmpty();

  //PURPOSE: checks top and returns true if full, false otherwise.
  // In the comment make you sure to define empty in terms of top.
  bool isFull();

  //PURPOSE: Prints all the elements in the stack. dislayAll calls isEmpty and if true, displa\ys [ empty ].
  //          Otherwise, diplays the elements vertically.
  void displayAll();

//PURPOSE: pops all elements from the stack to make it empty if it is not empty yet.
 void clearIt();

};

