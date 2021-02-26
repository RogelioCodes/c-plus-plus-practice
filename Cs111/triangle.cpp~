#include<iostream>
#include<iomanip>
#include "myMath.h"
#include<iomanip> 
using namespace std ; 
void Message() ; 
void getPoints(int& x, int& y) ;
double triangle (int& x1, int& y1, int& x2, int& y2);
void displayTri(double length1, double length2, double length3);


int main()
{
  char ch ; 
  int x1, y1, x2, x3, y2, y3 ;
  double length1, length2, length3 ;  
  Message() ;
  cin.get(ch);//ignore();   

  cout << left << setw(10) << "Point 1 " << endl ;
  getPoints(x1, y1) ;
  cout << endl ; 

  cout << left << setw(10) << "Point 2 " << endl ;
  getPoints(x2, y2) ;
  cout << endl ; 

  cout << left << setw(10) << "Point 3 " << endl ;
  getPoints(x3, y3) ; 
  cout << endl ; 

  length1 = triangle(x1, y1, x2, y2) ;

  length2 = triangle(x2, y2, x3, y3) ;

  length3 = triangle(x1, y1, x3, y3) ;

  displayTri(length1, length2, length3);

return 0 ; 

}

void Message()
{
  cout << endl ;
  cout << "***************************************************************" << endl ;
  cout << "This program will ask you to enter 3 points of a triangle and"  << endl ;
  cout << "tell what kind of triangle it is. Please hit ENTER to continue." << endl ;
  cout << "***************************************************************" << endl ;

}

void getPoints(int& x, int& y)
{

  //  int x, y ; 

  cout << "Enter x: ";
  cin >> x;
  cout << "Enter y: ";
  cin >> y;

}


double triangle (int& x1, int& y1, int& x2, int& y2) 
{
  //double length =  pow(x1, y1);
  //cout << "length: " << length ;

  double length =  sqrt (pow(x1-x2,2) + pow(y1-y2,2)) ;
  //double length_b = (x2-x1); 
 return length ; 
}

void displayTri(double length1, double length2, double length3)
{

  if((fabs(length1 - length2) < 0.00001) && (fabs(length2 - length3) < 0.00001) && (fabs(length1 - length3) < 0.00001))
    {
      cout << "Triangle is equilateral " << endl ; // all three
    }
  if((fabs(length1 - length2) < 0.00001) || (fabs(length3 - length1) < 0.00001) || (fabs(length2 - length3) < 0.00001))
    {
      cout << "Triangle is isosceles" << endl ; //two same
    }
  else
    {
      cout << "Triangle is scalene" << endl ; // none
    }

}
