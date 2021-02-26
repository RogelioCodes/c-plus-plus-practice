#include <iostream>
#include <iomanip>
using namespace std;

const int YR = 3;
struct address
{
  int number;
  string street;
  string city;
};
struct home 
{
  int id;
  address ad;
  int years [YR];
};

void fillArray (home ar[], const int YR);
void printHMSoldsince2014 (home ar[], const int YR);
int search (home ar[], const int YR, int key);
int main()
{
  home ar[YR];
  int key;
  fillArray (ar,YR);
  printHMSoldsince2014 (ar,YR);
  cout << "Enter owner's key ID ";
  cin >> key;
  int check;
  check = search (ar,YR,key);

  if (check != -1)
    {
      cout << ar[check].ad.number << endl;
      cout << ar[check].ad.street << endl;
      cout << ar[check].ad.city << endl;
    }
  else
    {
      cout << "Not found";
    }
  return 0;
}

void fillArray (home ar[], const int YR)
{
  for (int i=0; i < YR; i++)
    {
      cout << "Enter the ID: " << endl;
      cin >> ar[i].id;
      cout << "Enter the number of address: " << endl;
      cin >> ar[i].ad.number;
      cout << "Enter the street name: " << endl;
      cin >> ar[i].ad.street;
      cout << "Enter the city: " << endl;
      cin >> ar[i].ad.city;
      for (int x=0; x <3; x++)
	{
	  cout << "Enter years sold: " << endl;
	  cin >> ar[i].years[x];
	}
    }
}

void printHMSoldsince2014 (home ar[], const int YR) 
{
  cout << "Bedrooms sold later than 2014 are; " << endl;
  for (int i=0; i < YR; i++)
    {
      if (ar[i].years[2] >= 2014)
	{
	  cout << ar[i].id << endl;
	}
    }
}
int search (home ar[], const int YR, int key)
{
  int index = -1;
  for (int i=0; i < YR; i++)
    {
      if (ar[i].id==key)
	{
	  index=i;
	  return index;
	}
    }
  return index;
}
