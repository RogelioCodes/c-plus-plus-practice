#include<iostream>
#include<iomanip>
#include<string>
using namespace std; 

int main()
{
  string movieName ;
  const double grossBoxProfit = 0.20 ;
  double adultTickets, childTickets, grossBox, netBox, distributorCut ; 
  double adultPrice = 10.00 ;
  double childPrice = 6.00 ;

  cout<< "What is the name of the movie?" ;
  getline(cin, movieName) ;
  cout << "How many adults tickets were sold?" ;
  cin >> adultTickets ; 
  cout << "How many children's tickets were sold?" ;
  cin >> childTickets ;

  grossBox = (adultTickets * adultPrice) + (childTickets * childPrice) ; 
  netBox = grossBox * grossBoxProfit ; 
  distributorCut = grossBox - netBox ;

  cout << left << setw(30) << "Movie Name:" << right << setw(20) << '"' << movieName << '"' << endl ;
  cout << left << setw(30) << "Adult Tickets Sold:" << right << setw(20) << " " << setw(5) << adultTickets << endl ;
  cout << left << setw(30) << "Child Tickets Sold:" << right << setw(20) << " " << setw(5) << childTickets << endl ; 
  cout << setprecision(2) << fixed ;
  cout << left << setw(30) << "Gross Box Office Profit:" << right << setw(20) << "$" << setw(8) << grossBox << endl ;
  cout << left << setw(30) << "Net Box Office Profit:" << right << setw(20) << "$" << setw(8) << netBox << endl ; 
  cout << left << setw(30) << "Amount Paid to Distributor:" << right << setw(20) << "$" << setw(8) << distributorCut << endl ; 

  return 0;
}
 