/***************************************************************************************************************************************************
Rogelio Cordova
CS111
Assignment 6
4-10-2017

This program is an extension of the array.cpp lab. It will output a menu and let the user choose from a variety of options. These options include 
filling the array, printing the array, calulating average, calculating the highest number in the array, sorting the numbers in the array,
searching for a key, and showing a graph. 
****************************************************************************************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

//These are my prototypes
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

//calculates average
double findAverage(const int ar[], int s)
{
  int total = 0;

  for(int i = 0; i < s; i++) //adds total 
    total+= ar[i]; 
  cout << "The average number is " << (double)total/s << endl ; //outputs and calculates average 

}
//finds the highest number in the array
int findHighest(const int array[], int s) 
{
  int highestIndex = 1 ; / 

    for(int i = 0 ; i < s ; i++) 
    
      if(array[i] > array[highestIndex]) //checks the highest number
      highestIndex = i ;
    
  cout << "The highest number is " << array[highestIndex] << endl ;
    
}
//doubles the array
void doubleArray(int ar[], int s)
{
  for(int i = 0; i < s; i++) 
    ar[i] = ar[i]*2; //multiplies the #s in the array by 2
    
}

//sorts the numbers by value
void selectionSort (int ar[], int s)
{
  int smallestIndex;//index of the smallest value
  int temp; //temporary variable to hold smallest value

  for(int i = 0 ; i < s-1 ; i++)
    {
      smallestIndex = i; //smallest value 

      for(int j = i+1 ; j < s ;  j++) 
        {
          if(ar[j] > ar[smallestIndex])
            smallestIndex = j;
        }
      temp = ar[smallestIndex];
      ar[smallestIndex] = ar[i];
      ar[i] = temp;
    }
}


int sequentialSearch (int ar[], int s, int key) //looks for the key
{
  for(int i =0; i<s; i++)
    {
      if (ar[i] == key) 
        return i;
    }
         return -1;
}
//makes a bar graph
void showBarGraph(int ar[], int s)
{
  int n ;
  for(int i = 0 ; i < s ; i++ )
    {
      n = ar[i] /10 ; 
      cout << "slot " << i << " : " ;
      for(int j = 0 ; j < n ; j++ )
        cout << "*" ;
      cout << endl ;
    }
}

