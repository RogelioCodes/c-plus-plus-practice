#include<iostream>
using namespace std;
int main()
{
  double price, taxrate, total, salestax;

  // Get the retail price and the taxrate.
  cout << "What is the retail price? " ;
  cin >>        price;

  // Get the taxrate.
  cout<< "What is the taxrate? " ;
  cin>> taxrate ;

  // Calculate the sales tax
  salestax = taxrate * price;

  // Calculate the total
  total = salestax + price;
  cout<< "Salestax is " << salestax << endl; 
 cout << "Price is " << total << endl; 
return 0;
}
