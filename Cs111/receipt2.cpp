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
  char ch;

  cout << "This program will ask you for today's date, the sales person's name, item name and price. It will" << endl ;
  cout << "then show the store receipt including the sales tax and total purchase price.  When you are ready, " << endl ;
  cout << "press enter to continue the program." << endl ;

  cin.get(ch);//ignore();

 

  cout << "Enter today's date (mm/dd/yy):" ;
  cin >> date ;
  cin.ignore();

  
  cout << "Enter the salesperon's name: " ;
  getline(cin, name) ;

  cout << "Enter the item name: " ;
 
  //    cin.ignore(100, '\n') ;
  getline(cin, itemName);
  
  
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

