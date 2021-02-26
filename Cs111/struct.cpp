
/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 7
4-20-2017

A program that creates a list of employees and collects information on them. The main purpose of this program is to get a better understanding of struct. 

****************************************************************************************************************************************************/

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
void printAllEmployee( employee Ar[], int index);
void outfileArray(employee Ar[], int index);
employee findOldest(const employee Ar[],int index ) ; 
void giveRaise(double raise, employee fAr[], int index) ; 
void giveRaiseToOneEmployee(double raise, employee &emp);
void combineArray(employee allEmp[],  employee mAr[], employee fAr[], int& mi, int& fi) ; 
void findEmp(employee Ar[], int index);
void sortEmployees(employee Ar[], int index);

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


  int mi ; //male index
  int fi ; //femaleIndex
  employee oldest; 
  employee allEmp[MAX*2] ; 

  readData(mAr,fAr, mi, fi) ; 
  cout << "There are " << mi << " male and " << fi << " female employees. " << endl ;

  cout  << "----------------printEmployee()-----------------------------" << endl ;
  printEmployee(mAr[0])  ;
  cout  << "----------------printEmployee()-----------------------------" << endl ;  
  printEmployee(fAr[0]); 
  cout << "---------------printAllEmployee()----------------------------" << endl ;

  printAllEmployee(mAr, mi) ;  
  cout << "----------------printAllEmployee()--------------------------" << endl ;
  printAllEmployee(fAr, fi) ;  

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

  cout << "--------------------------findEmp()--------------------------" << endl ;
  findEmp(allEmp,  mi+fi);
  cout << "--------------------------findEmp()--------------------------" << endl ;
  findEmp(allEmp,  mi+fi);

  cout << "----------------------------sortEmployees()------------------" << endl ;
  sortEmployees(allEmp, mi+fi);
  printAllEmployee(allEmp, fi+mi);

  return 0 ;
}
/***********************************************************************************************
This function will read all of the employee data out of employees.dat.
mi = male index
fi = female index 
employee temp is a temporary struct data type only used in this function
fname = first name. lname = last name. rate = rate, id = id, age = age, gender = gender
***********************************************************************************************/
void readData( employee  mAr[], employee fAr[], int& mi, int& fi)
{
  ifstream fin ; 

  mi = 0 ; //male index
  fi = 0 ;  //female index

  employee temp ;

  fin.open("employees.dat" ); //input file is located in same directory as program file
  if(!fin) //checks for file
    {
      cout << "Doesnt exist " << endl ;
      exit(1) ;
    }
  else //if file exists it inputs all the info
    {
      /* fin >>  temp.fName ;
      fin >>  temp.lName ;
      fin >>  temp.gender ;
      fin >> temp.rate ;
      fin >> temp.id ;
      fin >> temp. age ;*/
     
      while(fin&& mi < MAX && fi < MAX ) //makes sure it doesnt go over the number of employees
	{
	  if (temp.gender == 'F') //makes a list of female employees
	    { 
	      fAr[fi] = temp ; 
	      fi++ ;
	    }
	  else if (temp.gender == 'M') //makes a list of male employees
	    {
	 
	      mAr[mi] = temp ; 
	      mi ++  ;
	    }
	  fin >>  temp.fName ;
	  fin >>  temp.lName ;
	  fin >>  temp.gender ;
	  fin >> temp.rate ;
	  fin >> temp.id ;
	  fin >> temp. age ;
	}
    }
}
 
/***********************************************************************************************
This will print out all of the employee info 
***********************************************************************************************/

void printEmployee(employee s) //prints info
{
  cout << fixed <<  setprecision(2) <<  left << setw(10) << s.fName << setw(10) << s.lName << setw(10) << s.gender << setw(10) << s.rate << setw(10) <<  s.id <<  setw(10) << s.age << endl ;
}

void printAllEmployee(employee Ar[], int index) //prints every employee
{

  for (int i = 0 ; i  < index ; i++)
    {
      printEmployee(Ar[i]);
    }
}
/***********************************************************************************************
This will make a file and copy the last names into it
***********************************************************************************************/

