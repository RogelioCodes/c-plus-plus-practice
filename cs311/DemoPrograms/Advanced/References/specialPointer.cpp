// This demo shows how pointers runtime stack things work

#include <iostream>
using namespace std;

//This function basically translates f(m,2) into m[2]
// f returns the location of X[i]  because of int&
int& f(int X[], int i) 
{
   return X[i];
} 


int main()
{
  int *P;       // pointer P is declared
  int A = 6;    // integer variable is declared
   P = &A;      // makes P point to the location of A
   *P = A;      // P cell gets the value of A ;

   cout << *P << endl;  // displays 6

  int m[] = {4,2,3};  // static array m.

  cout << *m;     // displays 4 because *m refers to the first element of m
  cout << *(m+1) ;  // displays 2 the 2nd element of m
  cout << *(m+2) ;  // displays 3 the 3rd element of m

  cout << endl;


  int n[] = {1,2,3};
  f(n,1)= 6;         // the location of n[1] gets 6

  cout << n[1] << endl ;  // 6 will be displayed
  cout << f(n,1) << endl;  // displays m[1] which is 6

}

