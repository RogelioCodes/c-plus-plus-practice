
#include<iostream>
using namespace std; 

int main()
{
  int num ;
  int even = 0 ; 
  int odd = 0 ; 
  int total = 0 ; 
  double avg ; 

  cout << "Enter a number: " ; 
  cin >> num ; 

  while (num != 0 )
    {
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

      cout << "Enter a number: " ; 
      cin >> num ; 
    }

  if(total == 0)
    cout << "\n No numbers were checked." << endl ; 
  else
    { 
      avg = (double)total / (even + odd) ;
      cout << even << " even numbers." << endl ; 
      cout << odd << " odd numbers." << endl ; 
      cout << "The average is " << avg << endl ; 
    }

  return 0; 
}
