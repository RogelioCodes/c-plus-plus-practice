#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{ 
  string name;
  double initBal, deduct, newBalance;
  ifstream fin;
  fin.open("bank.txt");
  ofstream fout;
  
  if (fin)
    { fout.open("output.txt");
	while(fin >> name >> initBal >> deduct)
	  {
	    newBalance = initBal - deduct;
	    fout << name << " " << newBalance << endl;
	    fin.close();
	    fout.close();
	  }}
	else
	  {
	    cout << "Input file does not exist!" ;
	  }
      return 0;
    }

