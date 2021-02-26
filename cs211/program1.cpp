// for program 2 mimic slotts help file 
//u could copy car.cpp by doing cp ~/cs111/car.cpp savings.cpp
#include <iostream>
#include<iomanip>
#include <fstream>
using namespace std;

int main()
{
  string model ;
  int accountNumber ;
  double startingBalance ;
  double amountDeposited ;
  double amountWithdrawn ;
  double endingBalance ; 
  const double interest = 1.05 ; 
  ifstream fin ;
  ofstream fout ;
  int count = 0 ; 
  fin.open("accounts.txt");

  if(!fin)
    {
      cout << "Cannot open the input file." << endl ;
    }
  else
    {
      fout.open("accountsOut.txt");

      fout  << setw(20) <<  "AccountNumber" << setw(20) << "StartingBalance" << setw(20) << "Deposit" << right << setw(20) << "WithDrawal" << setw(20) << "EndingBalance" << endl ;
      fout << "--------------------------------------------------------------------------------------------------------------" << endl ;
      fin >> accountNumber ;
      fin >> startingBalance;
      fin >> amountDeposited ;
      fin >> amountWithdrawn ; 
      while(fin)
        {

	  count ++ ;
	  fout << fixed<<   setprecision(2)<<  setw(20) << accountNumber << setw(20) << startingBalance << setw(20) << amountDeposited << setw(20) << amountWithdrawn <<  setw(20)<< 
   /*ending balance*/ (startingBalance + amountDeposited - amountWithdrawn)*interest   << endl  ;

  fin >> accountNumber ;
 fin >> startingBalance;
 fin >> amountDeposited ;
 fin >> amountWithdrawn ;
 
	  


        }

      if(count !=0 )
        {
	  ;
        } else
	fout << "there were no numbers in this file. " ;
      fin.close() ;
      fout.close() ;
    }

  return 0;
}

