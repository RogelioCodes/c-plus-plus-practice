#include<iostream>
using namespace std;

void formula1(int b, int e)
{
  double ans;
  ans = b + e;
  cout << "Formula 1: " <<  ans <<  endl;
}

void formula2(int b, int e)
{ double ans;
  ans = b - e ;
  cout << "Formula 2: " << ans << endl;
}


int main()
{
  int choice, b, e;
  cout << "Mixed Sum Calculator Menu" << endl;
  cout << "1. Mixed sum" << endl;
  cout << "2. Mixed alternate sum" << endl;
  cout << "3. Quit" << endl;
  cout << "Enter your choice: " << endl;
  cin >> choice ;

  if (choice<1 || choice>3)
    {
      cout << "Invalid choice\n" ;
    }
  else
    {if (choice >=1 && choice <=4)
	switch(choice)
	  {
	  case 1: cout << "Enter an integer: " ;
	    cin >> b ;
	    cout << "Enter an integer: " ;
            cin >> e ;
            formula1(b,e); //cout << "Formula 1: test " << formula1 << endl;
            break ;
            
	  case 2: cout << "Enter an integer: " ;
	    cin >> b ;
	    cout << "Enter an integer: " ;
            cin >> e ;
	    formula2(b,e);
	  }
    }
 
  return 0;
}