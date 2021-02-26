#include<iostream>
#include<iomanip>
using namespace std;

void myStrcpy(char dest[], const char source[]);

int main()
{
  char str1[20] = "Hello CS111";
  cout << str1 <<endl; //Hello CS111
  myStrcpy(str1, "Oh PHYS302");
  cout << str1 << endl; // Oh PHYS302
  return 0;
}

void myStrcpy(char dest[], const char source[])
{
  int i ;
  for(i = 0 ; source[i]!= '\0' ; i++)
    {
      
      dest[i] = source[i] ;
    }
  dest[i]=  '\0';
}

