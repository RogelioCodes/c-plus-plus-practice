//Implemented by Kazumi Slott
//1-26-2010, modified 8-25-2014
//This program demonstrates how to read data from an input file

//numbers.dat
/*15 16
5   7
7   11
*/
#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;

void ProcessARow( double score1, double score2, double score3, double& min, double& max, double& average);


int main()
{
  string name; 
  double  score1, score2, score3, maxScore, minScore, min, max, average;
  double test1, test2, test3 ;
  int line = 0; //line number

  ifstream fin;
  fin.open("data.txt");
  //  cout<< "test:" <<  ProcessARow(test1, test2, test3, min, max, average) << endl  ;

  cout << setw(20) <<  "Name" << setw(20) << "Average Score" << setw(20) << "Min Score" << setw(20) << "Max Score" << endl ; 
  cout << "-------------------------------------------------------------------------------------" << endl ; 
  if(!fin)
    cout << "The input file doesn't exist" << endl;
  else //The input file exists
    {
                                                              //read the first line (each line has 2 numbers)
      
      fin >> name >> score1 >> score2 >> score3;


      //Read each line until the end of the file
      while(fin)
        {
	  //  line++; //update the line number
	   ProcessARow(score1, score2, score3, min, max, average);


	
	   cout << setw(20) <<  name << fixed <<  setprecision(2) << setw(20) << average << setw(20) << min << setw(20) << max << endl ; 
          //Read the next line
          fin >> name >> score1 >> score2 >> score3;
        }
      fin.close();
       //close the input file when done
    }


  // sum(score1, score2, score3) ;

  return 0;
}

//Returns the sum of 2 numbersdouble sum(double& score1, double& score2, double& score3,double& minScore, double& maxScore, double& average)
void ProcessARow( double score1, double score2, double score3, double& min, double& max, double& average)
{

  //  average =   sum(score1, score2, score3, minScore, maxScore, average)/3;
;
  max = score1 ;
  min = score1 ;

  if(max < score2 )
    {
      max = score2 ;
    }
  if(max < score3)
    {
      max = score3 ;
    }
  //different if
  if(score2 < min)
    {
      min = score2 ;
    }
  if(score3 < min)

    {
      min= score3 ;
    }

average =(score1 + score2 + score3)/3 ;  

  // return score1 + score2 + score3;
}

/*double ProcessARow(double& score1, double& score2, double& score3, double minScore, double maxScore, double average)

{
  double mxScore, mnScore, avg ;
  average =  sum(score1, score2, score3);
  maxScore = score1 ;
  minScore = score1 ;

  if(maxScore < score2 )
    {
      maxScore = score2 ;
    }
  if(maxScore < score3)
    {
      maxScore = score3 ;
    }

  if(score2 < minScore)
    {
      minScore = score2 ;
    }
  if(score3 < minScore)

    {
      minScore = score3 ;
    }

}
*/
