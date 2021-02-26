#include <iostream> 
#include<string> 
#include "AdjunctProf.h"
#include "TenureTrackProf.h"
using namespace std; 

int main() 
{
  string n ; 
  char d ; 
  string e ; 
  int ta ; 
  int id ; 
  int course ; 
  char r ; 
  int yexp ;



  AdjunctProf a;
  TenureTrackProf t ; 

  cout << "Adjunct Prof: " << endl ; 
  cout << "Enter a name: " ; 
  getline(cin, n ) ; 
  a.setName(n) ; 

  cout << "Please enter ID: " ; 
  cin >> id ; 
  a.setFacultyID(id) ; 

  cout << "Enter email: " ;
  cin >> e ; 
  a.setEmail(e) ; 

  cout << "Please enter degree: " ; 
  cin >> d ; 
  a.setDegree(d);  
 

  cout << "Please enter # of TA's: " ; 
  cin >> ta ; 
  a.setNoOfTA(ta) ; 
 
  cout << "Enter # of Courses: " ; 
  cin >> course ; 
  a.setNoOfCourses(course) ;

  cout << endl ; 

  a.printAdjunctProf() ;

  
  cout << "Tenure Track Prof: " << endl ;
  cin.ignore(100,'\n');

  cout << "Enter a name: "  ;
  getline(cin, n ) ;
  t.setName(n) ;

  cout << "Please enter ID: "  ;
  cin >> id ;
  t.setFacultyID(id) ; 

  cout << "Enter email: " ;
  cin >> e ; 
  t.setEmail(e) ;

  cout << "Enter rank: " ; 
  cin >> r ; 
  t.setRank(r) ; 

  cout << "Enter years of experience: " ; 
  cin >> yexp ; 
  t.setYearOfExp(yexp);

  cout << endl ; 
  t.printTenure() ;

  return 0 ; 
}
