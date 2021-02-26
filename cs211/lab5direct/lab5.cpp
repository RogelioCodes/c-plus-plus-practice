#include"instructorCollection.h"
#include<fstream>
#include<vector>
using namespace std ; 

ifstream fin ; 
ofstream fout ; 

int main()
{
  InstructorCollection The_Instructors ; 
  The_Instructors.getInfo();
  The_Instructors.printCollection() ; 



  return 0 ; 
}


