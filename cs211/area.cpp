#include <iostream>
using namespace std;

int main()
{
  int length; // holds length
  int width; // holds width
  int area; // holds area
  int *lengthPtr = nullptr; // int pointer to point to length
  int *widthPtr  = nullptr ; //int pointer to point to width



  // prompt the user to enter length and width
  cout << "Enter length: " ; 
  cin >> length ; 

  cout << "Enter width: " ; 
  cin >> width ; 


  // then make lengthPtr & widthPtr point to length & width
  // respectively

   lengthPtr = &length;
   widthPtr = &width ;
  //area = length * width ; 
  
   cout << "area: " << *lengthPtr * *widthPtr ; 

  // find and print the area using only the pointer variables

   //  cout << "area: " << &length ; 

  // compare length and width using only the pointer variables

   if(*lengthPtr > *widthPtr) 
     cout << "\n" << *lengthPtr << " " << *widthPtr ; 
   else 
     cout << "\n" << *widthPtr << " " << *lengthPtr ;

   
// and print them in ascending order
  return 0;
}
