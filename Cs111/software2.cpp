#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{

  double itemQuantity;
  string salestax ;
  string total ;
  string name ;
  string date ;
  double discountedPrice, totalPrice, discount, initialPrice ; 
  cout << "Enter today's date (mm/dd/yy):" ;
  cin >> date ;

  cin.ignore();
  cout << "Enter your company name:  " ;
  getline(cin, name);

  cout << "Enter the quantity you would like to purchase: " ;
  cin >> itemQuantity;

  initialPrice = itemQuantity * 99 ;

  if(itemQuantity > 0)
    {
      if(itemQuantity >= 10 || itemQuantity <= 19)
	{
	  discount = .2;
	}
  
      else if(itemQuantity >= 20 || itemQuantity <= 49)
	{

	  double discount = .3;
   
	}

      else  if(itemQuantity >= 50 || itemQuantity <= 99)
	{

	  double discount = .4;
   
	}

      else if(itemQuantity >= 100 )
	{

	  double discount = .5;
    
	}
      else if(itemQuantity> 0 && itemQuantity < 10)
	{
	  discount = 0;
	}

      discountedPrice = initialPrice * discount  ;
      totalPrice = initialPrice - discountedPrice;

      cout  <<  "Invoice for " << name << endl << endl ;
 
      cout << fixed << setprecision(2) ;
      cout << left << setw(30)  << "Initial Price: " <<  "$" << right <<  setw(10) << initialPrice << endl;
      cout << left << setw(30) << "Discount" << "$" << right << setw(10) << discountedPrice << endl ;
      cout << left <<  setw(30) << "Total"  << "$" << right << setw(10) << totalPrice << endl << endl ;

    }else if(itemQuantity < 0)
    {
      cout << endl ; 
      cout << "Invalid quantity" << endl << endl;
      return 0 ;
    }

  if(itemQuantity==0)
    {
      cout << endl; 
      cout << "Hope you decide to buy our software in the future" << endl << endl ;
      return 0 ;}

  return 0;
}

