#include<iostream>
#include<iomanip>
using namespace std ; 

//implement strcpy (dest, source)
void myStrcpy(char dest[], const char source[])
{
  int i ;
  for(i = 0 ; source[i]!= '\0' ; i++)
    {

      dest[i] = source[i] ;
    }
  dest[i]=  '\0';
}



//implement char toupper(char)
// toupper(.a.) returns .A.
// toupper(.A.) return .A.
char myToUpper(char ch )
{
  //  cout << "Enter a lowercase letter: " ; //asks for a lowercase letter
  // cin >> ch ; //user inputs lowercase letter

  if(ch>= 'a' && ch <= 'z')
    ch -= 32 ; //subtracting 32 will convert it to uppercase
  return ch ; 
  //cout << "The uppercase is " << upper << "." <<  endl ; //outputs the message and then the upper variable

}
//implement int starlen(char[])
int myStrlen(const char cstr[] )
{
  int i ; 
  for(i=0 ; cstr[i] != '\0' ; i++)
	;
      return i ; 
}
