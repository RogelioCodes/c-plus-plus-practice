#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{

  int number1, number2, sum, answer;
  unsigned seed = time(0);

  srand(seed);

  number1 = 100 + rand()%999 ;
  number2 = 100+rand()%999 ;

  sum = number1 + number2 ;

  cout << setw(5) << number1 << endl ; 
  cout << setw(5) << number2 << "+\n" ;
  cout << setw(5) << "-----\n\n" ;

  cout << "What is the answer?" ;
  cin >> answer ;

  if(answer==sum) 
    {
  cout << "Congrats! The answer is correct!\n\n" ;
    } 
  else
    {
  cout << "Incorrect! The correct answer is:" << sum << "\n\n";
    }
  system("pause");
  return 0;

 
}
