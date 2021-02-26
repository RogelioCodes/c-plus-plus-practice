#include <iostream>
using namespace std;

// Function prototype
int times(int x , int y);

int main()
{
  int x, y;


  cout << "Enter two number and "  << "this program will return their product: ";
  cin  >> x >> y;

  cout << x << " *  " << y << " = " << times(x, y) << endl;
  return 0;
}


int times(int x, int y)
{
  if (x > 1)
    {
      return y + times(--x, y);
    }
  else
    return y;
  
}











