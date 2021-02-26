 #include <iostream>
#include <string>
using namespace std; 

int main()
{
  const double PI = 3.14;
  double age, gpa, area; 

  string name; 
  double radius, circum; 
   
  char gender ; 
    
  cout << "Enter your age: "  ;
  cin >> age; 
    
  cout << "Enter your gpa: "  ; 
  cin >> gpa ;
    
  cout << "Enter your gender: " ;
  cin >> gender ; 
    
  cout << "Enter your first name: " ; 
  cin >> name ; 
    
  cout << "Enter the radius of the circle: " ;
  cin >> radius ; 
  area =  PI * radius * radius ;  
  circum = 2 * PI * radius ;
  
  cout << "Hello " << name << "." << endl;
  cout << "Your GPA is: " << gpa << endl;
  cout << "Your gender is: " << gender << endl ; 
  cout << "The area is: " << area << endl ;  
  cout << "The circumference is: " << circum << endl;

  return 0;    
}
