#include<iostream>
#include<iomanip>

using namespace std ; 

int factorial(int x, int y) ; 

int main()
{
  int x, y ; 

  cout << "Enter a num: " ; 
  cin >> x ;
  cin >> y ;  

  cout << "Facotrial is: " << factorial(x,y) << endl ; 

  return 0 ; 

}

int factorial(int x, int y) 
{
  if(y==0)
    return 0 ; 
  else//(y==0) 
    {   
     
      return (x + factorial(x,y-1))  ; 
      
    }
}
