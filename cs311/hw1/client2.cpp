//INSTRUCTION
//Look for ** to complete this program 
//The string output should match my hw1queueDemo.out 
//except for the trace messages

//=========================================================
//HW#: HW1P1 queue
//Your name: Rogelio Cordova
//Complier:  g++ 
//File type: client program
//===========================================================

using namespace std;

#include <iostream>
#include <stdlib.h>
#include <string>
#include "queue.h"

//Purpose of the program: Accpets a string composed of A B Or C and lists every possible combination
//Algorithm: Queue is initialized with A B and C. The algorithm will then loop until it outputs every possible combination. This is done by popping 
//an element from the queue each time it goes through the loop and then printing it. This will go on until every possible combination is printed. 
int main()
{// A, B, C in the queue
  queue bolo ; 
  string lovebug ; 
  bolo.add("A") ; 
  bolo.add("B") ;
  bolo.add("C") ; 

  while(true) //checks to make sure it is A B OR C //loop -- indefinitely
    {
      try{
	bolo.remove(lovebug) ; 
	cout << lovebug << endl ; 
	bolo.add(lovebug + "A") ; bolo.add(lovebug + "B") ;  bolo.add(lovebug + "C") ; }
      catch(queue :: Overflow) 
	{ break ; }
    }
}

