#include<string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
  int choice; 
  double A, B, C, D, answer;
  unsigned seed = time(0);
  srand(seed);

  do
    {
      cout << " Sequence of numbers Menu" << endl;
      cout << " 1. Addition problem" << endl;
      cout << " 2. Subtraction problem" << endl;
      cout << " 3. Multiplication Problem" << endl;
      cout << " 4. Division problem" << endl;
      cout << " 5. Quit\n" << endl;
      cout << " Enter your choice: " << endl;
      cin >> choice;

      if(choice<1 || choice>5)
	{
          cout << "Invalid choice\n" ;
	}
      else
	{ if(choice >=1 && choice <= 4)
        
    
	    switch(choice)
	      {
              case 1:;
		A = 1 + rand() % 100;
		B = 1 + rand() % 100;
		C = 1 + rand() % 100;
		D = A + B + C;
		cout << "\n";
		cout << A << " + " << B << " + " << C << " = " << endl;
		cout << "Please enter your answer: ";
		cin >> answer;
		if(answer == D)
		  {cout << "Correct!" << endl;
		    cout << A << " + " << B << " + " << C << " = " << D << endl;
		  }
		else
		  cout << "Incorrect! Try again." << endl;
		break; 
             
	      case 2:;
		A = 1 + rand() % 100;
		B = 1 + rand() % 100;
		C = 1 + rand() % 100;
		D = A - B - C;
		cout << "\n";
		cout << A << " - " << B << " - " << C << " = " << endl;
		cout << "Please enter your answer: ";
		cin >> answer;
		if(answer == D)
		  {cout << "Correct!" << endl;
		    cout << A << " - " << B << " - " << C << " = " << D << endl;
		  }
		else
		  cout << "Incorrect! Try again." << endl;
		break;
             
	      case 3:;
		A = 1 + rand() % 100;
		B = 1 + rand() % 100;
		C = 1 + rand() % 100;
		D = A * B * C;
		cout << "\n";
		cout << A << " * " << B << " * " << C << " = " << endl;
		cout << "Please enter your answer: ";
		cin >> answer;
		if(answer == D)
		  {cout << "Correct!" << endl;
		    cout << A << " * " << B << " * " << C << " = " << D << endl;
		  }
		else
		  cout << "Incorrect! Try again." << endl;
		break;
             
	      case 4:;
		A = 1 + rand() % 100;
		B = 1 + rand() % 100;
		C = 1 + rand() % 100;
		D = round(A / B / C);
		cout << "\n";
		cout << A << " / " << B << " / " << C << " = " << endl;
		cout << "Please enter your answer: ";
		cin >> answer;
		if(answer == D)
		  {cout << "Correct!" << endl;
		    cout << A << " / " << B << " / " << C << " = " << D << endl;
		  }
		else
		  cout << "Incorrect! Try again." << endl;
		break;
	      }}



    }while(choice!=5);
  return 0;
}
