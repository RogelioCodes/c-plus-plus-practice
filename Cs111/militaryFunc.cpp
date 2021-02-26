#include <iostream>
using namespace std;

void showProgInfo() ;
void getInfo(string& name, char& y, int& age);
bool verifyEligibility(int age, char y);
void printLetter(string name, bool verify);
int main ()
{
  string name;
  char y;
  int age;

  showProgInfo();


  getInfo(name, y, age);
  bool verify = verifyEligibility(age, y);
  printLetter(name, verify);

  return 0;
}

void showProgInfo()
{
  cout << endl ; 
  cout << "**********************************************************************\n" ;
  cout << "This program will tell you if you are eligible to join to the military.\n" ;
  cout << "**********************************************************************\n" ;
  cout << endl ; 
}


void  getInfo(string& name, char& y, int& age)
{
  cout << "Enter first name: ";
  cin >> name;
  cout << "Enter gender: ";
  cin >>  y;
  cout << "Enter age: ";
  cin >> age;
}


bool verifyEligibility(int age, char y)
{
  bool even;

  if(y == 'm' && age >= 18)
    even = true;
  else
    even = false;
  return even;
}


void printLetter(string name, bool verify)
{

  if(verify == true)
    {

      cout << "Dear " << name << " please consider joining the military." << endl;
    }
  else
    {
      cout << "Thank you for applying." << endl;
    }
}
