// HW4 
// Your name: Rogelio Cordova
// Compiler: g++
// File Type: header file
#include <iostream>
#include <string>
#include "slist.h"
using namespace std;

const int SIZE = 20;   // size of graph table

struct Gvertex
{
  char vertexName;      //the vertex Name
  Gvertex(){ vertexName = ' ', outDegree = 0;}
  int outDegree;//the Out degree
  slist adjacentOnes;   //the adjecent vertices in an slist
  int visit;            // This will hold the visit number in HW7 
};

class dgraph
{

 private:
  Gvertex Gtable[SIZE];  // table for dgraph
  int  count; 

 public:

 
  dgraph();    // initializes count to be 0
 
  ~dgraph();   //deconstructor, does nothing 

  
  void fillTable();  //uses fin to read txt file fills table 

  void displayGraph(); 


  int findOutDegree(char);  //returns degree
 
  slist findAdjacency(char);  //returns adjacency 

};