#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main()
{
  srand(time(0));
  const int SIZE = 10 ;
  int ar[SIZE] ;
  cout << "Original: " ;
  for(int i = 0; i < SIZE ; i++)
    {
      ar[i] = (rand()%100 + 1) ;
      cout << ar[i] << " " ;
    } 
  cout << endl <<  "Reverse: " ;
 for(int i = 0 , r = SIZE - 1 ; i<SIZE ; i++, r--)
	{	cout  << ar[r] << " " ;
	}
   

 
  return 0 ;
}

