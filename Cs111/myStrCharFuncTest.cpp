#include <iostream>
using namespace std;
#include "myStrCharFunc.h"

int main()
{
  char wd[10] = "Hello" ;
  cout << wd << endl; // Hello
  myStrcpy(wd, "Hi");
  cout << wd << endl; // Hi
  cout << myToUpper('a') << endl; //A
  cout << myToUpper('t') << endl; //T
  cout << myToUpper('Z') << endl; //Z
  cout << myStrlen(wd); // 2
  return 0;
}
