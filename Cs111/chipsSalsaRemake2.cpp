B//B
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void fillJarsArray(string salsaType[], int jarsSold[]);
void printSales(string salsaType[], int jarsSold[]) ;
int getTotal(int jarsSold[]) ;
void getHighestLowestSelling (int jarsSold[] , int& high, int& low) ;

int main()
{
  string salsaType[5] = {"mild", "medium", "sweet", "hot", "zesty"};
  int jarsSold[5] = {0} ;
  
  int high = 0 ;
  int low = 0 ;
  

  fillJarsArray(salsaType, jarsSold) ;
  printSales(salsaType, jarsSold) ;

  int total = getTotal(jarsSold) ;
  getHighestLowestSelling(jarsSold, high, low) ;


  cout << "The total number of jars sold is: " << total << endl ;

  cout << "The highest selling type is " << salsaType[high] << endl ;

  
cout << "The lowest selling type is " << salsaType[low] << endl ;

  return 0 ;
}

void fillJarsArray(string salsaType[], int jarsSold[])
{
  int i = 0 ;
  for(i = 0 ; i < 5 ; i++ )
    {
      cout << "Enter the number of jars sold for " << salsaType[i] << ": "  ;
      cin >> jarsSold[i] ;

      while(jarsSold[i] < 0)
        {
          cout << "Enter the number of jars sold for " << salsaType[i] << ": " ;

          cin >> jarsSold[i] ;
        }

      cout << endl ;
    }
}

void printSales(string salsaType[], int jarsSold[])
{
  int i = 0;
  for(int i = 0 ; i < 5 ; i++ )
    {
      cout  << salsaType[i] << "\t\t" << setw(5) << right << jarsSold[i] << endl ;
    }
}

int getTotal(int jarsSold[])
{
  int total = 0 ;
  int i = 0 ;

  for(i = 0 ; i < 5 ; i++)
    {
      total += jarsSold[i] ;
    }

  return total ;
}

void getHighestLowestSelling( int jarsSold[], int& high, int& low)
{
  int i = 0 ;
  int highest = 0 ;
  int lowest = 0   ;

  for(int i = 0 ; i < 5 ; i++)
    {
      if(jarsSold[i]>= highest)
        {
         
          highest = i ;
	  high = highest ; 
        }
      else if(jarsSold[i] <=lowest)
        {
          lowest = i ;

          low = lowest ;
	}
    }
}
