// HW#: HW3P1 slist                                                                                                                                                                                     
// Your name: Rogelio Cordova                                                                                                                                                                           
// Compiler:  g++                   
#include "llist.h"

class slist: public llist // inherit publicly from llist
{
 public:
  slist(); // constructor

  // search through the list to see if any node contains the key.
  // If so, return its position (>=1). Otherwise, return 0.
  int search(el_t);

  // go to the Ith node (if I is between 1 and Count) and
  // replace the element there with the new element.
  // If I was an illegal value, throw OutOfRange
  void replace(el_t, int);

  slist(const slist& OtherOne);
  slist& operator=(const slist& OtherOne);
  bool operator==(const slist& OtherOne);
};

