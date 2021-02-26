
// this demo program shows how inheritance and virtual functions work
// with an array of pointers to run time stack objects

#include "girl.h"
#include "boy.h"
#include <iostream>

// girl and boy inherit from person

// Virtual functions are useful when you have an array of pointers
// to different types of objects
int main()
{

  person *students[2];  // an array of pointers to person objects  
  girl G;
  boy B;

  students[0] = &G;  
  students[1] = &B;  


  students[0]->doit();  // ** boy's doit
  students[1]->doit();  // ** girl's doit

  // ** destructors are  called
}
