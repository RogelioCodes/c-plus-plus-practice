#include<iostream>
#include<iomanip>
#include<fstream>

using namespace std;

const int STU = 5;
const int TEST = 3;

//void fillArray(int scores[][TEST]) ;
double showTable(int[][TEST]);


int main()
{
  char grade ;
  int scores[STU][TEST] =  { {45, 67, 78}, {78, 88, 56}, {86, 96, 78}, {78, 77, 67}, {67, 57, 57} }; 
  showTable(scores);
   return 0 ; 
}


double showTable(int scores[][TEST])
{
  double total = 0;
  int n=1 ;  
  double average ; 
  cout << setw(10) << "Test#" << setw(10) << "Stu 1" << setw(10) << "Stu 2" << setw(10) << "Stu 3"
       << setw(10) << "Stu 4" << setw(10) << "Stu 5" << setw(10) << "Average" << endl;


      for(int t = 0; t<TEST ; t++)
	{
	  cout<< setw(9) << right  << "#" << t +1  ;
	  total = 0 ;	 
 for(int s = 0 ; s < STU ; s++)
	    {

	      total+= scores[s][t] ;
              average = total / 5 ;

	      cout << setw(10) <<  scores[s][t] ;

	    } cout << fixed << setprecision(1) << setw(10) << average << endl ;
    }
      return total ; 
}

/*char determineGrade(double avg)
{
  if(avg>=90 && avg<=100)
    return 'A';
    }*/
/*void higherThan90(int a[][COLS], double avg[], int grade[])
{
  for(int i=0; i<COLS; i++)
    {
      double sum = 0;
      for(int j=0; j< 5; j++)
        sum += a[i][j];
      avg[i] = sum/5;
      grade[i]= determineGrade(avg[i]);
    }
    }*/
