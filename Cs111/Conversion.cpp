yards  = inches/YARD ;
inches = inches % FOOT ;//This program will convert a length in inches to yards, feet, and inches.
#include <iostream>
using namespace std;
int main()

{const double inchCent  = 2.54 ;
   ;
 int length, inches, yards, feet ;
  // please input a length in inches
 cout <<" enter inches" ;
 cin >> inches ;
 yards  = inches/YARD ;
 inches = inches * inchCent ;
 feet = inches / FOOT ;
 inches = inches % FOOT ;
 cout << yards << "yards " << feet << " feet " << inches << "inches" << endl;
 return 0 ;
}