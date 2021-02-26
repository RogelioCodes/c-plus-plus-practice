#include <iostream>
#include<string>
using namespace std;
class LL;
class Node
{
  friend class LL;
private:
  string firstName;
  string lastName;
  string phoneNumber;
  Node * nextRecord;
};
class LL
{
private:
  Node * head;
  void destroy();
public:
  LL();
  LL(const LL&);
  ~LL();
  void append(string, string, string);
  void insertAtBeginning(string, string, string);
  void insertAtPos(string, string, string, int);
  void print();
  void searchByName(string, string);
  void updateNumber(string, string, string);
  void insertNode(string, string , string );
  void removeRecord(string, string);
  void reverse();
  void func1(Node* head) ;

};
//--------------------------------------------
// the default constructor
LL::LL()
{
   head = nullptr ; 

}

//--------------------------------------------
// the copy constructor
LL::LL(const LL& source)
{
  head=source.head ; 
 
  //  head = source ;  //copys the linklist 
  Node *nextRecord = nullptr ; 
  head = nullptr ; 
  nextRecord = source.head ; 
  
  while(nextRecord)
    {
      // append(nextRecord -> phoneNumber) ;
	nextRecord = nextRecord -> nextRecord ; 
    }

  
}
//--------------------------------------------
// the destructor
LL::~LL()
{

}
//--------------------------------------------
// print the linked list
void LL::print ()
{
  Node * nodePtr ;
    nodePtr = head ; 
    while(nodePtr )
    {

      cout << nodePtr-> firstName << ", " << nodePtr-> lastName << ", " << nodePtr -> phoneNumber ; 
           nodePtr = nodePtr-> nextRecord ; 
	   cout << endl ; 	    
    }
    cout << endl ; 

    //    func1(head)  ;

}
//--------------------------------------------
// search for a particular person in the list and print the
// corresponding phone number
void LL::searchByName (string fName, string lName)
{
  Node* prev = new Node();
  Node* current = new Node();
  Node* temp = new Node(); 
  Node* searchnumber = nullptr;
  temp = nullptr ; 
  temp = head;
  current = head;
  while (current != NULL && current->firstName != fName)
    {
      temp = current;
      current = current->nextRecord;
    }
  if (current != NULL)
    {
      searchnumber = current;
      current = current->nextRecord;
      cout  << searchnumber -> firstName << " " << searchnumber -> lastName << " Found" << endl ;
    }
  else
    {
      cout << fName << " " << lName <<  " was not found." << endl ;
    }
}
//--------------------------------------------
// create a node and insert the node on the top of the
// linked list before the first node.
void LL::insertAtBeginning (string fName, string lName, string
			    phone)
{
  //1: make new node 
  //2: make new node point to head 
  //3:
  // Node *tmp ; 
 
  Node * tmp = new Node; 
  tmp -> nextRecord = nullptr; 
  tmp -> firstName = fName  ; 
  tmp -> lastName = lName ; 
  tmp -> phoneNumber = phone ; 
  tmp -> nextRecord = head ; 
  head = tmp ;
  
}
//--------------------------------------------
// create a node and appends the node at the end of the
// linked list after the last node.
void LL :: append(string fName, string lName, string phone)
{
  /*  Node *newNode ; 
  Node *nodePtr ; 
  
  newNode = new Node ; 
  newNode -> firstName = fName ; 
  newNode -> lastName = lName ; 
  newNode -> phoneNumber = phone ; 
  newNode -> nextRecord = nullptr ; 

    if(!head)
    head = newNode ; 
else 
    {
      nodePtr = head ; 

      while(nodePtr->nextRecord) 
	nodePtr = nodePtr ->nextRecord ; 

      nodePtr -> nextRecord = newNode ; 
    }
  */

  Node *newNode;  // To point to a new node
  Node *nodePtr;  // To move through the list

  // Allocate a new node and store num there.
  newNode = new Node;
  newNode -> firstName = fName ;
  newNode -> lastName = lName ;
  newNode -> phoneNumber = phone ;
  newNode -> nextRecord = nullptr ;


  // If there are no nodes in the list
  // make newNode the first node.
  if (!head)
    head = newNode;
  else  // Otherwise, insert newNode at end.
    {
      // Initialize nodePtr to head of list.
      nodePtr = head;

      // Find the last node in the list.
      while (nodePtr->nextRecord)
	nodePtr = nodePtr->nextRecord;

      // Insert newNode as the last node.
      nodePtr->nextRecord = newNode;
    }

}
//--------------------------------------------
// create a node and insert the node at the position pos
void LL::insertAtPos (string fName, string lName, string phone, int		      pos)
{  
  Node* prev = new Node();
  Node* curr = new Node();
  Node* newNode = new Node();
  newNode->firstName = fName;
  newNode->lastName = lName;
  newNode->phoneNumber = phone;
  int tempPos = 0;   // Traverses through the list

  curr = head;      // Initialize current to head;
  if(head != nullptr)
    {
      while(curr->nextRecord != nullptr && tempPos != pos)
        {
          prev = curr;
          curr = curr->nextRecord;
          tempPos++;
        }

      // Call function to addNode from head;
      if(pos==0)
        {
          cout << "Adding at Head! " << endl;
          insertAtBeginning ( fName, lName, phone);
        }

      // Call function to addNode at tail;
      else if(curr->nextRecord == nullptr && pos == tempPos+1)
        {
          cout << "Adding at Tail! " << endl;
          append( fName, lName, phone);
        }

      //Position not valid
      else if(pos > tempPos+1)
        cout << "Position is out of bounds " << endl;
    
      else
        {
	  prev->nextRecord = newNode;
          newNode->nextRecord = curr;
          cout << "Node added at position: " << pos << endl;
        }
    }
  else
    {
      head = newNode;
      newNode->nextRecord=nullptr;
      cout << "Added at head as list is empty! " << endl;
    }
  
}

