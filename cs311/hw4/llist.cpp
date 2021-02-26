using namespace std;

#include<iostream>
#include"llist.h"

//Constructor
//- initialize Front and Rear to be NULL and Count = 0.
//- This does not create any node.  The new list is empty.
// The Constructor initializes Front to NULL and Count = 0.
llist::llist() {
  Front = Rear = NULL;
  Count = 0; }

//Destructor
//- while the list is not empty, call deleteFront repeatedly to delete all nodes.
//- Please place a cout in this function "calling the llist desctructor."
// Purpose: The Destructor deletes all pointers to the left while the list isn't empty
// and calls deleteFront until all the nodes are deleted.
llist::~llist() {
  cout << "Calling the llist deconstructor " << endl ;
  el_t oldNum;
  while (!isEmpty()) { // delete the node until the list is empty
    deleteFront(oldNum); } }

//IsEmpty checks if the list is empty by checking if both front and rear are  NULL and if count is 0
bool llist::isEmpty() {
  return Front == NULL && Rear == NULL && Count == 0;
  // returns true if front and rear is pointing to NULL or false if count is 0                                        \

}
//Purpose: Displays every element
//Checks if list is empty, if it isnt it makes a temporary pointer at the front of the list
//while front isn't null it'll keep couting elements
void llist::displayAll()
{
  //- Special case: if the list is empty, display [ empty ] ).
  //- Regular: displays each element of the list horizontally starting from
  // Front in [ ].
  if (isEmpty())                 // special case. checks if empty.
    cout  <<  endl; // displays: [ empty ] if empty
   else {                         // regular case. else there is something to display
    Node *P = Front; // have temporary pointer (P) to point to the front of the list
    while (P != NULL) { // goes through list until P == NULL
      cout << "[" << P->Elem << "]" ; // displays each element in the list from front to read
      P = P->Next; //moves the pointer to the next node
       }
     cout << endl;  
     }
}

//Adds a node to the rear of the list
// Checks if there is any elements in the list, if it is empty we add the node
// to the front and the rear. If the list is not empty the node is added to rear
void llist::addRear(el_t NewNum) {
  /* 2 cases:
    - Special case: if this is going to be the very first node, you must
      create a new node and make Front and Rear point to it. Place NewNum and
      Count is updated.
    - Regular: adds a new node at the rear and puts NewNum in the Elem field
    of this new node. Count is updated. */

  //special case
  //if this is going to be the very first node, creates a new node and makes Front and Rear point to it.
  // NewNum is placed inside  and Count is updated.
  if (Front == NULL){
    Front = new Node;  Rear = Front;   }
  else {
    // else new node is added to the rear of the list
    // Regular case
    Rear->Next = new Node; //  rear->next is created
    Rear = Rear->Next;   }  // sets rear to rear->next
  Rear->Elem = NewNum; // sets rear element = newNum
  Rear->Next = NULL;   // sets rear->next to null
  Count++; }

//Purpose: Adds an element to the front of the list
// Checks if the list is empty and creates a new node that is then added to the front of the list.
// if the list isn't empty a temp variable is created in order to rearrange the list.
void llist::addFront(el_t NewNum) { //NewNum is the element being passed to the front of the list
  /* 2 cases:
- Special case: if this is going to be the very first node, you must
   create a new node and make Front and Rear point to it. Place NewNum and
   Count is updated.
- Regular: add a new node to the front of the list and
Count is updated.  */

  // special case
  if (Front == NULL) {    // if list is empty...
    Front = new Node;     // a new front node is created
    Front->Elem = NewNum; // front element is set to newNum
    Front->Next = NULL;   // front-> next is set to null
    Rear = Front; }
  else { //regular case, if list isnt empty
    Node *temp = new Node ;  // a new tsmp node is created
    // temp = new Node;
    temp ->Next = Front;      // sets temp->next to front
    Front = temp ;            // set fronts = the the temp variable
    Front->Elem = NewNum; }// The front element is now set to newNum
  Count++; }
// Purpose: Deletes the front node. Starts by checking if the list is empty, if empty throws Underflow
//else if checks if count is = to 1. If it is oldNum is set to the front element and front is deleted.
// else(means theres more than one element) a temporary variable is created and set to front->next to rearrange things.
void llist::deleteFront(el_t &OldNum) { //oldNum is the number being deleted
  /*3 cases:
  - Error case: if the List is empty, throw Underflow
  - Special case: if currently only one Node,
     give back the front node element through OldNum (pass by reference) and
     make sure both Front and Rear become NULL. Count is updated.
  - Regular: give back the front node element through OldNum (pass by reference)
  and also removes the front node.  Count is updated.  */
  //error case
  if (isEmpty())
    throw Underflow(); //Error case: underflow is thrown when the list is empty
  else if (Count == 1) { //Special case:  checks if there is only one element in the list
    OldNum = Front->Elem; // set the returned variable to the old elem in the node
    delete Front;    // deletes the front element
    Front = NULL; Rear = NULL ;    // sets front and rear to NULL
    Count-- ; }
  else { // Regular: if there is more than one node/elem
    OldNum = Front->Elem; // oldNum is set to the Front->element, the node that is returned when there is more than \
one element
  Node *temp;    // the temp node is created to store front ;
 temp = Front->Next; // make temp node->next point to new front
 delete Front;         // deletes whatever is in the front element
 Front = temp;       //the new front is now front.
 Count--; }}
