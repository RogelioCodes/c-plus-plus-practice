#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//=====================================================
// File scanner.cpp written by: Group Number: ** 
//=====================================================

// --------- DFAs ---------------------------------

// ** MYTOKEN DFA to be replaced by the WORD DFA
// ** Done by: 
// ** RE:
// ** MYTOKEN DFA to be replaced by the WORD DFA
// ** Done by: Sean, Rogelio and Vince
// ** RE: ( (a|e|i|E|I|o|u) | (a|e|i|E|I|o|u)n | {[(b|g|h|k|m|n|p|r)y) | (d|j|w|y|z)  | (ch)| (sh) | (ts)] [(a|e|i|E|I|o|u)| (a|e|i|E|I|o|u)n] } )^+
bool word (string s)
{
  int state = 0;
  int charpos = 0;

  while (s[charpos] != '\0')
    {
      // state 0
      if (state==0){
	//to qv state 1
	if ( s[charpos]== 'a'|| s[charpos]== 'e'|| s[charpos]== 'i'||s[charpos]== 'E'|| s[charpos]== 'I'|| s[charpos]== 'o'|| s[charpos]== 'u')
	  state=1;
	//to qy state 2
	else if  ( s[charpos]== 'b'|| s[charpos]== 'g'|| s[charpos]== 'h'|| s[charpos]== 'k'|| s[charpos]== 'm'|| s[charpos]== 'n'|| s[charpos]== 'p'|| s[charpos]== 'r')
	  state=2;
	//to qsa state 3
	else  if ( s[charpos]=='d'|| s[charpos]== 'j'|| s[charpos]== 'w'|| s[charpos]== 'y'|| s[charpos]== 'z')
	  state=3;
	//to qc state 4
	else  if ( s[charpos]== 'c')
	  state=4;
	// to qs state 5
	else if ( s[charpos]== 's')
	  state=5;
	//to qt state 6
	else  if (s[charpos]=='t')
	  state=6;
	//no valid transition
	else return(false);
      }//end state 0;
      //from qv state 1,  vowels
      else if(state==1){
	//to qn state 7
	if(s[charpos]=='n')
	  state=7;
	//loop at qv state 1
	else  if ( s[charpos]== 'a'|| s[charpos]== 'e'|| s[charpos]== 'i'||s[charpos]== 'E'|| s[charpos]== 'I'|| s[charpos]== 'o'|| s[charpos]== 'u')
	  state=1;
	//to qy state,  n removed from qsa transition from vowel state,  qv-n->qsa-y->qsa ==  qv-n->qn-y->qsa  or qv-n->qsa-vowel->qv == qv-n->qn-vowel->qv
	else if  ( s[charpos]== 'b'|| s[charpos]== 'g'|| s[charpos]== 'h'|| s[charpos]== 'k'|| s[charpos]== 'm'||  s[charpos]== 'p'|| s[charpos]== 'r')
	  state=2;
	//to qsa state 3
	else if ( s[charpos]=='d'|| s[charpos]== 'j'|| s[charpos]== 'w'|| s[charpos]== 'y'|| s[charpos]== 'z')
	  state=3;
	//to qc state 4
	else if ( s[charpos]== 'c')
	  state=4;
	//to qs state 5
	else if ( s[charpos]== 's')
	  state=5;
	//to qt state 6
	else if (s[charpos]=='t')
	  state=6;
	//no valid transition 
	else return(false);
      }//end state 1;
      //from qn, vowel n   state 7
      else if(state==7){
	//to qv state 1
	if ( s[charpos]== 'a'|| s[charpos]== 'e'|| s[charpos]== 'i'||s[charpos]== 'E'|| s[charpos]== 'I'|| s[charpos]== 'o'|| s[charpos]== 'u')
	  state=1;
	//to qy state 2
	else if  ( s[charpos]== 'b'|| s[charpos]== 'g'|| s[charpos]== 'h'|| s[charpos]== 'k'|| s[charpos]== 'm'||  s[charpos]=='n' || s[charpos]== 'p'|| s[charpos]== 'r')
	  state=2;
	//to qsa state 3 
	else if ( s[charpos]=='d'|| s[charpos]== 'j'|| s[charpos]== 'w'|| s[charpos]== 'y'|| s[charpos]== 'z')
	  state=3;
	//to qc state 4
	else if ( s[charpos]== 'c')
	  state=4;
	//to qs state 5
	else if ( s[charpos]== 's')
	  state=5;
	//to qt state 6
	else if (s[charpos]=='t')
	  state=6;
	// to invalid state
	else return(false);
      }//end vowel n state
      //from qy state 2
      else if (state==2){
	//to qsa 3
	if (s[charpos]=='y')
	  state=3;
	//to qv 1
	else if (s[charpos]=='a'||s[charpos]=='e'||s[charpos]=='i'||s[charpos]=='o'||s[charpos]=='u'||s[charpos]== 'E'|| s[charpos]== 'I')
	  state=1;
	//invalid
	else return(false);
      }
      //from qsa state 3 to qv,vowel state 1
      else if (state==3 && (s[charpos]=='a'||s[charpos]=='e'||s[charpos]=='i'||s[charpos]== 'E'|| s[charpos]== 'I'||s[charpos]=='o'||s[charpos]=='u'))
	state=1;
      //from qc state 4
      else if (state==4){
	//to qsa state
	if (s[charpos]=='h')
	  state=3;
	//invalid
	else return(false);
      }
      //from qs state 5
      else if (state==5){
	//to qsa state 3
	if (s[charpos]=='h')
	  state=3;
	//to qv state 1
	else if (s[charpos]=='a'||s[charpos]=='e'||s[charpos]=='i'||s[charpos]== 'E'|| s[charpos]== 'I'||s[charpos]=='o'||s[charpos]=='u')
	  state=1;
	//invalid
	else return(false);
      }
      //from qt state 6
      else if (state==6){
	//to qsa state 3
	if (s[charpos]=='s')
	  state=3;
	//to qv state 1
	else if (s[charpos]=='a'||s[charpos]=='e'||s[charpos]=='i'||s[charpos]== 'E'|| s[charpos]== 'I'||s[charpos]=='o'||s[charpos]=='u')
	  state=1;
	//invalid
	else return(false);

      }//end of states
      //not valid state
      else return(false);

      charpos++;
    }//end of while


  // where did I end up????
  //state 1 and state 7 are valid
  if ((state == 1 )||( state==7)) return(true);  // end in a final state
  else return(false);

}


