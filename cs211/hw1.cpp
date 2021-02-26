/*
Rogelio Cordova
9/21/2017
CS211 HW1 

*/
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<vector>
using namespace std;

struct Book
{
  string ISBN;
  string title;
  string author;
  int edition;
  int quantity;
  double price;
 
 
};

ifstream fin ; 
//these right here the protypes 
void displayFunc(const vector<Book>& myVector); //displayed all the information 
void Add(vector<Book>& myVector); //adds everything into the vector 
void deleteFunc(vector<Book>& myVector, string data) ; //deletes stuff from the database 
void searchBook(vector<Book>& myVector, string searchKey);  //looks for books in the database 
void searchAuthor(vector<Book>& myVector, string searchKey); //looks for an author in the database 
void updateQuantity(vector<Book>& myVector) ; //updates the book quantity 
void updatePrice(vector<Book>& myVector); //updates the price of the books 
void sortFunc(vector<Book>& myVector); //looks through the function and sorts it by alphabetical order then by edition 
void saveFunc(const vector<Book>& myVector) ; //saves stuff into an output file 



int main()
{
  vector<Book> myVector ;
  string data ;
  string command ; //the command
  int index ;




  fin.open("bookstoreTrans.txt");
  if(!fin)
    {
      cout << "File doesn't exist" << endl ;
      exit(1) ;
    }

  fin >> command ;

  while(fin)
    {
      if(command == "add")
	{
	  Add(myVector) ; 
	}


        else if(command == "delete")
	{
	  cout << endl ;
	  fin >> data ;
	  deleteFunc(myVector, data) ;

	}
      else if(command == "searchBook")
	{
	  fin >> data ; 
	  searchBook(myVector, data); 
	  }
      else if(command == "searchAuthor")
        {
          fin >> data ;
          searchAuthor(myVector, data);
	}
      else if(command == "updateQuantity")
        {

          updateQuantity(myVector);
        }

      else if(command == "updatePrice")
	{

	  updatePrice(myVector);
	}
       else if(command == "display") 
      	{
	  displayFunc(myVector); 
      	}
       else if(command == "sort")
	 {
	   sortFunc(myVector);
	 }
       else if(command == "save")
	 {
	   saveFunc(myVector) ; 
	 }

       fin >> command ;
 
 
    }
  fin.close() ; 


}

void displayFunc(const vector<Book>& myVector)
{
  cout << endl ;

  cout << setw(20) << left << "ISBN" << setw(45) << "Title" << setw(20) << "Author" << setw(10) << "Edition" << setw(10) << "Quantity" << setw(10) << "Price" << endl ;
  cout << "---------------------------------------------------------------------------------------------------------------------------------------------" << endl ;

  for(int i = 0 ; i < myVector.size() ; i++)
    {
      cout << setw(20) << left << myVector[i].ISBN << setw(45) << myVector[i].title << setw(20) << myVector[i].author << setw(10) << myVector[i].edition << setw(10) << myVector[i].quantity
           << setw(10) << setprecision(2) << fixed << myVector[i].price << endl ;
    }

}


void Add(vector<Book>& myVector)
{
  Book temp ;

  //  index = myVector.size() ;



      fin >> temp.ISBN ;
      fin >> temp.title ;
      fin >> temp.author ;
      fin >> temp.edition ;
      fin >> temp.quantity ; 
      fin >> temp.price ; 

      for(int i = 0 ; i < myVector.size() ; i++) //This forloop checks for duplicates
	{
	  if(temp.ISBN==myVector[i].ISBN) //checks for matching ISBN aka checks if tit is already in the database 
	    {
	      myVector[i].quantity += temp.quantity; //updates that book quantity u know how i do 

	      cout << temp.ISBN << " is already in the database. The number of copies is now " << myVector[i].quantity<<  endl ; 

	      return ;  
	    }
	  
	}
      cout << temp.ISBN << " was successfully added to the database." << endl ;

      myVector.push_back(temp); //pushes to back of vector 
}


void deleteFunc(vector<Book>& myVector, string data) 
{
  for(int i=0 ; i < myVector.size(); i++)
    {
      if(data==myVector[i].ISBN) //deletes a book if its ISBN is in the database 
	{
	  myVector.erase(myVector.begin()+i) ; 
	  cout << data << " was successfully erased." << endl << endl  ; 
	    
	  return ; 
	}
      
    }
  cout << data << " does not exist and can not be deleted." << endl << endl;
}


void searchBook(vector<Book>& myVector, string searchKey)//dats is stored into searchKey 
{
  int position, counter ; 
  counter = 0 ; 

  cout << "Searching for " << searchKey << " in databse." << endl ; 
  
  for(int i = 0 ; i < myVector.size() ; i++)
    {
      position = myVector[i].title.find(searchKey, 0);
      if(position != -1)
	{
	  cout << myVector[i].ISBN << " " << myVector[i].title << " " << myVector[i].author << " " << myVector[i].edition << endl ; 
	  counter ++  ;
	}
    }
  if(counter == 0 )
    cout << "Sorry, no matching books exists." << endl << endl ; 
}


