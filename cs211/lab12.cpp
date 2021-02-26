#include <iostream>
#include<string>
using namespace std;
class DLL;
class Node
{
  friend class DLL;
private:
  string firstName;
  string lastName;
  string phoneNumber;
  Node * next;
  Node * previous;
};
class DLL
{
private:
  Node * head;
    Node * current ; 
public:
  DLL();
  DLL(const DLL&); // optional
  ~DLL();
  void insert(string, string, string);
  void print();
  void searchByName(string, string);
  void remove(string, string);
};
int n = 0 ; 
//--------------------------------------------
// the default constructor
DLL::DLL()

{
  head = nullptr; 
  current = nullptr ; 
  /*
  head -> firstName = "bolo" ;
  head-> lastName = "nope" ; 
  head -> phoneNumber = "aaaaaa" ;
  head -> nextRecord = nullptr ; 
  head  -> previousRecord = nullptr ; 
  */    
  /* head = new Node;
   head -> firstName = nullptr ; // This number will never be processed
  head -> nextRecord = NULL;
  */
}
//--------------------------------------------
// the copy constructor: optional
DLL::DLL(const DLL& source)
{
  // head=source.head ;

}
//--------------------------------------------
// the destructor
DLL::~DLL()
{
}
//--------------------------------------------
// print the linked list
void DLL::print ()
{
  Node * nodePtr ;
  
  nodePtr = head ;
  while(nodePtr -> next != head  )
    {
      n++ ; 
      cout << "Person # " << n << ": " << nodePtr-> firstName << " " << nodePtr-> lastName << " " << nodePtr -> phoneNumber << endl  ;
      nodePtr = nodePtr-> next ;

    }
  n++ ; 
  cout << "Person # " << n << ": " << nodePtr-> firstName << " " << nodePtr-> lastName << " " << nodePtr -> phoneNumber << endl  ;


  cout << endl ;

}
//--------------------------------------------
// search for a particular person in the list and print the
// corresponding phone number
void DLL::searchByName (string fName, string lName)
{
   int n =2 ; 
  Node *temp = head ;
  string lala = fName ;

  // string xtra = substr(nodeptr->name,size()-1)
  if(temp->firstName == fName)
    {
      //      n = 1 ; 
      cout<<"Found " <<  temp-> firstName <<  " " << temp-> lastName << " at # " <<n<< endl ;
   
    }
  else
    {
      temp = head -> next ;
      while(temp->firstName  != fName && temp ->next != head)
        {
          n++;
          temp=temp->next;

        }

    }
  if(temp->firstName != fName  && temp ->next == head)
    {
      cout<<"Person " << lala << " was not found" << endl ;

    }
  if(temp->firstName ==fName)
    {

      cout<<"Found " << temp->firstName<<" " << temp-> lastName << " at # " << n <<  endl ; 

    }

}
//--------------------------------------------
// create a node and insert it in the list in order (list
// should be sorted by the person’s first name)
void DLL::insert (string fName, string lName, string phone)
{
  string lala ; //lala is a copy of sName
  Node *newNode = new Node ;


    newNode -> firstName = fName ;
  newNode -> lastName = lName;
  newNode -> phoneNumber = phone ;
  

  //  newNode->name  = newNode -> name.substr(27, newNode ->name.size()-1);

  newNode-> next = NULL ;
  newNode -> previous = NULL ;

  if(head == nullptr )// checks that head is not null
    {
      head = newNode ; //head point to newNode
      newNode->next = head ;
      newNode-> previous = head ;
    }

  else
    {
      current = head ;

      while(current->next != head && newNode->firstName  > current-> firstName) //current -> next!= nullptr)// && sName.compare(current->name) > 0)
	{
	  current = current-> next ;
	}
      if(current == head || newNode-> firstName< head ->firstName)
	{
          newNode -> next = current ;
          newNode -> previous  = head -> previous ;
          newNode -> previous -> next = newNode ;
          current -> previous = newNode ;
          head = newNode ;
	          lala = fName ; //lala is copied here
	  // lala = lala.erase(0,27) ; //erasing the stuff before name "c::..."

          cout << "Adding  " <<  lala <<  endl ;
        }
      else
        {
          if(current -> firstName < newNode->firstName )
            {
              newNode -> previous = current ;
              newNode -> next = current -> next ;
              newNode -> next -> previous = newNode ;
              current -> next = newNode ;
            }
          else
            {

              newNode -> next = current ;
              newNode -> previous = current -> previous ;
              newNode -> previous -> next = newNode ;
              current -> previous = newNode ;

            }

          lala = fName ;
	  // lala = lala.erase(0,27) ;
          cout << "Adding  "<< lala  <<  endl ;
        }
    }

  
  }
//--------------------------------------------
// remove a person's record from the list
void DLL::remove (string fName, string lName)
{
  int n = 1 ;
  string lala = fName ;
  Node *temp  = head ;
  Node *dummy ;
  Node *current ; 

  // temp = temp-> next ; 
  
  if(temp -> firstName == fName)
    {
      delete head ;
      head = NULL ;
      current = NULL ;

      /* if(head -> next ==head)
        {
          delete head ;
          head = NULL ;
          current = NULL ;
	  }*/
  //      else
	// {

	  cout << "Deleting person #" << n << ": " << temp-> firstName << ", " << temp-> lastName << endl ; 
	  n++ ;
	 

	  dummy = head -> next ; //DUMMY IS USED AS ANOTHER TEMPORARY VARIABLE THE HOMIE MAKES IT EASY TO SAVE DATA WHILE DELETING STUFF
	  dummy -> previous = head -> previous ;
	  head -> previous = head -> next;
	  delete head ;
	  head = dummy ;
	  return ;
	  //}

    }
    else
   {
        temp = head -> next ;
      while(temp-> firstName  != fName && temp ->next != head) //LOOKING FOR THE SONG NAME STOPS WHEN THE SONG NAME IS FOUND
        {
          n++ ;
          if(n>=16)
            n = 16 ;

          temp=temp->next; //MOVES UP

        }
       }
  if(temp-> firstName == fName)
    {
      // n++ ;
      cout << "Deleting person #" << n << ": " << temp-> firstName << ", " << temp-> lastName << endl ;


      // if(temp -> previous) //checks both sides
      temp -> previous -> next = temp -> next ;

      //      else if(temp -> next) //checks both sides

      temp -> next -> previous = temp -> previous ;

      delete temp ;

    }
  else
    cout<<"Person " << lala << " was not found" << endl ;



}
//--------------------------------------------
int main ()
{
  DLL list1;
  list1.insert ("Mayssaa", "Najjar", "878-635-1234");
  list1.insert ("Jim", "Meyer", "337-465-2345");
  list1.insert ("Joe", "Didier", "352-654-1983") ;
  //  cout << "test" << endl ; 
  list1.insert ("Yara", "Sarkis", "858-694-1787");
  list1.insert ("Nancy", "Garcia", "617-227-5454");

  list1.print();
  list1.searchByName ("Nancy", "Garcia");
      list1.remove ("Mayssaa", "Najjar");
  list1.remove ("Yara", "Sarkis");
  list1.remove ("Jim", "Meyer");
    list1.print();
  /*
  // this part is optional
  DLL list2(list1);
  list2.print();
  */
  return 0;
}
