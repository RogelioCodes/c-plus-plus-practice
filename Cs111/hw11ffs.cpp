// Ex// Example program
#include <iostream>
#include <string>
#include <math.h> 
#include<cmath>
using namespace std; 
voidgetInfo(int&numberOfRooms,double&paintPrice);
voidgetWallSquareFeet(double&wallSquareFeet);
doublenumberOfGallons(doublewallArea);
doublelaborHours(doublewallArea);
voiddisplayCost(doublegallons,doublepaintPrice,doublehours, double wallArea);


voidgetInfo(int&numberOfRooms,double&paintPrice)
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
  
voidgetWallSquareFeet(double&wallSquareFeet)
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


doublenumberOfGallons(doublewallArea)
{
  double gallons;
  gallons = 110 / wallArea;
  return gallons;
}


doublelaborHours(doublewallArea)
{
  double hours; 
  hours = 8 * numberOfGallons(wallArea) ;
  return hours;
}

voiddisplayCost(double gallons, double paintPrice, double hours, double wallArea)
{
  double wallSquareFeet = 0;
  getWallSquareFeet(wallSquareFeet);

  double totalPrice, laborPrice, totalPaintPrice;
  gallons = numberOfGallons(wallSquareFeet);
  hours = laborHours(wallSquareFeet) ;
  laborPrice = hours * 25.00;
  totalPaintPrice = paintPrice * numberOfGallons(wallArea);
  totalPrice = laborPrice + totalPaintPrice; 


  cout << "test " << paintPrice;


  cout << "The number of gallons of paint required is: " << ceil(gallons) << " gallons" << endl;


  cout << "The number of hours of labor required is: " << ceil(hours) << " hours" << endl;

  cout << "The cost of the labor will be $" << laborPrice << endl; 
  cout << "The total price is: " << totalPrice << " " << laborPrice << " " << totalPaintPrice; 
}    


int main()
{
  int numberOfRooms = 0 ;
  double paintPrice = 0;
  double wallSquareFeet = 0;
  double wallArea = 0; 
  double gallons = 0;
  double hours= 0;

  double totalPrice, laborPrice, totalPaintPrice;

  displayCost(gallons, paintPrice, hours, wallArea);






}
