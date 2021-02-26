#ifndef INSTRUCTORCOLLECTION_H
#define INSTRUCTORCOLLECTION_H
#include "InstructorProfile.h"
#include "person.h" 
#include<vector>
using namespace std; 

class InstructorCollection
{
 private: 
  vector <InstructorProfile> collection ; 
 public: 
  void getInfo() ;
  void printCollection() const ; 

  
};
#endif 
