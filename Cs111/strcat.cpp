/********************************************************
CS111 Lab on c-strings
Template prepared by Kazumi Slott
********************************************************/
#include <iostream>
using namespace std;

void myStrcat(char dest[], const char source[]);

int main()
{
  char str2[80] = "Dave ";
  myStrcat(str2, "Smith");
  cout << str2 << endl; //Dave Smith

  return 0;
}

void myStrcat(char dest[], const char source[])
{
  int d;
  int s ;
  for(d = 0 ; dest[d]!= '\0' ; d++)
    {
      ;   
 }                
  
  for(s = 0  ;source[s]!= '\0' ; s++,d++)
    {
      
     dest[d] = source[s]  ;
      
    }
  dest[d]=  '\0';
    

}