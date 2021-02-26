#include<iostream> 
#include<iomanip>
#include<string>
#include<fstream>

using namespace std; 

int main()
{
  string name;
  int midterm, final, totalGrade;
  ifstream fin;
  fin.open("grades.txt");
  ofstream fout; 
  //fin.open ("grades.txt");

  if(fin)
    { fout.open ("output.txt");
      while(fin >> name >> midterm >> final)
	{
	  totalGrade = midterm * 0.4 + final * 0.6 ;
	  fout << name << " " << midterm << final << " " << totalGrade << endl ;
	}
      fin.close();
      fout.close();
    }
  else
    {
      cout << "input file does not exist" ;
    }

  return 0;
}
