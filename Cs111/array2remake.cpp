#include<iostream>
#include<iomanip>
using namespace std;
void fillArray(int ar[], int s);
void printArray(const int ar[], int s) ;
double findAverage(const int ar[], int s) ;
int findHighest(const int array[], int s) ;
void doubleArray(int ar[], int s) ;
void selectionSort(int ar[], int s);
int sequentialSearch(int ar[], int s, int key) ;
void showBarGraph(int ar[],int s);



int main()
{
  const int SIZE = 5 ; //THE SIZE OF THE ARRAY
  int ar[SIZE] ; //THE ARRAY
  int choice ; //THIS IS THE VARIABLE FOR THE MENU BUTTONS
  int key ; //thE KEY
  int index ; //this is the index

  //THE MENU
  do{
    cout << endl ;
    cout << "================" << endl ;
    cout << "1: fillArray " << endl ;
    cout << "2: printArray " << endl ;
    cout << "3: calculate the average " << endl ;
    cout << "4: show the highest number " << endl ;
    cout << "5: double each number " << endl ;
    cout << "6: selection sort in descending order " << endl ;
    cout << "7: sequential search " << endl ;
    cout << "8: show bar graph " << endl ;
    cout << "9: quit" << endl ;
    cout << "================" << endl ;
    cout << "Enter a choice: " ;
    cin >> choice ;
    cout << endl ;
    switch(choice)
      {
	//These cases all call a function, except 9 of course
      case 1:
	fillArray(ar, SIZE) ;
	break ;
      case 2:
	printArray(ar, SIZE) ;
	break ;
      case 3: findAverage(ar, SIZE);
	break;
      case 4: findHighest(ar, SIZE);
	break;
      case 5: doubleArray(ar, SIZE);
	break;
      case 6: selectionSort(ar, SIZE);
	break;
      case 7:
	cout<< "Enter the key: ";
	cin>>key;
	index = sequentialSearch(ar, SIZE, key) ;
	if(index== -1)
	  cout << endl << key << " was not found." << endl ;
	else
	  cout<< endl << key << " was found at index " << sequentialSearch(ar, SIZE, key) << "." << endl ;

	sequentialSearch(ar, SIZE, key);
	break;
      case 8: showBarGraph(ar, SIZE);
	break;
      case 9:
	cout << "Thank you for using our system. " << endl << endl ; //Says goodbye to the user, 9 closes the program
	break ;
      default:
	cout << "This is an invalid choice." << endl ;
      }
  }while (choice != 9 ) ; //closes program
  return 0 ;
}

//This fills the array with numbers inputed by the user
void fillArray(int ar[], int s)
{
  for(int i = 0 ; i < s ; i++ ) //5 numbers
    {

      cout << "Enter a number: " ;
      cin >> ar[i] ;
    }
}

//This prints the Array
void printArray(const int ar[], int s)
{ cout << "The numbers in the array are: " ;
  for(int i = 0 ; i< s ; i++ ) //outputs 5 numbers
    cout << ar[i] << " "  ;
  cout << endl ;
}

double findAverage(const int ar[], int s)
{
  int total = 0;

  for(int i = 0; i < s; i++) //adds total
    total+= ar[i];
  cout << "The average number is " << (double)total/s << endl ; //outputs and calculates average

}

int findHighest(const int array[], int s) ;
{
  int highestIndex= 0 ; 
  for(int i = 1  ; i < s ; i++)
	if(array[i]>array[highestIndex])
	highestIndex = i ; 
      return array[highestIndex] ; 
      }
