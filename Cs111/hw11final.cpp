// Ex// Example program
#include <iostream>
#include <string>
#include <math.h> 
#include<cmath>
using namespace std; 
void getInfo(int &numberOfRooms,double &paintPrice);
void getWallSquareFeet(double &wallSquareFeet);
double numberOfGallons(double wallArea);
double laborHours(double wallArea);
void displayCost(double gallons,double paintPrice,double hours);

void getInfo(int &numberOfRooms,double &paintPrice)
{
  cout << "What is the number of rooms?" << endl; 
  cin >> numberOfRooms ;

  while(numberOfRooms < 1)
    {
      cout << "That is an invalid number of rooms!" ;
      cout << "What is the number of rooms?" << endl; 
      cin >> numberOfRooms ;
    } //paste here forloop
}
  
void getWallSquareFeet(double &wallSquareFeet)
{
  int numberOfRooms;
  double area = 0, totalArea = 0;
  double paintPrice;
  double wallArea;
  getInfo(numberOfRooms, paintPrice);
  for(int r =1; r <= numberOfRooms; r++)
    {
      cout << "What is the square feet of room " << r << "?" << endl ; 
      cin >> area ; 
      while(area < 0)
	{
          cout << "Please enter a value greater than zero!" << endl; 
	  cin >> area ;
	} 
      totalArea += area; 
      wallSquareFeet = totalArea;
      wallArea = wallSquareFeet;
    }
  cout << "What is the price of paint per gallon?: " << endl ; 
  cin >> paintPrice; 
  while(paintPrice < 10.00)
    {
      cout << "Please enter a value higher than $10!" << endl; 
      cout << "What is the price of paint per gallon?: " << endl ; 
      cin >> paintPrice;
    }
  cout << "The total area is: " << totalArea << "\n" ; 
  
}

double numberOfGallons(double wallArea)
{
  double gallons;
  gallons = 110 / wallArea;
  return gallons;
}

double laborHours(double wallArea)
{
  double hours; 
  hours = 8 * numberOfGallons(wallArea) ;
  return hours;
}

void displayCost(double gallons, double paintPrice, double hours, double wallArea, double wallSquareFeet)
{   double totalPrice, laborPrice, totalPaintPrice;
  totalPaintPrice = paintPrice * numberOfGallons(wallArea);
  laborPrice = laborHours(wallSquareFeet) * 25.00;
  totalPrice = laborPrice + totalPaintPrice; 
 
}    
    
int main()
{
  int numberOfRooms = 0 ;
  double paintPrice = 0;
  double wallSquareFeet = 0;
  double wallArea = 0; 
  double gallons = 0;
  double hours= 0;


  getWallSquareFeet(wallSquareFeet);


  gallons = numberOfGallons(wallSquareFeet);
  cout << "The number of gallons of paint required is: " << ceil(gallons) << " gallons" << endl;

  hours = laborHours(wallSquareFeet) ;
  cout << "The number of hours of labor required is: " << ceil(hours) << " hours" << endl;

  displayCost(gallons, paintPrice, hours);






}
