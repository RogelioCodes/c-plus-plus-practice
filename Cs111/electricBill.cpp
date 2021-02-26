/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 3
2-24-2017

This program will ask the user for the month, the previous meter reading, and the current meter reading. It will then calculate an electric bill.
/****************************************************************************************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std; 

int main()
{
  double total ;  // difference of the current meter - previous meter
  double lessTotal ; //how much the user went over 400
  double monthDue ; // total due at end of month
 int month; 
  int currentMeter ; 
  int previousMeter ;
   
  //collects month
  cout << "Enter the month: ";
  cin >> month ; 

  if (month <= 0 || month > 12) //makes sure the month exists (1-12)
    {
      cout << month << " is an invalid month" << endl << endl ; 
    }
  else //month exists so it runs this
    {
      //collects data
      cout << "Enter the current meter reading: " ; 
      cin >> currentMeter ;
      cout << "Enter the previous meter reading: " ;
      cin >> previousMeter ; 

      if(previousMeter > currentMeter || previousMeter < 0 ) //checks for a valid meter reading
	{
	  cout << "These readings are invalid" << endl << endl ; 
	}
      else // meter reading is valid so it runs 
	{
	  total = currentMeter - previousMeter ; //calculates total
	  lessTotal = total - 400 ; //calculates how much over 400 

	  if(total > 400 ) //checks that the total went over 400
	    {
	      switch(month)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 10: 
		case 11:
		case 12:
		  monthDue = (.06575 * lessTotal) + 8.50 ; //calculates monthly due
		  break ; 
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		  monthDue = (.07525 * lessTotal) + 8.50 ; //calculates monthly due
		  break ;
		}  
		  cout << endl ; 
		  cout << "You consumed " << total << " and your amount due is " << fixed << setprecision(2) << "$" << monthDue << endl ;
		  cout << endl ; 
		} 
	  else //doesnt go over 400
		{
		  monthDue = 8.50 ;
		  cout << endl ; 
		  cout << "You consumed " << total << " and your amount due is " << fixed << setprecision(2) << "$" << monthDue << endl ;
                  cout << endl ;
		}
	}
    }
  return 0 ;
}
