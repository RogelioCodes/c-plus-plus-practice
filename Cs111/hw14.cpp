#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

struct Player
{
  string name, address, city, state;
  int number, zip, point;
  string date, phone;
};

void readData (Player team[], const int SIZE);
void displayData (Player team[], const int SIZE);
void getAverage (Player team[], const int SIZE);
void getHighest (Player team[], const int SIZE);
void getTarget (Player team[], int target, string &name, int &number, string &address, string &city, string &state, int &zip, string &phone, string &date, int &point, int SIZE);

int main()
{
  const int SIZE=10;
  Player team [SIZE];
  int choice, target;
  string name, address, city, state, date, phone;
  int number, zip, point;

do
  {
    cout << "1. Display Data" << endl;
    cout << "2. Diplsay Average" << endl;
    cout << "3. Display Highest" << endl;
    cout << "4. Display Target" << endl;
    cout << "Enter choice: ";
    cin >> choice;
  }

 while (choice < 1 && choice > 4);
 
 readData (team, SIZE);

 switch (choice)
   {
   case 1:
     displayData (team, SIZE);
     break;
   case 2:
     getAverage (team, SIZE);
     break;
   case 3:
     getHighest (team, SIZE);
     break;
   case 4:
     cout << "Please enter the target player's number" << endl;
     cin >> target;

     getTarget (team, target, name, number, address, city, state, zip, phone, date, point, SIZE);

     cout << "name: " << name << "\n";
     cout << "number: " << number << "\n";
     cout << "address: " << address << "\n";
     cout << "city: " << city << "\n";
     cout <<"state: " << state << "\n";
     cout <<"zip: " << zip << "\n";
     cout << "phone: " << phone << "\n";
     cout << "date: " << date << "\n";
     cout << "point: " << point << "\n";
     break;

   }
 return 0;
}

void readData (Player team[], const int SIZE)
{
  ifstream inputFile;
  if (!inputFile)
    {
      cout << "Error, file not found" << endl;
    }
  else{
    inputFile.open("team.txt");
    for (int n=0; n < SIZE; n++)
      {
	inputFile >> team[n].name >> team[n].number >> team[n].address >> team[n].state >> team[n].zip >> team[n].phone >> team[n].point;
      }
  }
}
void displayData (Player team[], const int SIZE)
{
  for (int n=0; n < SIZE; n++)
    {
      cout << team[n].name << " " << team[n].number << " " team[n].address << " " << team[n].city << " " << team[n].state << " " << team[n].zip << " " << team[n].phone << " " << team[n].date << " " << team[n].point;

      cout << endl;
    }
}

void getAverage (Player team[], const int SIZE)
{
  double total = 0, average = 0;
  for (int n = 0; n < SIZE; n++)
    {
      total =team[n].point;
      average = total/SIZE;
      cout << "team number" << (n + 1) << " : " << average << endl;
    }
}

void getHighest (Player team[], const int SIZE)
{
  int high = 0, index;
  
  for (int n=0; n < SIZE; n++)
    {
      if (team[n].point >= high)
	{
	  high = team[n].point;
	  index=n;
	}
    }
  cout << team[index].name << " " << team[index].number << " " << team[index].address << " "  << team[index].city <<  " " << team[index].state << " " << team[index].zip << " " << team[index].phone << " " << team[index).date << " " << team[index].point;

  cout << endl;
}

void getTarget (Player team[], int target, string &name, int &number, string &address, string &city, string &state, int &zip, string &phone, string &date, int &point, int SIZE)
{
  int index;
  for (int n=0; n < target; n++)
    {
      if (target == team[n].number)
	{
	  name = team[n].name;
	  number = team[n].number;
	  address = team[n].address;
	  city = team[n].state;
	  zip = team[n].zip;
	  phone = team[n].phone;
	  date = team[n].date;
	  point = team[n].point;
	}
    }
}
