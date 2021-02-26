//INSTRUCTION
//Look for ** to complete all of them based on my preceding comments
//The output should match my assingment sheet

//=========================================================
//HW#: HW3P3 client
//Your name: Rogelio Cordova
//Complier:  g++
//File type: client program 
//===========================================================

using namespace std;
#include <iostream>
#include "slist.h"
//PURPOSE: This function simply tests the copy constructor of the slist class
//and adds 6 to a the rear of copiedList and displays the list
//PARAMETER: list passed by value becomes copiedList
void CopyTest(slist copiedList)
{
  cout << "Inside copy test. " << endl;
  slist newList(copiedList);
  newList.addRear(6);
  newList.displayAll();
  cout << "Finished. " << endl;
}

void part2test()
{ 
  //1. L1 is empty and L2 is empty 
  slist L1, L2;
  if (L1 == L2) cout << "True. " << endl;
  else cout << "False." << endl;

  //2. L1 is empty nd L2 with 4, 5 
  L2.addRear(4); L2.addRear(5);
  if (L1 == L2) cout << "True. " << endl; 
  else cout << "False. " << endl;
  //3.  The opposite
  if (L2 == L1) cout << "true" << endl; else cout << "false" << endl;

  //4. L1 with 1,2,3 and L2 with  1,2,3
  L1.addRear(1); L1.addRear(2); L1.addRear(3);
  int x;
  L2.deleteFront(x);
  L2.deleteFront(x);
  L2.addRear(1); L2.addRear(2); L2.addRear(3);
  if (L1 == L2) cout << "true" << endl; else cout << "false" << endl;

  //5. L1 with 1,2,3 and L2 with  1,2
  L2.deleteRear(x);
  if (L1 == L2) cout << "true" << endl; else cout << "false" << endl;

  //6. L1 has 1,2,3 and L2 has 1,2,3,4
  L2.addRear(4);
  if (L1 == L2) cout << "true" << endl; else cout << "false" << endl;

  //7. L1 has 1,2,3 and L2 has 1,2,4
  L2.deleteRear(x);
  L2.deleteRear(x);
  L2.addRear(4);
  if (L1 == L2) cout << "true" << endl; else cout << "false" << endl;

}//end of program


int main()
{
  slist L1, L2;
  int temp;
  int counter = 1;

  //1.Create a 5 element list with  1,2,3,4,5 (L1)
  cout << "Step 1 " << endl; counter++;
  L1.addRear(1);
  L1.addRear(2);
  L1.addRear(3);
  L1.addRear(4);
  L1.addRear(5);

  //2.Pass the list to a client function called CopyTest to 
  //testing copy constructor .
  cout << "Step 2 " << endl;
  CopyTest(L1);
  cout << endl <<  " After copytest " << endl;
 
  //3.Display L1 (this should still be a 5 element list)
  cout << "Step 3 "  << endl; 
  L1.displayAll();
  cout << " Testing operator overloading " << endl;

  //4.Do L1 = L1;
  cout << "Step 4 " << endl; 
  L1 = L1;

  //5.Display L1    (this should still be 1 2 3 4 5)
  cout << "Step 5 "  << endl; 
  L1.displayAll();

  //6.Create a 4 element list L2 with 7,8,9,10.
  cout << "Step 6 "  << endl; 
  L2.addRear(7);
  L2.addRear(8);
  L2.addRear(9);
  L2.addRear(10);

  //7.Display L2
  cout << "Step 7 "  << endl; 
  L2.displayAll();

  //8.Do L2 = L1;  (L2 becomes 5 elements 1,2,3,4,5)
  cout << "Step 8 " << endl;
  L2 = L1;

  //9.Display L2.
  cout << "Step 9 " << endl; 
  L2.displayAll();

  //10.Remove a rear node from L1. (This should not affect L2).
  cout << "Step 10 " << endl; 
  L1.deleteRear(temp);

  //11.Display L1.   (L1 is 1,2,3,4)
  cout << "Step 11 " << endl; 
  L1.displayAll();

  //12.Display L1 again. (4 elements . just to make sure)
  cout << "Step 12 "  << endl; 
  L1.displayAll();

  //13.Display L2 again. (still 5 elements 1,2,3,4,5)
  cout << "Step 13 " << endl; 
  L2.displayAll();

  cout << " Part 1 of testing done " << endl;

  part2test();  // testing == operator

}// end of program


