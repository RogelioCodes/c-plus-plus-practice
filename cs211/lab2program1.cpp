#include<iostream>
#include<iomanip>
#include <fstream>
#include<vector>
#include<cstdlib>
using namespace std;

int main()
{
  vector<int> myVector ;
  int temp ;
  int key ; 

  ifstream fin ;
  fin.open("data3.txt");
  if(!fin) 
    {
      cout << "File doesn't exist" << endl ; 
      exit(1) ; 
    }
  else 
    {
      fin >> temp ; 
      while(fin) 
	{
	  cout << temp << endl ; 
	  myVector.push_back(temp) ; 
	  fin >> temp ;
	}
    }
  cout << "File contains " << myVector.size() << " entries " << endl ; 
  myVector.pop_back() ; 

  cout << "The last value is: " << myVector.back() << endl << endl ; 

  cout << "File contains " << myVector.size() << " entries " << endl ; 

  myVector.insert(myVector.end(), 88) ; 

  cout << "The last value is: " << myVector.back() << endl << endl ; 

  myVector.erase(myVector.begin()+2, myVector.begin()+4); 

  for(int i= 0 ; i < myVector.size(); i++)
    cout << myVector[i] << endl ; 
  cout << endl ; 

  cout << "Enter key: " ;
  cin >> key ; 

  
  
  bool found = false ; 

  for(int i= 0 ; i < myVector.size(); i ++) 
    {
      if(key == myVector[i])
	{
	  found = true ; 
	  i = myVector.size() ; 
	}
    }
	cout << key << " was found at " << found << endl ;


  return 0 ; 
}











