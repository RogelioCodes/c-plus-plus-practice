/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 6
4-10-2017

A program that lets a maker of chips and salsa keep track of sales for five different types of salsa:
mild, medium, sweet, hot, and zesty. 

****************************************************************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//protypes
void fillJarsSoldArray (const string type[], int  typeSize, int jar[], int jarSold);
void printSales (const string type[], int typeSize, const int jar[], int jarSold);
int getTotal (int const jar[], const int jarSold );
void getHighestLowestSelling (const int jar[], int jarSold, int& hi, int& low);

int main()

{ 
  const int salsaTypeSize = 5 ; //5 salsa types 
  const int jarSize = 5 ; //5 different jars
  string salsaType[salsaTypeSize] = {"mild", "medium", "sweet", "hot", "zesty"};

  int jars[jarSize] ; //5 jars

  int high = 0 ; 
  int low = 0 ; 

  fillJarsSoldArray(salsaType, salsaTypeSize, jars, jarSize ); //calls function
  
  printSales(salsaType, salsaTypeSize, jars, jarSize); //calls function
  
  cout << "The total number of jars sold is " << getTotal(jars, jarSize) << endl ;
  
  getHighestLowestSelling(jars, jarSize, high, low);

  cout << "The highest selling type is " << salsaType[high] << ".\n";

  cout << "The lowest selling type is " << salsaType[low] << ".\n";
 
 
  return 0;

}


void fillJarsSoldArray (const string type[], int  typeSize, int jar[], int jarSold)
{
  int num = 0 ; 

  for (int num = 0; num < 5; num++)
   {

     cout << "Enter the number of jars sold for " << type[num] << ": " ;  //user inputs number of jars sold
      cin >> jar[num]  ;
      while ( jar[num] < 0)  //doesnt accept negative inputs 
   {
     cout << "Enter the number of jars sold for " << type[num] << ": " ;
     cin >> jar[num];
      
   } cout << endl ; 
   }
}


//prints sales
void printSales (const string type[], int typeSize, const int jar[], int jarSold)

{

  for (int i = 0; i < 5; i++)
    
    {
      cout << left << setw(13) << type[i] << right << setw(7) << jar[i] << endl ; 
    
    }

}


int getTotal (int const jar[], const int jarSold)
{
  int  Total = 0;
  for (int i = 0; i < 5; i++)
 
    {

      Total += jar[i]; //calculates total number of jars and returns total
    
    }
return Total ; 


}


void getHighestLowestSelling (const int jar[], int jarSize, int& hi, int& low)

{

  int highest = 0 ; 
  int lowest = 0 ; 


  for (int i = 0; i < 5; i++)

    {

      if (jar[i] > jar[highest]) //checks highest
 
	{

	  highest = i;
	  hi = highest ; 
       
	}

      if (jar[i] < jar[lowest]) //checks lowest
 
	{
	  lowest = i;
	  low = lowest ; 
        }
    }
}

 
