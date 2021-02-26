#include<iostream>
using namespace std;
int main()
{
  int max,min,input;

  max = -1000000;
  min = 1000000;

  cout << "Enter number(-99 to exit): ";
  cin >> input;

  while(input!=-99){
    if(input<min && input>=0) min = input;
    if(input>max) max = input;

    cout << "Enter number: ";
    cin >> input;
  }

  cout << "Max: " << max << endl;
  cout << "Min: " << min << endl;
  return 0;
}
