#include<iostream>
using namespace std; 

int main()
{
  string runner1, runner2, runner3;
  double time1, time2, time3;
    
  cout << "Enter the name of three runners and their finishing time. \n\n"  ;
  cout << "Then I will tell you who came in first, second, and third. \n\n" << endl; 
    
  cout << "Name of runner 1: " ; 
  getline(cin, runner1);
  cout << "Runner 1's finishing time: ";
  cin >> time1; 
    
  cout << "\nName of Runner 2: " ;
  cin.ignore();
    
  getline(cin, runner2);
  cout << "Runner 2's finishing time: " ;
  cin >> time2; 
    
  cout << "\nName of Runner 3: " ;
  cin.ignore();
    
  getline(cin, runner3);
  cout << "Runner 3's finishing time: ";
  cin >> time3;
  cout << endl; 
    
  if (time1 < 0 || time2 < 0 || time3 < 0)
    cout << "Runner times can't be less than 0.\n.";
  else 
    {
      cout << "Race results \n";
      cout << "------------ \n\n" ; 
            
      cout << "1st Place: " ;
      if ((time1 < time2) && (time1 < time3)) 
	cout << runner1 << "    " << time1 << endl; 
      else if (time2 < time3)
	cout << runner2 << "    " << time2 << endl; 
      else 
	cout << runner3 << "    " << time3 << endl; 
                
      cout << "2nd Place: " ;
      if ( ((time1 < time2) && (time1 > time3)) ||
	   ((time1 > time2) && (time1 < time3)) ) 
	cout << runner1 << "    " << time1 << endl; 
      else if  ( ((time1 < time2) && (time1 > time3)) ||
		 ((time1 > time2) && (time1 < time3)) ) 
	cout << runner2 << "   " << time2 << endl;             
      else 
	cout << runner3 << "    " << time3 << endl; 
                
      cout << "3rd Place : " ;
      if ((time1> time2) && (time1 > time3)) 
	cout << runner1 << "  " << time1 << endl; 
      else if (time2 > time3)
	cout << runner2 << "  " << time2 << endl; 
      else 
	cout << runner3 << "  " << time3 << endl; 
    }
  return 0;
}