// Purpose deletes the rear element and passes it back
// If empty throws error, else if there is only one node
// the rear node is given back through OldNum and then front and rear are set to NULL
// If there is more than one node the rear node elemt is given back through OldNum and the rear node is also remove\.
void llist::deleteRear(el_t &OldNum) {  //oldNum stores the element rearNum
  /*3 cases:
  - Error case: if empty, throw Underflow
  - Special case: if currently only one node,
     give back the rear node element through OldNum (pass by reference) and
     make sure both Front and Rear become NULL. Count is updated.
  - Regular: give back the rear node element through OldNum (pass by reference)
  and also remove the rear node. Count is updated.*/
  if (isEmpty())         //Error case: if empty throws error
    throw Underflow();
  else if (Count == 1) { // Special CaseL if there is only one node
    OldNum = Rear->Elem; // the deleted element is saved
    delete Rear;         // deletes rear
    Front = NULL; Rear = NULL;         // sets front and rear to NULL
    Count--;  }
  // Regular case:
  else {                 // Regular: if there is more than one element
    OldNum = Rear->Elem; // saves old elem
    Node *temp = Front;     // make a temp variable = front
    while (temp->Next != Rear) // move through the list until the temp->next is rear
      temp = temp->Next;

    delete Rear;
    Rear = temp;          // temp is now rear
    Rear->Next = NULL; // sets rear->next = to NULL
    Count--; }}

// Purpose: deletes a node/elem
// checks if the element exists then throws an error depending on whether or not the number is valid
// calls deleteFront when I is 1 or deleteRear when I is Count
//delete the Ith node (When I starts out at 1).  delete the Ith node (I starts out at 1).  Count is updated.
void llist::deleteIth(int I, el_t &OldNum) {//the node being deleted and the one to hold an element
  /*
4 cases:
- Error case:
  If I is an illegal value (i.e. > Count or < 1) throw OutOfRange.
- Special cases: this should simply call deleteFront when I is 1 or
  deleteRear when I is Count
- Regular: delete the Ith node (I starts out at 1).  Count is updated.
<see the template loops in the notes to move 2 pointers to the right nodes;
and make sure you indicate the purposes of these local pointers>
  */
  if (I > Count || I < 1)   //Error case
    throw OutOfRange();
  else if (I == 1) // special case
    deleteFront(OldNum);
  else if (I == Count) //special case
    deleteRear(OldNum);
  else {             // else its in the middle
    Node *tmp = Front;
    Node *tmpDelete = Front->Next; // node after front
    for (int x = 1; x < I - 1; x++) { // goes through the list until we find -1
      tmp = tmp->Next;  tmpDelete = tmpDelete->Next; }
    tmp->Next = tmpDelete->Next; // have tmp->Next point to the next thing to delete
    OldNum = tmpDelete->Elem; // saves the old element
    delete tmpDelete;         // deletes the node
    Count--;                }}

//Inserts before the specified element
void llist::addbeforeIth(int I, el_t newNum) { // the node being specified and where the newNum is saved
  /*4 cases
          : -Error case : If I is an illegal
                          value(i.e.> Count + 1 or < 1) throw OutOfRange.-
          Special cases : this should simply call addFront when I is 1 or
      addRear when I is Count +
                  1 - Regular : add right before the Ith node.Cout if updated.<
              see the template loops in the notes to move
              2 pointers to the right nodes
          and make sure you indicate the purposes of these local pointers >
  */
  if (I > Count + 1 || I < 1) // Error case: If I is an illegal  value(i.e.> Count + 1 or < 1) throw OutOfRange.-
    throw OutOfRange();
  else if (I == 1)  // Special cases : this should simply call addFront when I is 1 or      addRear when I is Count + 1
  addFront(newNum);
  else if (I == Count + 1)
    addRear(newNum);
  else {
    Node *tmp1 = Front; // make a temp node at the front to move it through the    list
    Node *tmp2 = Front;
    for (int x = 1; x <= I - 1; x++) { // move through list, one node at a time
      tmp2 = tmp1;
      tmp1 = tmp1->Next;
    }
    tmp2->Next = new Node;     // make a new node at tmp2->next
    tmp2->Next->Next = tmp1;   // set the new tmp2->next to the temp node
    tmp2->Next->Elem = newNum; // elem is set
    Count++;                // increment count
  }
  displayAll();
}
