#include<iostream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<vector> 
#include<fstream>
using namespace std;


struct employee
{
  string name;
  long SSN;
  float Income;
  float taxRate;
  float netIncome ; 
  float taxes ; 
  float total ; 
};


void readData(vector<employee>& myVector); 
void printData(const vector<employee>& myVector);
void calcData(vector<employee>& myVector, float netIncome, float taxRate);

int main()
{
  vector<employee> myVector ; // my vector 

  float netIncome, taxes, total ; 

  readData(myVector);  
  calcData(myVector, netIncome, taxes);
  printData(myVector);




}

void readData(vector<employee>& myVector) 
{
  employee temp ;
 
  //  index = myVector.size() ;


  ifstream fin ; 
  fin.open("employeeData.txt") ;
    if(!fin)
      {
	cout << "File doesn't exist. Terminating program." << endl ; 
	exit(1);
      }


      while(fin)
	{
      fin >> temp.name ;
      fin >> temp.SSN ; 
      fin >> temp.Income ; 
      fin >> temp.taxRate ;

      myVector.push_back(temp);

      }

      fin.close() ;
}




void calcData(vector<employee>& myVector, float Income, float taxRate, float total)
{
  
  for(int i = 0 ; i < myVector.size() ; i++)
    {

      myVector[i].taxes  =  myVector[i].taxRate * myVector[i].Income ;
    }

  for(int i = 0 ; i < myVector.size() ; i++ )
    {
      myVector[i].netIncome = myVector[i].Income - myVector[i].taxes ;
    }


  for(int i = 0 ; i< myVector.size(); i++)
    {
     myVector.total += myVector[i].Income ; 
    }

}     



void printData(const vector<employee>& myVector)
{
  cout << left << setw(10) << "Name" << setw(10) << "SSN" << right << setw(15) << "GrossIncome" << setw(15) << "taxRate" << setw(10) << "Taxes" << setw(15) << "NetIncome" << endl ; 
  cout << "--------------------------------------------------------------------------------------------------------" << endl ; 
  for (int i = 0 ; i  < myVector.size() ; i++)
    {
      cout  << left <<  setw(10) <<  myVector[i].name << right << setw(9) <<  myVector[i].SSN << setw(10) << myVector[i].Income  << setw(18) << myVector[i].taxRate << setw(12) << myVector[i].taxes <<  setw(15) << myVector[i].netIncome << " " << "TOTal: " << total/myVector.size() << endl  ;
      
     


    }

}

