
#include "girl.h"
#include <iostream>

// This demo program demostrates how pointers and references work
// differently with objects
int main()
{

  girl G;   // G object is not in the heap

  girl* F;  // F is a pointer to point to a girl object

  // *F = G;  causes segmentation fault because there is no cell that 
  // but F points to yet.

  F = new girl;  // F does point to a new girl in the heap
  *F = G;        // the cell it points can now be assigned a copy of G
                 
  cout << "hello" << endl;

  //  F = G;   mismatch  pointer = object
  F = &G;     // works because &G is an address; F points to G

  F->doit();  // calls doit on G
  
  // destructor is called for G
}
