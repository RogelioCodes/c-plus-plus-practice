#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<queue>
#include <unordered_set>
#include "Transition.h"
#include "TransitionTable.h"
#include "Utilities.h"

using namespace std;
using Utilities::split;
//============================================
// CS421 Extra Credit by : **
// transform NFA into DFA  (nfa.txt into dfa.txt)
//=============================================

// States allowed are 0 through 9
// Arrows allowed are a through e

#define LINE_END_MARKER = -1

TransitionTable dfa;
TransitionTable nfa;
unordered_set<char> alphas;


ofstream fout ("dfa.txt", ios::out);  // output stream

// Transitions of the NFA (10 states and 5 chars)
// Every slot contains a vector of destination states
vector<int> NFA[10][5];
int maxState;      // the highest state indicated in nfa.txt first line

// vector of new states in DFA (each state name is a string)
vector<string> DFAstates; 

/* ALGORITHM:
    Read in nfa.txt into NFA.
    Start with DFA state "0" 
    While there are more DFAstates 
      For each arrow character, find all destinations
      in the NFA and create a new DFA state name 
      with the detinations. Add it to DFAstates.
      Output the DFA transition to dfa.txt
*/ 

// ----- Your utility functions ----------------------------------------

// Such as display and converstion functions
string makeCompositeState(vector<int> & states)
{
  string state = "";
  bool isFirst = true;

  for(int stateNum : states)
    {
      if(!isFirst)
	state.push_back(' ');

      isFirst = false;
      state.append(std::to_string(stateNum));
    }

  return state;
}

void alphabet(vector<Transition> & transitions)
{
  for(Transition transition : transitions)
    for(char ch : transition.transitionChars)
      alphas.insert(ch);

}

/*
// ------------- Storing the NFA ---------------------- 

// Reads nfa.txt to build the NFA data structure
void buildnfa()
{
  ifstream fin("nfa.txt", ios::in);
  // **** put code here *******************
  vector<Transition> transitions;
  Transition transition;
  vector<string> components;
  int currentState = 0;

  for(string currentLine; getline(fin, currentLine);){
      components.clear();
      transition.transitionChars.clear();
      transition.targetStates.clear();
      split(currentLine, ' ', components);

      if(components.size() != 4){continue;}

      transition.sourceState = stoi(components[0]);
      transition.setTransitions(components[1]);

      //Adding target states
      for(int index = 2; index < components.size() && components[index] != "-1"; ++index){
	  currentState = stoi(components[index]);
	  transition.targetStates.push_back(currentState);
      }
transitions.push_back(transition);
    }
  nfa.populate(transitions);
  alphabet(transitions);

  fin.close();
}

vector<int> & reduce(vector<int> & transitions, vector<int> & results){
  unordered_set<int> uniqueTransitions;
  for(int state : transitions){
      if(uniqueTransitions.find(state) != uniqueTransitions.end())
	continue;
      uniqueTransitions.insert(state);
      results.push_back(state);
  }
 return results;
}


// adds a state to DFA if it is new
void addNewState(string state)
{
  // *** put code here ****************
}


// Main Driver
int main()
{ 
  queue<vector<int>> newCompositeStates;
  vector<int> * nfaTransitions;
  vector<int> currentCompositeState;
  vector<int> transitions;
  vector<int> newCompositeState;
  unordered_set<string> seenStates;
  string compositeStateStr = "";
  Transition newDFATransition;
  vector<Transition> dfaTransitions;

  cout << "Given your NFA in nfa.txt, this will produce the DFA in dfa.txt." << endl;
  cout << "State numbers must be 0 ... 9" << endl;
  cout << "Arrow labels can be anything from a .. e" << endl << endl;
  buildnfa();
 
  vector<int> startingState;
  startingState.push_back(nfa.getStartStateNumber());
  newCompositeStates.push(startingState);

  while(!newCompositeStates.empty())
    {
      currentCompositeState = newCompositeStates.front();
      newCompositeStates.pop();

      for(char alpha : alphas)
        {
	  transitions.clear();
	  newCompositeState.clear();

	  for(int currentState : currentCompositeState)
            {
	      nfaTransitions = nfa.getTransitions(currentState, alpha);

	      if(nfaTransitions == nullptr)
		continue;

	      transitions.insert(transitions.end(), nfaTransitions->begin(), nfaTransitions->end());
            }

	  reduce(transitions, newCompositeState);

	  compositeStateStr = makeCompositeState(newCompositeState);

	  if(compositeStateStr.empty())
	    continue;

	  //Add a new DFA transition
	  if(currentCompositeState.size() == 1)
	    newDFATransition.sourceState = currentCompositeState[0];
	  newDFATransition.sourceStates.insert(newDFATransition.sourceStates.end(), currentCompositeState.begin(), currentCompositeState.end());

	  newDFATransition.transitionChars.push_back(alpha);
	  newDFATransition.targetStates.insert(newDFATransition.targetStates.end(), newCompositeState.begin(), newCompositeState.end());

	  dfaTransitions.push_back(newDFATransition);

	  //clear the new DFA transition
	  newDFATransition.sourceState = 0;
	  newDFATransition.sourceStates.clear();
	  newDFATransition.transitionChars.clear();
	  newDFATransition.targetStates.clear();

	  //If this is a new state, push it to the new state queue

	  if(seenStates.find(compositeStateStr) == seenStates.end())
            {
	      newCompositeStates.push(newCompositeState);
	      seenStates.insert(compositeStateStr);
            }
        }
    }

  dfa.populate(dfaTransitions);

  remove("dfa.txt");
  ofstream fout("dfa.txt", ios::out);

  //Export the DFA to file
  //From <01> on a goes to <01>
  for(Transition dfaTrans : dfaTransitions)
    {
      fout << "From <";
      for(int i : dfaTrans.sourceStates)
	fout << i;
      fout << "> ";

      fout << "on ";
      for(char c : dfaTrans.transitionChars)
	fout << c;
      fout << " goes to <";
      for(int i : dfaTrans.targetStates)
	fout << i;
      fout << ">\n";
    }

  fout << "Any state with the original final state number is final" << endl;
  fout.close();

}//the end
 
*/
