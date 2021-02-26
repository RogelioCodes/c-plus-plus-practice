#include <iostream>
using namespace std;
const int MAXNAME = 10;
int main()
{
  char ARRAY[MAXNAME] ;
  char user ; 
  int pos, result;
  char *name = nullptr;
  int *one = nullptr;
  int *two = nullptr;
  int *three = nullptr;
  // allocate the character array pointed to by name
  // and read the characters into the name array
  // WITHOUT USING a bracketed subscript
 
  name = ARRAY ; //pointing to beginning of array

    for(int i = 0; i < MAXNAME; i++)
      *(name + i) = i * i; //pointing to beginning of array and is then offsetted by the number of 
    //integers that the for loop is going through
     

  cout << "Enter your last name with exactly 10 characters."
       << endl;
  cout << "If your name has < 10 characters, repeat last letter."
       << endl << "Blanks at the end do not count." << endl;
  
  for(int i = 0 ; i < MAXNAME ; i++ )
    {
      cin >> user ; 
      *(name + i) = user ; 
    }

  // print the array characters one at a time
  for(int i = 0 ; i < MAXNAME ; i++ )
    cout << *(name + i) <<  " "  ; 



  // WITHOUT USING a bracketed subscript
  // allocate the integer variables one, two, three
  cin >> *one ; 
  cin >> *two ; 
  cin >> *three ; 


  // input three numbers and store them in the dynamic variables
  // pointed to by pointers one, two, and three. You are working
  // only with pointer variables
 result = *one + *two + *three  ; 
  // calculate the sum of the three numbers, store it in result,
  // then output those three numbers and their sum
 cout << "one: " << *one << endl ; 
 cout << "two: " << *two << endl ; 
 cout << "three: " << *three << endl ; 
 cout << "result: " << result << endl ; 
  // deallocate one, two, three and name
 
 delete one ; 
 delete two ; 
 delete three ; 

 return 0;
}
