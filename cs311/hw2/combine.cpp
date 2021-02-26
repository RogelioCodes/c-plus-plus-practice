//HW#: HW2P2 Combine
//Your name: Rogelio Cordova
//Complier:  g++
//File type: combine.cpp
//=========================================================
#include <iostream>
#include <math.h>
#include <vector>
#include<cstdlib>
using namespace std;

void Combine(vector <int> A,vector <int> B, vector <int>& R); //prototype for Combine function
int main()
{
  //vectors of integers named L1, L2 and L3
  vector <int> L1,L2,L3;

  
  int num;//variable for number entry
  //asks users to enter numbers, and when they enter -1, it will end the loop
  cout << "Enter integers in increasing order for vector 1. Enter -1 when done. " << endl;
  while(num!=-1)
    {
    
      cin >> num;
      if(num!=-1) 
        L1.push_back(num);

    }

  cout << "Enter integers in increasing order for vector 2. Enter -1 when done. " << endl;
  int num2;
  while(num2!=-1)
    {
      
      cin >> num2;
      if(num2!=-1)
        L2.push_back(num2);
    }

  //jumps to the combine function
  Combine( L1 ,L2 ,L3 );

  //displays all the elements in L3
  for(int i=0; i < L3.size() ; i++)
    cout << L3[i]<< " " ;
  cout << endl ; 
  return 0;
}


void Combine(vector <int> A,vector <int> B, vector <int>& R)
{
  int ia = 0; // index for A
  int ib = 0; // index for B

  //while the ia/ib is less than the size of A.size and B.size respectively
  while( ia < A.size() && ib < B.size() )
    {
      if( A[ia] < B[ib] ) //while the contents in A[ia] is less than B[ib]
	{
	  R.push_back(A[ia]); // push A[ia] into Vector R
	  ia= ia+1; // increments ia 
	}

      else
	{
	  R.push_back(B[ib]);  // push back B[ib] into vector R
	  ib= ib+1; // increment ib by 1
        } }

  if(ia== A.size() ) // if ia is equal to the size of vector A
    {
      while(ib < B.size()) // while ib is less than the size of vector B
	{
	  R.push_back(B[ib]); // push back B[ib] into vector R
	  ib=ib+1;    // increment ib 
	} }

  else if( ib== B.size()) // if ib is equal to the size of vector B
    {
      while(ia< A.size() ) // while ia is less than the size of vector A
	{
	  R.push_back(A[ia]); // pushes the content of A[ia] into vector R
	  ia=ia+1; // increment ia 
	} }}
