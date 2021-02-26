#include<iostream>
using namespace std;

int main()
{
  char choice ; 
  int num ;
  int even = 0 ;
  int odd = 0 ;
  int total = 0 ;
  double avg ;

  cout << "Do you have a number to check? y or n: "  ;
  cin >> choice ;

  while (choice == 'y' || choice == 'Y' )
    {
      cout << "Enter a number: " ; 
      cin >> num ;
     
 total = total + num ;

      if(num% 2 == 0)
        {
          even++ ;
          cout << num << " is even. " << endl ;
        }
      else
        {
          odd++ ;
	  cout << num << " is odd. " << endl ;
        }

     cout << "Do you have a number to check: " ;
     cin >> choice ; 
    }

  if(even + odd > 0)
    {
  avg = (double)total / (even + odd) ;
  cout << even << " even numbers." << endl ;
  cout << odd << " odd numbers." << endl ;
  cout << "The average is " << avg << endl ;
    }
    else
    {
      cout << "No numbers were checked. " << endl ; 
    }

  return 0;
}