void outfileArray(employee Ar[], int index) //makes a file
{
  string filename ;
  cout << "Enter the output file name: " ; 
  cin >> filename ;   //file name is entered
 
  //  ofstream fout ; 
  fout.open(filename.c_str()); //file is made

  for(int i=0; i < index ; i++) //fills file with last names 
    {
      fout <<  Ar[i].lName << "," << Ar[i].fName << endl ;
    }

  fout.close() ;

}

/***********************************************************************************************
This function finds the oldest employee
oldest = the oldest employee
***********************************************************************************************/

employee findOldest(const employee Ar[], int index)
{
  int i = 0 ;
  
  int oldest = 0 ;
  
  
  for(int i = 0 ; i < index ; i++) //finds the oldest chappy in the group
     { 
       if(Ar[i].age> Ar[oldest].age)   
	 {
	   oldest = i ;
	   
	 }
     }
  return Ar[oldest] ; // whole struct is returned 
   
}
/***********************************************************************************************
This gives a raise to every employee. 
temp is used as a temporary variable to move other variables around
finalAns is the final rate with the added bonus
***********************************************************************************************/

void giveRaise(double raise,  employee fAr[], int index)  
{
  int i = 0 ;  
  double temp ; //temporary 
  double finalAns ; //final answer 

  // raise = .055 ;    
  for(int i = 0 ; i < index ; i++)
   {
     temp  = (fAr[i].rate * raise)/100 ;  //divide by 100 because its a percent
     finalAns = temp + fAr[i].rate ; //adds the value to the normal salary of the chappy
     fAr[i].rate = finalAns ;      
   }

}
/***********************************************************************************************
This gives a rise to just one employee.
emp.rate is the employee rate 
***********************************************************************************************/

void giveRaiseToOneEmployee(double raise, employee &emp)
{
  emp.rate = emp.rate * (1+(raise/100)) ; //gives raise to one employee
 
 }
/***********************************************************************************************
This combines the males and females. 
Allemp is the new array, it contains males and females
***********************************************************************************************/

void combineArray(employee allEmp[],employee mAr[], employee fAr[], int& mi, int& fi) 
{


  for(int i = 0 ; i < mi ; i++)
    {
      allEmp[i] = mAr[i] ; //goes through males
    }
  for(int x = mi, c= 0; c < fi ; x++, c++) //goes through females, c++ goes through each female specifically
    {
      allEmp[x] = fAr[c] ;
    }

}
/***********************************************************************************************
This will ask for an employee id and then find that employee
key is = to the id to look for id. 
id is the employee id.
found is set to true once the key is found 
***********************************************************************************************/

void findEmp(employee Ar[], int index) 
{
  int id ; 
  cout << "Enter an id: " ;
  cin >> id ; 
  cout << endl ; 

  int key = id ; //Key is = to ID to look for ID
  bool found = false ; 

  for(int i =0; i<index ; i++)
    {
      if (Ar[i].id == key) //if the key is found the name is outputed
	{ found = true ; 
	  cout << Ar[i].fName  << setw(5) << right << " " <<  Ar[i].lName << endl  ; 
	}
    }
  if(found == false)//this assumes the key isn't found and outputs the message
    {

      cout << "There is no employee with ID " << id << endl << endl ;
    }


}

/***********************************************************************************************
This will sort out the employees in alphabetical order. 
lrg index is the index of the largest value. 
***********************************************************************************************/

void sortEmployees(employee Ar[], int index)
{
  int lrgIndx; //the index of the largest value
  employee temp; //temporary variable that holds the largest value


//last is the last index in unsorted portion
  for(int last = index-1; last >= 1; last--)
    {
      lrgIndx = 0; //assume the first item is the largest
      //find the largest in unsorted portion ([0..last])
      for(int i = 1; i <= last; i++)
	{
	  if(Ar[i].fName/*[0]*/ > Ar[lrgIndx].fName/*[0]*/) //The current item is larger
	    lrgIndx = i;
	}
      //swap the largest with the last item in the unsorted portion
      temp = Ar[lrgIndx];
      Ar[lrgIndx] = Ar[last];
      Ar[last] = temp;
    }
}
