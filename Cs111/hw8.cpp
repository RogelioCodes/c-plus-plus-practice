
#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{ 
  double num1, num2, num3, num4, num5 ,num6 , num7, num8, num9, num10; 
  double max, min, average, sum;
  int i ;
  max = -1 ;
  min = 0 ;
 
  for(i = 1; i <= 1; i++) 
    srand(time(0));
  {
    num1 = (rand() % 100 + 1) ;
    num2 = (rand() % 100 + 1) ;
    num3 = (rand() % 100 + 1) ;
    num4 = (rand() % 100 + 1) ;
    num5 = (rand() % 100 + 1) ;
    num6 = (rand() % 100 + 1) ;
    num7 = (rand() % 100 + 1) ;
    num8 = (rand() % 100 + 1) ;
    num9 = (rand() % 100 + 1) ;
    num10 = (rand() % 100 + 1) ;
  }
 
  if(num1 > max) max = num1;
  if(num2 > max) max = num2; 
  if(num3 > max) max = num3;
  if(num4 > max) max = num4; 
  if(num5 > max) max = num5; 
  if(num6 > max) max = num6;
  if(num7 > max) max = num7;
  if(num8 > max) max = num8;
  if(num9 > max) max = num9;
  if(num10 > max) max = num10;
 
  if(num1 > min) min = num1;
  if(num2 < min) min = num2; 
  if(num3 < min) min = num3;
  if(num4 < min) min = num4; 
  if(num5 < min) min = num5; 
  if(num6 < min) min = num6;
  if(num7 < min) min = num7;
  if(num8 < min) min = num8;
  if(num9 < min) min = num9;
  if(num10 < min) min = num10;
 
  average = (num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10)/10 ;
  sum = (num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10);
  cout << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << " " << num6 << " " << num7 ;
  cout << " " << num8 << " " << num9 << " " << num10 << endl; 
  
  
  cout << "Average: " << average << endl;
  cout << "Sum: " << sum << endl;
  cout << "Max: " << max << endl;
  cout << "Min: " << min << endl;
  return 0;
}
