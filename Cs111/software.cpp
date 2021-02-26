/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 2
2-10-2017

This program will ask the user for a date, company name, and an item quantity. It will then calculate a discount and give an invoice detailing the 
price of the discount, total, and price before discount. 
****************************************************************************************************************************************************/

#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
  //variables 
  double itemQuantity; 
  string name ;
  string date ;
  double discountedPrice ;
  double totalPrice ; //total Price
  double discount ; //used to calculate discount percentage
  double initialPrice ; //price before discount

  //Collects date
  cout << "Enter today's date (mm/dd/yy): " ;
  cin >> date ;

  cin.ignore();
  // collects oompany name
  cout << "Enter your company name: " ;
  getline(cin, name);
  // collects item quantity
  cout << "Enter the quantity you would like to purchase: " ;
  cin >> itemQuantity;

  initialPrice = itemQuantity * 99 ; //calculates the price before discount

  if(itemQuantity > 0) //checks that the number is greater than 0
    {
      if(itemQuantity >= 10 && itemQuantity <= 19) //Checks the discount
        {
          discount = .2;
        }

      else if(itemQuantity >= 20 && itemQuantity <= 49)//Checks the discount
        {

          discount = .3;

        }

      else  if(itemQuantity >= 50 && itemQuantity <= 99)//Checks the discount
        {

	  discount = .4;

        }

      else if(itemQuantity >= 100 ) //checks the discount
        {

	  discount = .5;

        }
      else if(itemQuantity> 0 && itemQuantity < 10) // checks the discount
        {
          discount = 0;
        }
         
      discountedPrice = initialPrice * discount  ; // calculates the discounted Price
      totalPrice = initialPrice - discountedPrice; // calculates total price 

      //outputs the invoice    
  cout << endl ; 
      cout  <<  "Invoice for " << name << endl << endl ;

      cout << fixed << setprecision(2) ;
      cout << left << setw(30)  << "Price before discount" <<  "$" << right <<  setw(10) << initialPrice << endl;
      cout << left << setw(30) << "Discount" << "$" << right << setw(10) << discountedPrice << endl ;
      cout << left <<  setw(30) << "Total Due"  << "$" << right << setw(10) << totalPrice << endl << endl ;

    }else if(itemQuantity < 0) //makes sure the input is greater than 0 
    {
      cout << endl ;
      cout << "Invalid quantity" << endl << endl;
     
    }

  if(itemQuantity==0) // if the output is zero the program outputs this and closes
    {
      cout << endl;
      cout << "Hope you decide to buy our software in the future." << endl << endl ;
      }

  return 0;
}
