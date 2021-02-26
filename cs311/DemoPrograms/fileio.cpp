// CS311 Demo on file IO
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{ string name;
  int age;

  string fname;

  cout << "Enter a file name: ";
  cin >> fname;

  ifstream fin (fname.c_str(), ios::in); // declare and open 

  while (fin >> name)
    {
      cout << name ;
      fin >> age;
      cout << age << endl;
    }

  fin.close();
}
