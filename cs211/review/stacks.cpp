#include<iostream>
#include<iomanip> 


using namespace std ; 

class IntStack
{
private:
  int *stackArray;  // Pointer to the stack array
  int stackSize;    // The stack size
  int top;          // Indicates the top of the stack

public:
  // Constructor
  IntStack(int);

  // Copy constructor
  IntStack(const IntStack &);

  // Destructor
  ~IntStack();
   
  // Stack operations
  void push(int);
  void pop(int &);
  bool isFull() const;
  bool isEmpty() const;
}; 

//***********************************************
// Constructor                                  *
// This constructor creates an empty stack. The *
// size parameter is the size of the stack.     *
//***********************************************

IntStack::IntStack(int size)
{
  stackArray = new int[size]; 
  stackSize = size; 
  top = -1;
}

//***********************************************
// Copy constructor                             *
//***********************************************

IntStack::IntStack(const IntStack &obj)
{
  // Create the stack array.
  if (obj.stackSize > 0)
    stackArray = new int[obj.stackSize];
  else
    stackArray = nullptr;

  // Copy the stackSize attribute.
  stackSize = obj.stackSize;

  // Copy the stack contents.
  for (int count = 0; count < stackSize; count++)
    stackArray[count] = obj.stackArray[count];

  // Set the top of the stack.
  top = obj.top;
}

//***********************************************
// Destructor                                   *
//***********************************************

IntStack::~IntStack()
{
  delete [] stackArray;
}

//*************************************************
// Member function push pushes the argument onto  *
// the stack.                                     *
//*************************************************

void IntStack::push(int num)
{
  if(isFull())
    cout << "Full. " << endl ; 
  else 
    {
      top ++ ; 
      stackArray[top] ; 
    }
}

//****************************************************
// Member function pop pops the value at the top     *
// of the stack off, and copies it into the variable *
// passed as an argument.                            *
//****************************************************

void IntStack::pop(int &num)
{
  if(isEmpty())
    cout << "Stack is empty" << endl ; 
  else 
    {
      num = stackArray[top]; 
      top-- ; 
    }
}

//***************************************************
// Member function isFull returns true if the stack *
// is full, or false otherwise.                     *
//***************************************************

bool IntStack::isFull() const
{
  bool status ; 
  if(top == stackSize - 1) 
    status = true ; 
  else 
    status = false ; 

  return status ; 
}
//****************************************************
// Member funciton isEmpty returns true if the stack *
// is empty, or false otherwise.                     *
//****************************************************

bool IntStack::isEmpty() const
{
  bool status ; 
  
  if(top == -1) 
    status = true ; 
  else 
    status = false ; 

  return status ; 

}
