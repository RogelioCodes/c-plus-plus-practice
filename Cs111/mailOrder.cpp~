/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 5
3-20-2017

This program will ask the user for a county code, account number, information on the date and year, calculate shipping and sales tax as well as a 
a discount, then calculate a total and print out a mail order. This program has six functions, one to calculate a discount, one to get customer info,
one to get item info, one to calculate shipping, one to calculate sales tax, and one to output the invoice
****************************************************************************************************************************************************/
#include<iostream>
#include <iomanip> 
using namespace std; 

//prototypes
void getCustomerInfo(int& account, int& day, int& month, int& year, char& countyCode) ; 
void getItemInfo(double& totalPrice, int& totalWeight) ; 
double calcDiscount(int month, double totalPrice) ; 
double calcSalesTax(char countyCode, double totalPrice, double amountDiscounted); 
double calcShipping( int totalWeight) ; 
void outputInvoice( int account, char countyCode, int month, int day, int year, double totalPrice,double amountDiscounted, double amountSalesTax, double shipping); 

int main()
{
  int account ; //account number
  int day ; //day 
  int month ; //month
  int year ;  //year 
  char countyCode ; //county code
  int totalWeight = 0 ; //the weight of item
  double shipping ; //cost of shipping
  double amountDiscounted ; //the amount being discounted 
  double amountSalesTax ;  //the sales tax 
  double totalPrice ; 

  //Calls each function
  getCustomerInfo(account, month, day, year, countyCode) ;
  getItemInfo(totalPrice, totalWeight) ; 
  amountDiscounted = calcDiscount(month, totalPrice) ;
  shipping = calcShipping(totalWeight) ; 
  outputInvoice(account, countyCode, month, day, year, totalPrice, amountDiscounted, amountSalesTax, shipping) ;
  return 0 ; 
}

void getCustomerInfo(int& account, int& day, int& month, int& year, char& countyCode)
{
  cout << "Enter the account number: " ;
  cin >> account ; 

  cout << "Enter a month: " ; 
  cin >> month ; 

  cout << "Enter a day: " ; 
  cin >> day ; 

  cout << "Enter a year: " ; 
  cin >> year ; 

  cout << "Enter a county code: " ; 
  cin >> countyCode ; 
}

void getItemInfo(double& totalPrice, int& totalWeight)
{
  double price = 0 ; //price of item
  int weight = 0 ; //weight of item
  char choice ; 

  cout << "\n Do you want to order an item? Enter Y or N: " ; 
  cin >> choice ; 

  while(choice == 'Y') 
    {
      cout << "   Enter a price: " ; 
      cin >> price ; 
      totalPrice = price + totalPrice ; 

      cout << "   Enter a weight: " ; 
      cin >> weight ; 
      totalWeight += weight ;  //adds weight to total weight

      cout << "\n Do you want to order an item? Enter Y or N: " ; 
      cin >> choice ; 
    }
} 

//calculates the discount
double calcDiscount(int month, double totalPrice)
{
  double discount ; 
  double amountDiscounted ; 

  if(month >= 1 && month <= 5 )
    discount = 0.05 ;
  else if(month >=6 && month <= 8)
    discount = .1 ; 
  else 
    discount = 0.15 ; 

  amountDiscounted = discount + (double)totalPrice ; //adds the discount to the price

  return amountDiscounted ; 
} 

double calcSalesTax( char countyCode, double totalPrice, double amountDiscounted) //calculates sales tax
{
  double salesTax ; 
  double amountSalesTax ; 

  if(countyCode == 'S') 
    salesTax = 0.0775 ; 
  else if(countyCode == 'O' )
    salesTax = 0.0775 ;
  else if(countyCode == 'L' )
    salesTax = 0.0825 ; 

  totalPrice = totalPrice - amountDiscounted ; //calculates totalPrice
  amountSalesTax = salesTax * (double)totalPrice ; //calculates sales tax price 

  return amountSalesTax ; 
} 

double calcShipping(int totalWeight) //calculates total cost of shipping
{
  double shipping ;  //price of shipping
  double changeWeight ; //this calculates the change in weight
  double amountRate ; // how much over the common rate

  if(totalWeight <= 25) 
    shipping = 5 ; 
  else if(totalWeight >= 26 && totalWeight <= 50)
    {
      changeWeight = totalWeight - 25 ; //change in weight 
      amountRate = changeWeight * .10 ; //calculates how much user went over common rate 
      shipping = (double)amountRate + 5 ; //calculates total shipping price
    }
  else if(totalWeight > 50)
    {
      changeWeight = totalWeight - 50 ;  //change in weight 
      amountRate = changeWeight * .07 ; //calculates how much the user went over common rates 
      shipping = 5 + (25 * .10) + amountRate ; 
    }
  return shipping ; 
}

void outputInvoice(int account, char countyCode, int month, int day, int year, double totalPrice, double amountDiscounted, double amountSalesTax, double shipping)
{
  cout << left << setw(20) << endl ; 
  cout << left << setw(20) << "ACCOUNT NUMBER" << right << setw(10) << "COUNTY" << endl ; 
  cout << left << setw(20) << account << right << setw(10) << countyCode << endl << endl ; 
  cout << left << setw(12) << "DATE OF SALE " << month << "/" << day << "/" << year << endl << endl ; 
  cout << left << setw(20) << "TOTAL SALE AMOUNT:  $" << right << setw(8) << totalPrice << endl ; 
  cout << left << setw(20) << "DISCOUNT:           $" << right << setw(8) << amountDiscounted << endl ;   
  cout << left << setw(20) << "SALES TAX:          $" << right << setw(8) << amountSalesTax << endl ; 
  cout << left << setw(20) << "SHIPPING:           $" << right << setw(8) << shipping << endl ; 
  cout << left << setw(20) << "TOTAL DUE:          $" << right << setw(8) << (totalPrice - amountDiscounted) + amountSalesTax + shipping << endl ; 
  cout << endl ; 
}
