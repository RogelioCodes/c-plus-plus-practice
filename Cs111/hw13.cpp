#include<iostream>
#include<iomanip>
using namespace std;

void fillArray(int [ ][COLS] ;
int main()
{
  const int ROWS = 12; 
  const int COLS = 4; 
  int ar[ROWS][COLS];
  fillArray(ar);
  int t =  getTotal(ar);
  cout << t ;
}

void fillArray(int ar[][COLS ] )//second one needs size of array COLS = 4 here
	       {
		 ifstream fin ;
		 fin.open(FUNCTION HERE DONT IGNORE );

		 for(int r=0; r< ROWS; r++ )
		   {
		     for (int c=0; c < COLS ; c++ )
		       fin >> ar[r][c]; //r goes 0-11 c goes 0-3
		       }
	       }

 int getTotal(int ar[][COLS])
	       {
		 int total = 0;
		 for(int r=0; r<ROWS; r++)
		   {
		     for(int c=0; c < COLS ; c++)
		       total+ = ar[r][c]; // r goes 0-11 c goes 0-3
		   }
		 return total;
	       }
