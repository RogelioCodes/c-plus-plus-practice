#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<cstdlib>
using namespace std;
const int MAX = 100 ;

ofstream fout ;
//protypes
struct employee ;
void readData(employee  mAr[],employee fAr[], int& mi, int& fi) ;
void printEmployee(employee s) ;
void printAllEmployee(employee Ar[], int index) ;
void outfileArray(employee Ar[], int index) ; 
employee findOldest(const employee Ar[],int index ) ;
void giveRaise(double raise, employee fAr[], int index);
void giveRaiseToOneEmployee(double raise, employee& Ar);
void combineArray(employee allEmp[],  employee mAr[], employee fAr[], int mi, int fi);


  struct employee
  {
    string fName ; //first name
    string lName ; //last name
    char gender ;
    double rate ;
    int id ;
    int age ;

  } ;

int main()
{
  employee mAr[MAX] ;
  employee fAr[MAX] ;
  employee emp ;

  int mi ; //male index
  int fi ; //femaleIndex
  employee oldest;
  employee allEmp[MAX*2] ;

  readData(mAr,fAr,mi,fi);
  cout << "There are " << mi << " male and " << fi << " female employees. " << endl ;

  cout  << "----------------printEmployee()-----------------------------" << endl ;
  printEmployee(mAr[0])  ;
  cout  << "----------------printEmployee()-----------------------------" << endl ;
  printEmployee(fAr[0]);
  cout  << "-------------printAllEmployee()-----------------------------" << endl ;
  printAllEmployee(mAr, mi);
  cout  << "-------------printAllEmployee()-----------------------------" << endl ;
  printAllEmployee(fAr, fi);
  cout << "----------------outfileArray()------------------------------" << endl ;
  outfileArray(mAr, mi);
  cout << "----------------outfileArray()------------------------------" << endl ;
  outfileArray(fAr, fi);
  cout << "----------------findOldest()--------------------------------" << endl ;
  oldest = findOldest(mAr, mi);

  cout<< oldest.fName <<endl;
  cout << "----------------giveRaise()---------------------------------" << endl ;
  giveRaise(5.5, fAr, fi);
   printAllEmployee( fAr, fi) ;

  cout << "----------------giveRaise()---------------------------------" << endl ;
  giveRaise(5.0, mAr, mi);
  printAllEmployee( mAr, mi) ;
  
  cout << "----------------giveRaiseToOneEmployee()---------------------" << endl ;
  giveRaiseToOneEmployee(2.0,  fAr[1]) ;
  printEmployee(fAr[1])  ;

  cout << "----------------giveRaiseToOneEmployee()---------------------" << endl ;
  giveRaiseToOneEmployee(50.0,  mAr[0]) ;
  printEmployee(mAr[0])  ;

  cout << "----------------------------combineArray()-------------------" << endl ;
  combineArray(allEmp, mAr, fAr, mi, fi) ;
  printAllEmployee(allEmp, fi+mi);

  return 0 ;
}

void readData(employee mAr[], employee fAr[],int& mi, int& fi)
{
  ifstream fin ; 
 
   mi = 0 ; 
   fi = 0 ; 
   employee temp ; 

 fin.open("employees.dat") ; 
  if(!fin)
    {
      cout << "Cannot open the input file." << endl ; 
      exit(1) ; 
    }
  else
    {

    while(fin && fi< MAX && mi < MAX)
       {
	 if(temp.gender == 'F')
	   {
	     fAr[fi] = temp;
	     fi++ ;
	   }
	 if(temp.gender == 'M')
	   {
	     mAr[mi] = temp ; 
	     mi++ ; 
	   }
	 fin >> temp.fName ;
	 fin >> temp.lName ;
	 fin >> temp.gender ;
	 fin >> temp.rate ;
	 fin >> temp.id ;
	 fin >> temp.age ;

       }
    }
}

void printEmployee(employee s) //prints info
{
  cout << fixed <<  setprecision(2) <<  left << setw(10) << s.fName << setw(10) << s.lName << setw(10) << s.gender << setw(10) << s.rate << setw(10) <<  s.id <<  setw(10) << s.age << endl ;
}

void printAllEmployee(employee Ar[], int index)
{
  for(int i = 0 ; i < index ; i++)
    {
      printEmployee(Ar[i]);
    } 
}

void outfileArray(employee Ar[], int index)
{
  string filename;
  cout << "Enter the input file name: " ;
  cin >> filename;

  ofstream fout;
  fout.open(filename.c_str());

  for(int i = 0 ; i < index ; i++)
    {
      fout << Ar[i].fName << ", " << Ar[i].lName << endl ; 

    }

    fout.close() ; 

}


employee findOldest(const employee Ar[],int index ) 
{
  int oldest = 0 ; 
  int i = 0 ;
  for(int i = 0 ; i < index ; i++)
    {
      if(Ar[i].age>Ar[oldest].age)
	{
	  oldest = i ; 
	}
    }
  return Ar[oldest] ;

}

void giveRaise(double raise, employee fAr[], int index)
{
  int i = 0 ;
  for(int i = 0; i < index ; i++)
    {
      fAr[i].rate = fAr[i].rate * (1+(raise/100));
    }
}


void giveRaiseToOneEmployee(double raise, employee& Ar)
{
  Ar.rate = Ar.rate * (1+(raise/100)) ; //gives raise to one employee

}

void combineArray(employee allEmp[],  employee mAr[], employee fAr[], int mi, int fi) 
{
  int i ; 
  for(i = 0 ; i < mi ; i++)
    allEmp[i] = mAr[i] ; 

  for(int fm = 0 ; fm < fi ; i++, fm++)
    allEmp[i] = fAr[fm] ;
}

