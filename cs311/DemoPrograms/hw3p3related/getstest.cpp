// CS311 Demo: Try this
// = is supposed to make a copy.  Does it???

using namespace std;
#include <iostream>
#include "llist.h"


int main()
{
  llist A;
  llist B;

  cout << "A" << endl;
  A.displayAll();
  cout << "B" << endl;
  B.displayAll();

  B.addRear('a');
  A = B ;  // I want to make A look the same as B

  B.addRear('b');  // this should not have any effect on A

  cout << "B" << endl;
  B.displayAll();

  cout << "A" << endl;
  A.displayAll();
  
}


