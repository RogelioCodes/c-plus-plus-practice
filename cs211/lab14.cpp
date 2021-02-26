#include <iostream>
#include <string>
using namespace std;
class Stack
{
private:
  char *stackArray; // Pointer to the stack array
  int stackSize; // The stack size
  int top; // Indicates the top of the stack
public:
  // Constructor
  Stack(int);
  // Copy constructor
  Stack(const Stack &);
  // Destructor
  ~Stack();

  // Stack operations
  void push(char);
  void pop(char &);
  bool isFull() const;
  bool isEmpty() const;
  char getTop();
};
//----------------------------------------------------------------
// Constructor: This constructor creates an empty stack.
// The size parameter is the size of the stack.
Stack::Stack(int size)
{
  stackArray = new char[size];
  stackSize = size;
  top = -1;
}
//----------------------------------------------------------------
// Copy constructor
Stack::Stack(const Stack &obj)
{
  // Create the stack array.
  if (obj.stackSize > 0)
    stackArray = new char[obj.stackSize];
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
//----------------------------------------------------------------
// Destructor
Stack::~Stack()
{
  delete [] stackArray;
}
//----------------------------------------------------------------
// Member function push pushes the argument onto
// the stack.
void Stack::push(char val)
{
  if (isFull())
    {
      cout << "The stack is full.\n";
    }
  else
    {
      top++;
      stackArray[top] = val;
    }
}
//----------------------------------------------------------------
// Member function pop pops the value at the top of the stack
// off, and copies it into the variable passed as an argument
void Stack::pop(char &val)
{
  if (isEmpty())
    {
      cout << "The stack is empty.\n";
    }
  else
    {
      val = stackArray[top];
      top--;
    }
}
//----------------------------------------------------------------
// Member function isFull returns true if the stack is full,
// or false otherwise.
bool Stack::isFull() const
{
  bool status;
  if (top == stackSize - 1)
    status = true;
  else
    status = false;
  return status;
}
//----------------------------------------------------------------
// Member function isEmpty returns true if the stack is
// empty, or false otherwise.
bool Stack::isEmpty() const
{
  bool status;
  if (top == -1)
    status = true;
  else
    status = false;
  return status;
}
char Stack:: getTop()
{return top;}
//----------------------------------------------------------------
// Function prototypes
void reverseString (string & s);
bool isBalanced(string s);
int main()
{
  cout << "This program reverses a string\n" ;
  string word; // To hold input string
  cout << "Enter string";
  getline(cin, word);
  cout << "Initial string \n" << word << endl;
  reverseString(word);
  cout << "After Reverse \n " << word << endl;
  cout << "This program determines if a string\n"
       << "containing braces, parentheses, and\n"
       << "brackets is properly delimited.\n\n";
  string str; // To hold input string
  cout << "\nType in a string containing \n"
       << "braces, parentheses, and brackets:\n";

   /*  getline(cin, str);
  if (isBalanced(str))
    {
      cout << "\nThe string is properly delimited.\n\n";
    }
  else
    {
      cout << "\nThe string is not properly delimited.\n\n";
      }*/
  return 0;
}
// function definitions
void reverseString (string & s)
{
  Stack str(s.size());
  // str = s  ; 
    for(int i = 0 ; i < s.size(); i++) 
   str.push(s[i]); 

  for(int i = 0 ; i <= s.size(); i++)
    str.pop(s[i]); 
  //  return s.length() ; 
}
bool isBalanced(string s)
{

}