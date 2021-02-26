// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n, r, c;
  cout << "Enter a number 1-5" ;
  cin >> n;
  for(int r=1; r<=n; r++)
    {
      for(int c=1; c<=n; c++)
	cout << c  ;
        cout << endl; 
    }
  cout << "\n" ;

  for(int r=1; r<=n ;r++)
    {
      for(int c=1; c<=r; c++)
      cout << c ;
      cout << endl;
    } 
  cout << "\n" ;

  for(int r=n; r>0; r--)
    {
      for(int c=1; c<=r; c++)
	cout << c  ;
      cout << endl;
    }
  cout << "\n" ;

  for(int r=n; r>=1; r--)
    {
      for(int c=n; c>=r; c--)
	cout << c;
      cout << endl;
    }
  cout << "\n" ;

  for(int r=1; r<=n; r++)
    {
      for(int c=n; c>=r; c--)
	cout << c;
      cout << endl;
    }
  cout << "\n" ;

  for(int r=1; r<=n; r++)
    {
      for(int c=r; c<=n; c++)
	{
	  cout << c ;
	 
	}cout << endl;
	}
  return 0;
}
