/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 6
4-10-2017

This program will collect test scores and create a table.
****************************************************************************************************************************************************/
#include<iostream>
#include<iomanip>

using namespace std;

//protypes
const int STU = 5;
const int TEST = 3;
void fillArray(int scores[][STU]);
void showTable(const int scores[][STU]);


int main()
{
  int test ; //test
  double avg ; //average

  int scores[TEST][STU] ;

  fillArray(scores); //calls function
  showTable(scores); //calls function
  return 0 ;
}


//Collects test scores 
void fillArray(int scores[][STU])
{
  for (int test = 0 ; test < TEST ; test ++)
    {
      cout << "\nEnter the scores for Test #" << test + 1 << endl ; 
      for(int stu = 0 ; stu < STU ; stu ++)
	{
	  cout << "\tStudent #" << stu +1 << ": "   ;
	  cin >> scores[test][stu] ;
	    }
    }
}

void showTable(const int scores[][STU]) //shows the table
{
  int total = 0;

 
  cout << endl << setw(10) << "Test#" << setw(10) << "Stu 1" << setw(10) << "Stu 2" << setw(10) << "Stu 3"
       << setw(10) << "Stu 4" << setw(10) << "Stu 5" << setw(10) << "Average" << endl;



  for(int t = 0; t<TEST ; t++)
    {
      cout<< setw(10)  << t +1  ;
      total = 0 ;
      for(int s = 0 ; s < STU ; s++)
	{
	  total+= scores[t][s]; //adds all the scores

	  cout << setw(10) << scores[t][s] ;
	    }
      cout << setw(10) << fixed << setprecision(1) << (double)total/STU << endl ; //divides total/5
    }

  cout << setw(10) << "Average" ;
  for(int s = 0 ; s < STU ; s++)
    {
      total = 0 ; 
      for(int t = 0 ; t < TEST ; t++)
	{
	  total+=scores[t][s]; 
	}
      cout << setw(10) << fixed << setprecision(1)  << (double)(total)/TEST ; //total divided by 3
    }
  cout << endl ; 


}
