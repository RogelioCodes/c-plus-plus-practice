#include <iostream>
#include <string>
using namespace std; 
void getInfo(int &numberOfRooms,double &paintPrice);
void getWallSquareFeet(double &wallSquareFeet);
double numberOfGallons(double wallArea);
double laborHours(double wallArea);
void displayCost(int gallons,double paintPrice,double hours);


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
  int area = 0, totalArea = 0;
  double paintPrice;
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
    }
  cout << "The total area is: " << totalArea << "\n" ; 
}
    


int main()
{
  int numberOfRooms ;
  double paintPrice ;
  double wallSquareFeet;




  getWallSquareFeet(wallSquareFeet);


  cout << "What is the price of paint per gallon?: " << endl ; 
  cin >> paintPrice; 
  while(paintPrice < 10.00)
    {
      cout << "Please enter a value higher than $10!" << endl; 
      cout << "What is the price of paint per gallon?: " << endl ; 
      cin >> paintPrice;
    }




}