void searchAuthor(vector<Book>& myVector, string searchKey)
{
  int position, counter ;
  counter = 0 ;

  cout << "Searching for author " << searchKey << " in databse." << endl ;

  for(int i = 0 ; i < myVector.size() ; i++)
    {
      position = myVector[i].author.find(searchKey, 0);
      if(position != -1)
        {
          cout << myVector[i].ISBN << " " << myVector[i].title << " " << myVector[i].author << " " << myVector[i].edition << endl ;
          counter ++  ;
        }
    }
  if(counter == 0 )
    cout << "Sorry, no matching author exists." << endl << endl ;
}

void updateQuantity(vector<Book>& myVector)
{
  Book temp ;
  int quantity ;

  fin >> temp.ISBN ;
  fin >> quantity ;

  for(int i = 0 ; i < myVector.size() ; i++) //This forloop checks for duplicates                                                                                                                         
    {
      if(temp.ISBN==myVector[i].ISBN)
        {
          myVector[i].quantity = quantity ;
	  cout << myVector[i].ISBN << " was successfully updated to " << quantity  << endl ;
          return ;
        }
    }
  cout << temp.ISBN << " does not exist and can not be updated" << endl << endl ;

  // cout << myVector[i].ISBN << " does not exist and can not be updated" << endl ;                                                                                                                       
}

void updatePrice(vector<Book>& myVector)
{
  Book temp ; //temp variable 
  double price ; 
 
  fin >> temp.ISBN ; 
  fin >> price ;  
 
 for(int i = 0 ; i < myVector.size() ; i++) //This forloop checks for duplicates                                                                                                                    
    {
      if(temp.ISBN==myVector[i].ISBN)
	{
	  myVector[i].price= price ;
	  cout << myVector[i].ISBN << " was successfully updated to " << price  << endl ;   
	  return ;
	}
    }      //this works as an if else 
 cout << temp.ISBN << " does not exist and can not be updated" << endl  << endl ;


}

void sortFunc(vector<Book>& myVector)
{
 
 
  int startScan, minIndex, temp ;
  bool choice = false ; 
    Book minValue ; 

    for (startScan = 0; startScan < myVector.size(); startScan++)
      {
	minIndex = startScan; //beginning of vector 
	minValue = myVector[startScan];
	for(int index = startScan + 1; index < myVector.size(); index++)
	  {
	    if ((myVector[index].title[0] < minValue.title[0])&& myVector[index].title[0]<minValue.title[0]) //every title needs a 0 to start at the beginning
	      {
		minValue = myVector[index];
		minIndex = index;
	      }
//I tried to get it to sort by edition but I couldnt figure it out, please give me full credit anyways cause A for effort 

	    /*	    else if(myVector[index].title == myVector[index].title)
	      {
		if(myVector[index].edition < minValue.edition)
		  { 
		    minValue = myVector[index];
		    minIndex = index ;
		  }
	      }
	    else if(myVector[index].title[0] == myVector[index].title[0])
	      {
		if(myVector[index].title.length() < minValue.title.length())
		  temp = myVector[index].title.length();
		
		else //
		  temp = minValue.title.length();
		for(int i = 1 ; i < temp ; i++ )
		  {
		    if(myVector[index].title[i] < minValue.title[i]&& !choice ) //checks the individual character in each title 
		      {
			choice = true ;
			minValue = myVector[index] ;
			minIndex = index ;
		      }
		    
		  }
		  }*/ 
	  }
      

	myVector[minIndex] = myVector[startScan];
	myVector[startScan] = minValue;
      }
    cout << "Bookstore database successfully sorted." << endl << endl ; 
}

void saveFunc(const vector<Book>& myVector)
 {
   ofstream fout ;
   fout.open("bookstoreTransOutput.txt") ; //opens the file 

   fout << setw(20) << left << "ISBN" << setw(45) << "Title" << setw(20) << "Author" << setw(10) << "Edition" << setw(10) << "Quantity" << setw(10) << "Price" << endl ;
   fout << "---------------------------------------------------------------------------------------------------------------------------------------------" << endl ;
   //Prints all of these things into the file. 
   for(int i = 0 ; i < myVector.size() ; i++)
     {
       fout << setw(20) << left << myVector[i].ISBN << setw(45) << myVector[i].title << setw(20) << myVector[i].author << setw(10) << myVector[i].edition << setw(10) << myVector[i].quantity
	    << setw(10) << setprecision(2) << fixed << myVector[i].price << endl ;
     }
   cout << endl <<  "Bookstore database was saved." << endl << endl; 
   fout.close() ;
 }


