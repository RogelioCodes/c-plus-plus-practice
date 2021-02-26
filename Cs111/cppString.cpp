#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string email;
  ifstream fin;
  string username ;

  fin.open("email.dat");


  if(!fin)
    cout << "The input file doesn't exist" << endl;
  else //the input file exists
    {
      fin >> email ;

      while(fin)
        {
          //extract the username and cout it.
          username = email.substr(0, email.find ("."));
          cout << username << endl ;
          fin >> email ;
        }

      fin.close();
    }

  return 0;
}
