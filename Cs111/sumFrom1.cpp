#include <iostream>
using namespace std;

int main()
{
  int n ; 
  int sum = 0;
  cout << "Enter a postive number: " << endl;
  cin >> n ;
  
    
      if (n <= 0 )
	{
	  cout << n << " is invalid. " << endl ; 
	}
      else
	{
	  for(int i = 1 ; i <= n ; i++)
	    sum += i ; 
	  cout << "The sum of all numbers from 1 to " << n << " is " << sum << endl ; 
	}
    
  return 0;
}