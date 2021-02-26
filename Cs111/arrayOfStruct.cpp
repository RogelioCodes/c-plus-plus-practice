
#include <iostream>
#include <iomanip>
using namespace std;

struct home
{
  string owner;
  double price;
  int bedrooms;
};
const int SIZE = 5;
void fillArray (home ar[], const int SIZE);
void print2bedrm (home ar[], const int SIZE);
void printPrice (home ar[], const int SIZE);

int main ()
{
  home ar[SIZE];
  fillArray (ar,SIZE);
  print2bedrm (ar,SIZE);
  printPrice (ar, SIZE);

  return 0;
}

void fillArray (home ar[], const int SIZE)
{
  for (int i=0; i < SIZE; i++)
    {
      cout << "Name of owner is ";
      cin >> ar[i].owner;
      cout << "Price of house is ";
      cin >> ar[i].price;
      cout << "Number of bedroom are ";
      cin >> ar[i].bedrooms;
      cout << endl;
    }
}
void print2bedrm (home ar[], const int SIZE)
{
  cout << "Bedrooms greater than 2 are: " << endl;
  for (int i=0; i < SIZE; i++)
    {
      if (ar[i].bedrooms >= 2)
        {
          cout << ar[i].owner << endl;
	  cout << ar[i].price << endl;
          cout << ar[i].bedrooms << endl;
        }
    }
}

void printPrice (home ar[], const int SIZE)
{
  cout << "Bedrooms greater than 500 and less than 800 are: " << endl;
  for (int i=0; i < SIZE; i++)
    {
      if (ar[i].price >= 500 && ar[i].price <= 800)
        {
          cout << ar[i].owner << endl;
          cout << ar[i].price << endl;
          cout << ar[i].bedrooms << endl;
        }
    }
}
