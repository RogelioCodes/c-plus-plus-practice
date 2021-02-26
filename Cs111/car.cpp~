#include <iostream>
#include<iomanip>
#include <fstream>
using namespace std; 

int main()
{
  string model ; 
  int total = 0 ; 
  int total2 = 0; 
  int count = 0 ; 
  int miles ; 
  int gas ;
  int num = 0  ;   
  ifstream fin ; 
  ofstream fout ;

  fin.open("car.dat");

  if(!fin)
    {
      cout << "Cannot open the input file." << endl ; 
    }
  else 
    {
      fout.open("result.dat");

      fout << left << "Model Name" << setw(23)<< right << "Miles Driven" << setw(29) << "Gallons of Gas Used" << right << setw(33) << "MPG" << setw(30) << endl ;

      fin >> model ; 
      fin >> miles ; 
      fin >> gas ; 

      while(fin)
	{
	  total += miles ; 
	  total2 += gas ;  
	  count ++ ; 

	 
	  fout << left << setw(30) <<  model << setw(30) << miles << setw(30) << gas << setw(30) << setprecision(4) <<  (double) miles/gas <<  endl  ; 	

	  fin >> model ; 
	  fin >> miles ; 
	  fin >> gas ; 
     


	}

      if(count !=0 )
	{
	fout << "Total Miles Driven: " << total << " miles" << endl ; 
	  fout << "Total Gallaons of Gas Used: " << total2 << " gallons" << endl ; 
	  fout << "Average MPG:" << setprecision(5) <<  (double)total/total2 << " miles per gallon" <<  endl ; 
	} else 
       fout << "there were no numbers in this file. " ; 
      fin.close() ;
      fout.close() ; 
    }

  return 0; 
}
