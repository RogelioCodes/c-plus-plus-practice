
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
  double quantity =0.0;
  double unitPrice;
  double percentage, granTotal = 0.0, granTax = 0.0, total =0.0;

do
  {
    cout << "Enter item quantity." << endl; 
    cin >> quantity;
    if(quantity<-1) 
      {
        cout << "Please enter a number greater than 0, entering -99 will terminate the program." << endl;
    
      }else
      { if(quantity >25 || quantity <= 0)
	  cout << "Please enter a number that is in the range of 1-25." ;
      }
    {
      if(quantity >=1)
	{
	  cout << "Enter a unit price." << endl;
	  cin >> unitPrice;
	  percentage = quantity * unitPrice * .12;
	  total = quantity * unitPrice; 
        
	  granTotal += total;
	  total += percentage;
	  cout << "Total sale for this item is: " << total << endl;
	  granTax += percentage;
	}
    }

  }while (quantity !=-99);

 cout << "Subtotal: " << granTotal << endl;
 cout << "Sales Tax: " << granTax << endl;
 cout << "Total: "<< granTotal + granTax << endl;

 return 0;

}
