#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;

//--------------------------------------
// CS421 File td.cpp for HW2B Table-Driven Scanner
// Your name: **Rogelio Cordova
//--------------------------------------

// Complete this to fit the HW2B specification - look for **
// Must have the same types of tracing couts as my demo program.


// info on each DFA
struct info
{
  string name;  // token name
  int startstate;
  int finalstate;
};

info DFAs[4];     // store up to 4 dfas' start and final
int  TRS[10][4];  // store all trs's - states 0-9 and chars a b c d -- all dfas transitions are in here 
int projectx[10][4];

// ----- utility functions -----------------------

int readTables()
{  

   ifstream fin ("trs.txt", ios::in);
   ifstream fin2 ("dfas.txt", ios::in);
   // ** Read in the files into TRS and DFAs
   //mine
   //create a separate table tha
   //create 2 arrays 1 for a 1 for B
    if(!fin){
      cout << "unable to open file" << endl ; 
      return 1 ; 
    } //inputs
    while(fin != 0){
      for(int a = 0 ; a < 10 ; a++){
	for(int b = 0 ; b < 4 ; b++)
	  {
	    fin >> TRS[a][b] ;
	   
	    if(TRS[a][b] != -1){
	      projectx[a][b] = TRS[a][b]; //makes a copy 

	    }
	    else if(TRS[a][b] == -1)
	      projectx[a][b] = 11;
	    //  if(projectx[a][b] == 0 )
	    //  {projectx[a][b] = "";}
  
	  }
      }
    }
    fin.close();

    if(!fin2){
      cout << "unable to open file" << endl ;
      return 1 ;
    }
    string token = "token1" ; 
    int i = 0 ; 
    while(fin2 != 0)
      {
	//	for(int i = 0 ; i < 2 ; i++){
	fin2 >> DFAs[i].name >> DFAs[i].startstate >> DFAs[i].finalstate;  
	// cout << "dfas: " << DFAs[i].name <<" "  << DFAs[i].startstate << " " << DFAs[i].finalstate << endl ; 
	i++;/* if(DFAs[i].name != "token1" || "token2"){
	       DFAsCopy[i].name = DFAs[i].name;
	       }*/
	//}
      }
    fin2.close();
   
   // ** Return how many DFAs were read
    return (i-1);
}

void displayTables()
{
 
  // ** display DFAs nicely labeled

  // ** display TRS nicely labeled
  //scratch work that wasn't used
  /*    cout << setw(11) << right << "a" << setw(3) << "b" << setw(3) << "c" << setw(3) << "d" << endl;
 
    for(int a = 0 ; a < 10 ; a++){
      cout << "State " << a << ": " ;
      for(int b = 0 ; b < 4 ; b++)
	{
	  cout << TRS[a][b] ;
	}
      cout << endl ; 
    }
  */
    cout << setw(10) << right << "a" << setw(2) << "b" << setw(2) << "c" << setw(2) << "d" << endl;
    //prints table
    for(int a = 0 ; a < 10 ; a++){
      cout << "State " << a << ": " ;
      for(int b = 0 ; b < 4 ; b++)
        {
	  if(projectx[a][b] == 11)
	    { cout << setw(2) << right << " " ; }
	  else
	    cout << setw(1) << right << projectx[a][b] << " " ;
        }
      cout << endl ;
    }
    for(int b = 0 ; b < 2 ; b++)
      {
	cout << DFAs[b].name << " starts in " << DFAs[b].startstate << " and ends in " << DFAs[b].finalstate <<  endl ; 
      }

}

bool accept(info dfa, string word)
{
  // ** Does the dfa accept the word?
  // Start with the start state of the DFA and
  // look up the next state in TRS for each char in word.
  // At the end of the word, make sure you are in the 
  // final state of the DFA.
  // Use a formula to convert chars to TRS col numbers.
 
  string w = word ; 
  int newstate[10][4] ;
  int numDFA = readTables();
    
  for(int r = 0; r < numDFA; r++){
    bool state = true;
    int turn = 0;
    
    cout << "Trying dfa " << r << "----------" << endl;

    for(int o = 0; o < word.size(); o++){
      if(state == true){//checks conditions
	int col = word[o]-97;
	int row = 0;
	int front = DFAs[r].startstate;
	int back = DFAs[r].finalstate;
		
	cout << "state: " << front << " char: " << word[o] << endl;
	
	if(r==0)
	  row = 0;
	
	if(r==1)
	  row = 2;
	
	
	cout << "new state: " << TRS[row][col] << endl;
	
	
	if(TRS[row][col] == -1)
	  {
	    cout << "lexical error" << endl;
	    state = false;
	  }
	
	if((turn != 0) && (TRS[row][col] == back))
	  {
	    cout << "token found" << endl;
	    r = numDFA;
	  }
	
	turn++;//counter is used to traverse
      }
    }
  }
  
}


int main()
{
  cout << "This is a table driven scanner. Needs trs.txt and dfas.txt." << endl;
  cout << "States are 0 to 9 and chars are a to d" << endl;

  int numDFA = readTables(); // how many DFAs were read
  displayTables();
  cout << ".....done reading tables...." << endl;

  string word;
  while(true)
    { 
      cout << "@@Enter a string: " ;
      cin >> word;
      // ** try the DFAs one by one and see 
      //     if the word is accepted
      //     if so, display the word and the token name
      // ** if no DFA does, generate a lexical error message.
                 accept(DFAs[numDFA],word);
     

      cout << "do control-C to quit" << endl;
    }

}//the end