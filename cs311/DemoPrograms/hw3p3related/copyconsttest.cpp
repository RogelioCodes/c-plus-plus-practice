// CS311 Demo : Try this
// Pass by Value is supposed to make a copy.  Does it?

using namespace std;
#include <iostream>
#include "llist.h"

void copyTest(llist X)
{
  cout << "X" << endl;
  X.displayAll();
  X.addRear('b');
}

int main()
{
  llist B;

  B.addRear('a');

  cout << "B" << endl;
  B.displayAll();

  copyTest(B);

  cout << "B" << endl;
  B.displayAll();
  
}


