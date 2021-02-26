#include<cstdlib>
#include<iostream>
#include<string>
#include "queue.h"

using namespace std;
// include queue.h or equivalent such as <queue>                                 
//----------------------------------------------                                   
// CS421 HW1                                                                      
// Write a generator in C++ for L = {x | x is a binary number}.                    
// Your name: Rogelio Cordova                                                                   
//----------------------------------------------                                   
// Copy the recognizer function here from the other file.                           
bool recognizer(string s){ 
  for(int x = 0 ; x < s.size(); x++){ //goes through the string and makes sure each character is either 0 or 1                                                        
  if(s[x] != '0' && s[x] != '1')
    return false ;}
  return true ;}
// end of recognizer                                                              \
      

// main: It should create each string over E = {0,1,2} systematically              
//   (short to long) and pass each string to the recognizer function               
//   created in Part a).  Hint: use a queue to generate strings                    
//   Only those strings for which the recognizer returned TRUE                     
//   should be displayed.                                                         
//   Keeps on going until the queue overflows but the user can                     
//   terminate the program with control-C                                          
//   after about 20 strings have been displayed.                                    
int main(){ 
  queue sQueue ; 
  int input   ; 
  int counter = 0 ; 
  bool temp = false;

  sQueue.add("0") ;
  sQueue.add("1") ; 
  sQueue.add("2") ; //junk number to test that it only displays 1 and 0 
  //sQueue.add("400") ; //junk number to test that it only displays 1 and 0 

  while(input != 1){
    cout << "Input 1 to start generating binary numbers: "; 
    cin >> input; }   
 while(input == 1){
   try{ //adds and removes to queue
	  string temp2 ; //holds string
	  sQueue.remove(temp2); //front is removed and stored in temp2
	  temp = recognizer(temp2);
	  if(temp == true){
	      counter++ ; 
	      cout << temp2 << endl ; //outputs string
	      if(counter >=25){
		cout << "Number of binary numbers generated: " << counter <<endl ; 
		  cout << "Enter 1 to continue, Ctrl-C to exit: " ; 
		  cin >> input ; 
		  if(cin.fail())
		      input = 0 ;  }}
	  sQueue.add(temp2 + '0');//puts 0 back in front
	  sQueue.add(temp2 + '1');}//puts 1 back in front
	  catch(queue::Overflow) //full queue
	    { cerr << "Error: Overflow, queue is full." << endl ; exit(1);}
	  catch(queue::Underflow)//empty queue
	    { cerr << "Error: Underflow, queue is empty." << endl ; exit(1);}
	  catch (char const* ecode) //error for invalid item
	    { cerr << "Error: " << ecode << endl; exit(1); }
}// end of while                                                                
}// end of main                                                                     

