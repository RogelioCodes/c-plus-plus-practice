//INSTRUCTION:
//Llist class - header file template (by Yoshii) based on Notes-6A
//You must complete the ** parts and then complete llist.cpp
// Don't forget PURPOSE and PARAMETERS
// =======================================================
// HW#: HW3P1 llist
// Your name: Rogelio Cordova
// Compiler:  g++
// File type: headher file
//=======================================================

//----- Globally setting up the alias and struct  ----------------
#ifndef llist_h
#define llist_h
typedef char el_t ;  // elements will be **
//a list node is defined here as a struct Node
// I could have done class Node and add the data members under public
// but it would use too much space
struct Node
{
  el_t Elem;   // elem is the element stored
  Node *Next;  // next is the pointer to the next node
};
//---------------------------------------------------------

class llist
{
 protected:
  Node *Front;       // pointer to the front node
  Node *Rear;        // pointer to the rear node
  int  Count;        // counter for the number of nodes

 public:
  // Exception handling classes
  class Underflow{};
  class OutOfRange{};  // thrown when the specified Node is out of range
  llist ();     // constructor to create a list object
  ~llist();     // destructor to destroy all nodes
  //checks if empty
  bool isEmpty();
  //displays all elements/nodes
  void displayAll();
  //adds to the front
  void addFront(el_t);
  //adds to the rear
  void addRear(el_t);
  //deletes front
  void deleteFront(el_t&);
  //deletes rear
  void deleteRear(el_t&);
  //deletes at specified node
  void deleteIth(int, el_t&);
  //adds before specified
  void addbeforeIth(int, el_t);
};


#endif
