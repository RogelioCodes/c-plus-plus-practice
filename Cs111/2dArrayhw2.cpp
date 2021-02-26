#include <iostream>
#include <iomanip>
using namespace std;
const int SIZE_STU = 5; 
const int SIZE_TEST = 3;


void fillArray(int scores[ ][SIZE_STU]);

void printArray(const int scores[ ][SIZE_STU]);


int main()
  
{
  int test;
  
  double avg;
  
  int scores[SIZE_TEST][SIZE_STU];


  fillArray(scores);
  
  printArray(scores);


  return 0;
}


void fillArray(int scores[][SIZE_STU] )

{
    
  for (int test = 0; test < SIZE_TEST; test++)
        
    {
      cout << "\nEnter scores for Test #" << test + 1 << endl;
            
      for(int stu = 0; stu < SIZE_STU; stu++)
	
	{
	  cout << "\tStudent #" << stu + 1 << " :";
	    
	  cin >> scores[test][stu];
	  
	}
          
    }
}


void printArray(const int scores[ ][SIZE_STU])
  
{
  int total = 0;

  cout << endl << setw(10) << "Test#"<< setw(10) << "Stu 1" << setw(10) << "Stu 2" << setw(10) << "Stu 3" << setw(10) << "Stu 4" << setw(10) << "Stu 5" << setw(10) << "Average" << endl;

  for (int test = 0; test < SIZE_TEST; test++)
        
    {
      total = 0;
      cout << setw(10) <<  test + 1;
      for(int stu = 0; stu < SIZE_STU; stu++)
	       
	{
	  cout << setw(10)<< scores[test][stu];
	  total +=scores[test][stu]; 
	}   
      cout << setw(10) << fixed << setprecision(1) <<  (double)total/SIZE_STU << endl;
          
    }


    
  cout << setw(10) << "Average";
  for(int stu = 0; stu < SIZE_STU; stu++)
      
    {
      total = 0;
          
      for(int test = 0; test < SIZE_TEST; test++)
	    
	{
	  total +=scores[test][stu];
	     
	}
      cout << setw(10) << fixed << setprecision(1) << (double)(total)/SIZE_TEST;
        
    }
   
  cout << endl;
}

