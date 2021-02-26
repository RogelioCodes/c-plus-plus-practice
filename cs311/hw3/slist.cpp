// HW#: HW3P2 slist                                                                                                                                                                                 
// Your name: Rogelio Cordova                                                                                                                                                                           
// Compiler:  g++                                                                                                                                                                                       
// File type: cpp file                                                                                                                                                                              
//=======================================================      
#include<iostream> 
#include"slist.h" 
using namespace std ; 

//Constructor 
slist :: slist() 
{
  Front = NULL ; 
  Rear = NULL ; 
  Count = 0 ; 
}

slist::slist(const slist& OtherOne){
  this->Front = NULL;
  this->Rear = NULL;
  this->Count = 0;

  // this-> object has to be built up by allocating new cells (**)
  Node* ptr;  // local pointer for OtherOne
  ptr = OtherOne.Front;
  while (ptr != NULL)  // This uses a loop which repeats until you reach the end of OtherOne.
    { this->addRear(ptr->Elem);    //P’s element is added to this->
      ptr = ptr->Next; }}              // Go to the next node in OtherOne
    
// searches through the list to see if any node contains the key.                                                                                                                                      
// If so, return its position (>=1). Otherwise, returns 0 ;                  
int slist:: search(el_t key)
{
  int pos= 0 ; 
  Node* prev = new Node; //a new node is created to keep track of the previous node
  Node* current = new Node;

  current = Front; //current now holds front
  while (current != NULL)
    {
      prev = current ; //keeps going through until current is NULL
      pos++ ; //position is incremented
      if(current->Elem == key)//if found
	{
	  cout << current-> Elem << " found at position: " << pos <<  endl  ; 
	  break ; 	}
      current = current -> Next ;  //keeps it moving forward 
      if(current == NULL) //if not found 
	{
	  cout << key << " Not found." << endl ;  
	  return 0 ; }}
  cout << endl ; }
//Goes through the list
void slist::replace(el_t Key,  int I)
{
  
  Node* prev = new Node; //a new node is created to keep track of the previous node                                                                                                                     
  Node* current = new Node;

  current = Front; //current now holds front                                                                                                                                                              
  if(current != NULL && I <= Count && I > 1 ) //if found
    { for(int i = 1 ; i < I ; i++) //moves along the list
	current = current-> Next ;   
      current-> Elem = Key ;    }
  if(current == NULL || I > Count) //if invalid 
    throw OutOfRange() ;}


//Makes both slists have the same elements without sharing address
//checks to see if list already has the same address, if the caller list isn't empty 
//empty it. Then using while look we add the elems from the callee list to the caller list
slist& slist::operator=(const slist& OtherOne) //the other list that we get the elements from 
{
  //check to make sure we have different objects 
  //compare the pointers to the objects
  el_t t; //temp
  if(&OtherOne != this) //if not the same
    {
      //this->object has to be emptied first
      while(!this->isEmpty())
        this->deleteRear(t);
      //this->object has to be built up by allocating new cells(**)
      Node* ptr; //local pointer for OtherOne
      ptr = OtherOne.Front;
      while(ptr!= NULL) //This uses a loop which repeats until you reach the end of OtherOne
        {
	  this->addRear(ptr->Elem); //P's element is added to this ->
	  ptr = ptr->Next;    //go to the next node in OtherOne
        } }
  return *this; //return the result unconditionally
}

//Compares the elements in the list, checks to see if they are the same 
// checks that the lists have the same number of elements 
// If they have the same number of elements goes through each element until one doesn't match 
//if all match returns true
bool slist::operator==(const slist& OtherOne) //list being compared
{
   if (this->Count == OtherOne.Count) {    //compares # of elements
    Node *ptr = OtherOne.Front; //set p to OtherOne.Front
    Node *I = this->Front; //set I to this front
    while(ptr != NULL && I != NULL) { //while havent reached the end to either of the lists
      if (I->Elem != ptr->Elem) //if an elem doesnt match its not the same
        return false;
      I = I->Next; //otherwise continue to go through the lists
      ptr = ptr->Next; }
    return true;   } //elements match

  return false;   //if the counts are different return false
} 