// ** Add the PERIOD DFA here
// ** Done by: Rogelio Cordova
bool period(string s) {
  int state = 0 ;
  int pos = 0 ;

  while(s[pos]!= '\0' ) {
    if (state == 0 && (s[pos] == '.'))
      state = 1;
    else
      return (false);
    pos++;}

  if (state == 1) return (true);
  else return (false);}

  
// -----  Tables -------------------------------------

// ** Update the tokentype to be WORD1, WORD2, PERIOD, ERROR, EOFM, etc.
enum tokentype { ERROR, WORD1, WORD2, PERIOD, 
		 VERB, VERBPAST, VERBNEG, VERBPASTNEG,
		 IS,WAS,
		 OBJECT, SUBJECT, DESTINATION,
		 PRONOUN, CONNECTOR, EOFM };

// ** string tokenName[30] = { }; for the display names oftokens - must be in the same order as the tokentype.

string tokenName[30] = { "ERROR", "WORD1", "WORD2", "PERIOD",
  "VERB", "VERBPAST", "VERBNEG", "VERBPASTNEG",
  "IS", "WAS",
  "OBJECT", "SUBJECT", "DESTINATION",
  "PRONOUN", "CONNECTOR", "EOFM" };

// ** Need the reservedwords table to be set up here. 
// ** Do not require any file input for this.
// ** a.out should work without any additional files.
//rWords = reservedWords
string rWords[30][2] = {
  {"masu",         ""},
  {"masen",        ""},
  {"mashita",      ""},
  {"masendeshita", ""},
  {"desu",         ""},
  {"deshita",      ""},
  {"o",            ""},
  {"wa",           ""},
  {"ni",           ""},
  {"watashi",      "I/me"},
  {"anata",        "you"},
  {"kare",         "he/him"},
  {"kanojo",       "she/her"},
  {"sore",         "it"},
  {"mata",         "Also"},
  {"soshite",      "Then"},
  {"shikashi",     "However"},
  {"dakara",       "Therefore"},
  {"eofm",         ""}
};

tokentype rWordsType[30] = { VERB, VERBNEG, VERBPAST, VERBPASTNEG,
				    IS, WAS, OBJECT, SUBJECT, DESTINATION,
				    PRONOUN, PRONOUN, PRONOUN, PRONOUN, PRONOUN,
				    CONNECTOR, CONNECTOR, CONNECTOR, CONNECTOR,
				    EOFM
};

// ------------ Scaner and Driver ----------------------- 

ifstream fin;  // global stream for reading from the input file

// Scanner processes only one word each time it is called
// Gives back the token type and the word itself
// ** Done by: Rogelio Cordova
int scanner(tokentype& a, string& w)
{ 
    bool res = false ; //reserved or not reserved
 
  fin >> w ; // ** Grab the next word from the file via fin  
  
  if(w == "eofm"){ return 0 ; } // 1. If it is eofm, return right now.    
  if(period(w)) 
    a = PERIOD ;
  else if (word(w)){
    for(int x = 0 ; x < 30 ; x++) {
      if(w == rWords[x][0]){ //words are checked against reserved word list
	a = rWordsType[x] ; 
	res = true ;
	break ; 
      }}
    if(!res){ //if the words are not reserved
      if(w[w.length()-1] == 'I' || w[w.length() - 1] == 'E')
	 a = WORD2 ; 
	 else 
	   a = WORD1 ; 
	 }}
  else {a = ERROR ; //Both DFAs failed 
    cout << "Lexical error: " << w << " is not a valid token.\n" ; }   
 return 1 ; 
  
  /* 
  2. Call the token functions one after another (if-then-else)
     And generate a lexical error message if both DFAs failed.
     Let the token_type be ERROR in that case.

  3. Then, make sure WORDs are checked against the reservedwords list
     If not reserved, token_type is WORD1 or WORD2.

  4. Return the token type & string  (pass by reference)
  */

}//the end of scanner



// The temporary test driver to just call the scanner repeatedly  
// This will go away after this assignment
// DO NOT CHANGE THIS!!!!!! 
// Done by:  Rika
int main()
{
  tokentype thetype;
  string theword; 
  string filename;

  cout << "Enter the input file name: ";
  cin >> filename;

  fin.open(filename.c_str());

  // the loop continues until eofm is returned.
   while (true)
    {
       scanner(thetype, theword);  // call the scanner
       if (theword == "eofm") break;  // stop now

       cout << "Type is:" << tokenName[thetype] << endl;
       cout << "Word is:" << theword << endl;   
    }

   cout << "End of file is encountered." << endl;
   fin.close();

}// end

