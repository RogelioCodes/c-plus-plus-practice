#include<iostream>
#include<string>
using namespace std;

int main()
{
  char grade ;
  bool pass ;
  pass = false ; 
  cout << "Enter a grade: " ;
  cin >> grade ;
  
  if(grade == 'A' || grade == 'B')
    {
      cout << "Good job" << endl ;
      pass = true ;
    }
  else if(grade == 'C' )
    {
      cout << "OK" << endl ;
      pass = true ; 
    }
  else if (grade == 'D' || grade == 'F' )
    {
      cout << "Work harder" << endl ;
    }
  else
    
    {
      cout << "Invalid grade" << endl ;
    }
    
  if ( pass == true )
    {
      cout << "Congratulations, you passed the class!" << endl ; 
    }

  return 0 ;
}

