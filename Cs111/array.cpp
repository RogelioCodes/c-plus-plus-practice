#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

const int rows=5;
const int cols = 3;
void fillArray(double ar[][cols]);
void grades(double ar[][cols]);

int main()
{
   double ar[rows][cols];
   fillArray(ar);
   grades(ar);

   return 0;
   }

void fillArray(double ar[][cols])
	       {
		 ifstream fin;
		 fin.open ("array.txt");
		 for (int r=0; r < rows ; r++)
		   {
		    for (int c=0; c<cols ; c++)
		      fin >> ar[4][c];
		    }
	       }
	       void grades(double ar[][cols])
	       {
		 ifstream fin;
		 fin.open ("array.txt");
		 double total = 0;
		 double average;
		 for (int r=0; r< rows; r++)
		   {
		     total = 0;
		     for (int c=0 ; c < cols ; c++)
		       {
			 cout << ar[r][c] << " " ;
			 total += ar[r][c];
		       }
		     average = total/cols ;
		     cout << setprecision(1) << fixed << average << endl;}
	       }
