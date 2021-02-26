#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double temperature, hours;
  cout << "Enter a temperature value: " << endl;
  cin >> temperature;
  {
    if (temperature >= -50 && temperature <= 150)
      cout << "The temperature is valid." << endl;
  }
  cout << "Enter a value for hours: " << endl;
  cin >> hours;
  {
    if (hours <= 0 || hours >= 80)
      cout << "The number is not valid." << endl;
  }

  //Display menu                                                                                                                                                                      
  cout << "Enter a choice" << endl;
  cout << "1. Calculate salary" << endl;
  cout << "2. Verify temperature" << endl;
  cout << "3. Quit" << endl;


  int choice;

  cout << "Enter 1, 2, or 3: ";
  cin >> choice;
  switch (choice)
    {
    case 1: cout << "Salary" << hours << hours*12 << endl;
      break;
    case 2:
      {
        if (temperature < 0)
          cout << "Very cold" << endl;
        else if (temperature > 0 && temperature < 60)
          cout << "Cold" << endl;
        else if (temperature > 60 && temperature < 100)
          cout << "Hot" << endl;
        else
          cout << "Very hot" << endl;
        break;
      }
      return 0;
    }}
