#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
  const double taxrate = .0775;
  string itemName;
  string salestax ;
  string total ;
  string name ;
  string date ;
  double itemPrice, taxPrice, totalPrice;

  cout << "Enter sales person's name:  " ;
  cin >> name ;
  
  cout << "Enter today's date (mm/dd/yy):" ;
  cin >> date ;
  
  cout << "Enter the item name: " ;
  cin >> itemName;

  cout << "Enter the price of the item: " ;
  cin >> itemPrice ;
  
  
  
  
  cout << endl ; 

  taxPrice = itemPrice * taxrate;
  totalPrice = itemPrice + taxPrice;

 
  cout << left << setw(20) << "------------------------------" << endl << endl ;
  cout  <<  "\"Your Friendly Neighbor Store\" " << endl << endl ;
  cout << right << setw(30) << date << endl; 
  cout << right << setw(30) << name << endl << endl; 
  
  
  cout << fixed << setprecision(2) ;
  cout << left << setw(20) << itemName << "|" << right <<  setw(9) << itemPrice << endl;
  cout << left << setw(20) << "Sales Tax" << "|" << right << setw(9) << taxPrice << endl ;
  cout << left <<  setw(20) << "Total"  << "|" << right << setw(9) << totalPrice << endl << endl ;
  cout << left << setw(20) << "------------------------------" << endl << endl ;

  cout << "Thank you for shopping with us!" << endl<< endl ;
  return 0;
}