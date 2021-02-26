#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int  choice ;
 
  cout << "Enter a month(number) " << endl;
  cin >> choice;
  
  switch (choice)
    {
    
    case 1: 
    case 2: 
    case 12:
      cout << "Winter" << endl ;
      break;
     
    case 3:
    case 4:
    case 5:
      cout << "Spring" << endl ;
      break ;
     
     
    case 6: 
    case 7:
    case 8:
      cout << "Summer" << endl ;
      break ;
    
     
    case 9: 
    case 10:
    case 11:
      cout << "Fall" << endl ;
      break ;

    default:
      cout << "Invalid month" << endl ;  
    
    }
  return 0;
}