void LL::insertNode(string fName, string lName, string phone)
{
  Node *newNode;// A new node
  Node *nodePtr;// To traverse the list
  Node *previousNode = nullptr;// The previous node

  // Allocate a new node and store num there.
  newNode = new Node;
  newNode->firstName = fName;
  newNode -> lastName = lName ; 
  newNode-> phoneNumber = phone ; 
  // If there are no nodes in the list
  // make newNode the first node
  if (!head)
    {
      head = newNode;
      newNode->nextRecord = nullptr;
    }
  else  // Otherwise, insert newNode
    {
      // Position nodePtr at the head of list.
      nodePtr = head;

      // Initialize previousNode to nullptr.
      previousNode = nullptr;

      // Skip all nodes whose value is less than num.
      while (nodePtr != nullptr && nodePtr->firstName < fName)
	{  
	  previousNode = nodePtr;
	  nodePtr = nodePtr->nextRecord;
	}

      // If the new node is to be the 1st in the list,
      // insert it before all other nodes.
      if (previousNode == nullptr)
	{
	  head = newNode;
	  newNode->nextRecord = nodePtr;
	}
      else  // Otherwise insert after the previous node.
	{
	  previousNode->nextRecord = newNode;
	  newNode->nextRecord = nodePtr;
	}
    }
}


//--------------------------------------------
// remove a person's record from the list
void LL::removeRecord (string fName, string lName)

{

  Node *nodePtr;       // To traverse the list
  Node *previousNode;  // To point to the previous node

  // If the list is empty, do nothing.
  if (!head)
    return;
   
  // Determine if the first node is the one.
  if (head->firstName == fName)
    {
      nodePtr = head->nextRecord;
      delete head;
      head = nodePtr;
    }
  else
    {
      // Initialize nodePtr to head of list
      nodePtr = head;

      // Skip all nodes whose value member is 
      // not equal to num.
      while (nodePtr != nullptr && nodePtr->firstName != fName)
	{  
	  previousNode = nodePtr;
	  nodePtr = nodePtr->nextRecord;
	}

      // If nodePtr is not at the end of the list, 
      // link the previous node to the node after
      // nodePtr, then delete nodePtr.
      if (nodePtr)
	{
	  previousNode->nextRecord = nodePtr->nextRecord;
	  delete nodePtr;
	}
    }


  

}
//--------------------------------------------
// Update a person's phone number
void  LL:: updateNumber(string fName, string lName, string newPhone)
{
   Node * current = nullptr ; 
  Node * prevNode = nullptr ; 

  current = head ; 

  while(current != nullptr)
    {
      prevNode = current ; 

      if(current -> firstName == fName && current -> lastName == lName)
	{
	  current -> phoneNumber = newPhone ; 
	  break ; 
	}
       
      current = current -> nextRecord ; 
      }
}
//--------------------------------------------
// Destroy all the nodes in the list
void LL::destroy()
{
   Node * temp = head ; 
  while(temp != nullptr)
    {
      head -> nextRecord = temp-> nextRecord ; 
      temp -> nextRecord = nullptr ; 
      delete temp ; 

      temp = head-> nextRecord ; 
    }
    head = temp ; 
}
//--------------------------------------------
// traverse the list and reverse the list nodes so the last node
// becomes the first and the first node becomes the last one
void LL:: reverse()
{

  struct Node* prev   = NULL;
  struct Node* current = head;
  struct Node* next;
  while (current != NULL)
    {
       next = current->nextRecord;  
      current->nextRecord = prev;   
      prev = current;
      current = next;
    }
  head = prev;

}
//--------------------------------------------

void LL:: func1(Node* head)
{
  if(head == NULL)
    return;
  func1(head->nextRecord);
  cout << head->firstName << " " ;
  cout << endl ; 
}


int main ()
{
  LL list1;
  //  Node *head ; 
  //Node * nodePtr = head ; 
  list1.insertNode ("Mayssaa", "Najjar", "878-635-1234");
    list1.insertNode ("Jim", "Meyer", "337-465-2345");
  list1.insertNode ("Joe", "Didier", "352-654-1983");
  list1.insertNode ("Adam", "James", "202-872-1010");// 2);
   list1.insertNode("Nancy", "Garcia", "617-227-5454");
 cout << "PRINNNNT" << endl ; 
  list1.print();
 
  
  list1.searchByName ("Nancy", "Garcia");
  list1.searchByName ("Jamie", "Garcia");
  list1.updateNumber ("Nancy", "Garcia", "989-876-1234");
  list1.updateNumber ("Jamie", "Garcia", "345-467-1234");
  list1.removeRecord ("Mayssaa", "Najjar");
  list1.print();

  
  list1.reverse();
  list1.print();
  LL list2(list1);
  list2.print();
  
  
  return 0;
}
