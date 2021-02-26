//INSTRUCTION
//Look for ** to complete all of them
//The output should match my assingment sheet
//DO not forget to Tab on each line

//=========================================================
//HW#: HW3P2 slist
//Your name: **
//Complier:  **
//File type: client program (tester)
//===========================================================

using namespace std;

#include <iostream>
#include "slist.h"

//PURPOSE of the program: **
int main()
{ slist L;  // the list 
  int foundPos; // to hold the found position 
  int counter = 1; // used to display test line number
try
  {
    //  1)add to front once (element 4)
    cout << counter << ": Adding 4 to front." << endl; counter++;
    L.addFront(4) ;
    //  2)add to rear 3 times (elements 6,7,8)
    cout << counter << ": Adding 6,7, 8  to rear." << endl; counter++;
    L.addRear(6);  L.addRear(7) ; L.addRear(8) ; 
    //  3)displayAll    - 4 6 7 8
    cout << counter << ": Displaying the entire list." << endl; counter++;
    L.displayAll() ; cout << endl ; 
    //  4)search for 6, report the result  - found in pos 2
    cout << counter << ": Searching for 6. " << endl; counter++;
    L.search(6) ; 
    //  5)replace the 6 with 0 using the search result
    cout << counter << ": Replacing 6 with 0. " << endl; counter++;
    L.replace(0,2);
    //  6)search for 8 and report the result . found in pos 4
    cout << counter << ": Searching for 8 " <<  endl; counter++;
    L.search(8) ; 
    //  7)replace the 8 with 2 using the search result
    cout << counter << ": Replacing 8 with 2. " << endl; counter++;
    L.replace(2,4) ; 
    //  8)displayAll                       - 4 0 7 2
    cout << counter << ": Displaying entire list. " <<  endl; counter++;
    L.displayAll() ; cout << endl ; 
    //  9)search for 5 and report the result   - not found
    cout << counter << ": Searching for 5. " << endl; counter++;
    L.search(5) ; 
    // 10) replace postion 7 with 10
    cout << counter << ": Replacing 7 with 10. " << endl; counter++;
    L.replace(10,7) ; 
    }//end of try
 catch(llist::OutOfRange)
 { cout << "ERROR: Bad position was given" << endl;}
 cout << endl ; 
}//end of program
