#include<iostream>


using namespace std ; 
//int ARRAY_SIZE = 10;

bool isMember(const int numbers[], int ARRAY_SIZE, int num) ; 
int main()
{
  const int ARRAY_SIZE = 10;
  int num  ; 
  


  int numbers[ARRAY_SIZE] = {2, 4, 6, 8, 10, 12, 14, 16 ,18, 20 };

  cout << "Enter a num: " << endl ; 
  cin >> num ; 

  isMember(numbers, ARRAY_SIZE, num) ; 

  
  /*  if(bolo == true)
    cout << num << " is in the array" << endl ; 
  else 
    cout << "not found" << endl ; 
  */
  return 0 ;
}
bool isMember(const int numbers[],  int ARRAY_SIZE, int num) 
{
  cout << "in here " << endl ;
  if(ARRAY_SIZE-1<0)
    {
      cout << num << "wasn't found." << endl ; 
      return false ; 
    }
  else if(numbers[ARRAY_SIZE-1] == num) 
    {
      cout << num << " was found. " << endl ; 
      return true ; 
   }
  else
    {
      cout << "this old thing of ours " << endl ; 
      return isMember(numbers, ARRAY_SIZE-1, num) ; 
    }
}
