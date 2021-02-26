#include<iostream>
using namespace std; 
int main()
{
  int i, j;
  for(i=1;i<=6;i++)
    {
      for(j=5;j>=i;j--)
        {
	  cout << "*" ;
        }
      for(j=1;j<=i;j++)
        {
	  cout << j;
        }
      cout << "\n";
    } cout << endl; 

  return 0;
}


