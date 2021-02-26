#ifndef TRANSITIONTABLE_H
#define TRANSITIONTABLE_H

#define EPSILON 'e'
#define NO_TRANSITION_CHAR '*'
#define NO_TRANSITION -2
#define NUMBER_OF_TRANSITION_CHARS 52

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <climits>
#include "Transition.h"

using std::vector;
using std::string;
using std::ifstream;
using std::cout;
using std::endl;

class TransitionTable
{
 protected:
  vector<vector<vector<int>>> table;
  int maxState = 0;
  int getIndex(char transitionChar);
 public:
  TransitionTable() = default;
  explicit TransitionTable(vector<Transition> & transitions);
  explicit TransitionTable(Transition transition);
  vector<int> * getTransitions(int sourceState, char transitionChar);
  vector<Transition> & getAllTransitions(int sourceState, vector<Transition> & results);
  int size();
  void populate(vector<Transition> & transitions);
  vector<int> getSourceStates();
  int getStartStateNumber();
  int getMaxState() const;
};

#endif 
