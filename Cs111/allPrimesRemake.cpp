//not official version
#include<iostream> 
#include<iomanip> 
using namespace std; 
int main () 
{
  int counter = 0;
  int line = 0;
  int num=1000;
    
  for (int i=2; i<1000; i++) 
    {
      bool prime=true;
      for (int j=2; j*j<=i; j++)
        {
	  if (i % j == 0) 
            {
	      prime=false;
	      break;    
            }
        }   
       
      if(prime)
	{
	  counter++;
	  cout << setw(5) << i;
	  line++;
	  if(line == 10)
	    {
	      cout << endl;
	      line = 0;
	    }
	}}
    
  cout<< endl;
  cout<< "There are " << counter << " prime numbers between 2 and 1000 " <<endl;

  return 0;
}
