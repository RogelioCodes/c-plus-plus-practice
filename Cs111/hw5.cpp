#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
  const double packageA= 39.99;
  const double packageB = 49.99;
  const double packageC = 59.99;
  const double packageD = 69.99; 
  double minutes, total ; 
  char package ;

  cout << "Which package do you have A,B,C, or D? : " ;
  package = cin.get();

  if(package == 'A' || package == 'B' || package == 'C' || package == 'D')
    {
      cout << "\nHow many minutes were used: ";
      cin >> minutes ;
      if(minutes > 43829 || minutes < 0) 
	{
	  cout << "Minutes cannot be greater than 43829 or less than 0!! \n\n" << "Enter minutes again: ";
	  cin >> minutes ; 
	}
      if(package == 'A')
	{
	  if(minutes < 450 )
	    {
	      total = packageA ;
	    }
	  else
	    total = ((minutes-450)*0.45)+ packageA ; 
	      cout << "The amount due is: $" << total << "\n\n" ;
	}
	  if(package == 'B')
	    {
	      if(minutes<900)
		total = packageB;
	      else
		total = ((minutes - 900)*.35)+ packageB;
	      cout << "The amount is: $" << total << "\n\n" ;
	    }
	  if(package == 'C')
	    {
	      if(minutes<1200)
		total = packageC;
	      else total = ((minutes-900)*.35) + packageC;
	      cout << "The amount due is: $" << total << "\n\n" ; 
}
	  if(package == 'D')
	    {
	      total = packageD;
	      cout << "The amount due is: $ " << total << "\n\n" ; 
    }
    }
	  else 
	    cout << "You did not enter A,B, C, or D!!!! \n\n" 
		 << "Please run the program again!! \n\n";
	  return 0;
    }
