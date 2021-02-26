//Rogelio Cordova
//HW4
//Compiler: g++
//4/27/2018
#include "slist.h"
#include "dgraph.h"
#include <fstream>
#include <iostream>
using namespace std;

//initializes count to 0 
dgraph::dgraph(){
  count = 0;}   

dgraph::~dgraph(){}  

//reads from the input file table.txt and fills up the GTable
void dgraph::fillTable(){ 
  ifstream fin;
  fin.open ("table.txt"); //opens table.txt
  char s;
  int numOfDegree; //temp value for degree
  while (fin >> Gtable[count].vertexName){  //while fin
    fin >> numOfDegree;
    Gtable[count].outDegree = numOfDegree;
  
    for(int i = 0; i < numOfDegree; i++){ //goes through entire table
      fin >> s;
      (Gtable[count].adjacentOnes).addRear(s); //uses a slist function from HW3
    }
    count++;// increment the count
  }//end of while
  fin.close();//close fin
}


//Displays the graph 
void dgraph::displayGraph(){
  for (int i = 0; i < count; i++) //pretty much just couts with a decent format
    {  
      cout << Gtable[i].vertexName << endl;
      cout << Gtable[i].outDegree << endl;
      (Gtable[i].adjacentOnes).displayAll();}}

//Finds number of edges and degrees
int dgraph::findOutDegree(char v)//v for vertex
{
  for(int i = 0; i < count; i++){
    if(v == Gtable[i].vertexName){
      return Gtable[i].outDegree; // returns degree
    } }}


//finds adjacent verteces.
slist dgraph::findAdjacency(char v) //vertex
{
  for(int i = 0; i < count; i++){
    if(v == Gtable[i].vertexName){
      return Gtable[i].adjacentOnes;  //Returns adjacency nodes/thingys
    }  }}


