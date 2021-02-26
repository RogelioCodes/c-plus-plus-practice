/* Rogelio Cordova
   HW 4
   11/28/2017

A program that manages songs playlists in media player applications. The program
should allow typical media player functionalities such as playing the current song, previous
song, next song, play the entire playlist, delete a song... To do that, the program creates a
circular doubly linked list of Songs sorted by their names.
*/

#include "SongPlayer.h" 
int n= 1 ; 
 
SongPlayer::SongPlayer()
{
  current = NULL;
  head = NULL ; 
}
SongPlayer::~SongPlayer()
{

}
/*
This function creates a new Song and initializes its data to sName, sArtist, sGenre,
and sLength. The function then inserts the new Song into the list while maintaining
the list order. A message must be displayed whether the song was either successfully
added to the list or not.
*/
void SongPlayer:: addSong(string sName, string sArtist, string sGenre, double sLength) 
{
  string lala ; //lala is a copy of sName 
  Song *newNode = new Song ; 
  newNode -> name = sName ; 
  newNode -> artist = sArtist; 
  newNode -> genre = sGenre ; 
  newNode -> length = sLength ; 

  newNode->name  = newNode -> name.substr(27, newNode ->name.size()-1);
  newNode-> next = NULL ;
  newNode -> previous = NULL ; 
  
  if(head == nullptr )// checks that head is not null 
   {
      head = newNode ; //head point to newNode 
      newNode->next = head ; 
      newNode-> previous = head ; 
    }
 else
   {
      current = head ;                            
      while(current->next != head && newNode->name  > current-> name) //current -> next!= nullptr)// && sName.compare(current->name) > 0)
      {
	current = current-> next ;
      } 
      if(current == head || newNode-> name< head ->name) 
	{
	  newNode -> next = current ;
	  newNode -> previous  = head -> previous ; 
	  newNode -> previous -> next = newNode ; 
	  current -> previous = newNode ; 
	  head = newNode ; 
	  lala = sName ; //lala is copied here
	  lala = lala.erase(0,27) ; //erasing the stuff before name "c::..." 

	  cout << "Adding song " <<  lala <<  endl ; 
	}
      else 
	{
	  if(current -> name < newNode->name ) 
	    {
	      newNode -> previous = current ; 
	      newNode -> next = current -> next ; 
	      newNode -> next -> previous = newNode ; 
	      current -> next = newNode ;  
	    }
	  else 
	    {
	      newNode -> next = current ; 
	      newNode -> previous = current -> previous ; 
	      newNode -> previous -> next = newNode ; 
	      current -> previous = newNode ; 
	    }	
	  lala = sName ; 
	  lala = lala.erase(0,27) ;
	  cout << "Adding song "<< lala  <<  endl ;
	}
   }
}


/*
This function displays the details of the song whose name matches sName. Details
include the number of the song in the playlist, the song name, the artist name, the
genre and length. Make sure to include spaces when printing the song and artist
names. You may assume that every new word starts with an uppercase. The number
of the song is the number of the node. The function should also update the current
pointer to point to this Song. If no such Song exists, an error message must be
displayed. 
*/
void SongPlayer:: playSong(string sName) 
{
  Song *temp = head ; 
  string lala = sName ;

  // string xtra = substr(nodeptr->name,size()-1) 
  if(temp->name == sName)
    {
      cout<<"Playing song #"<<n<<": ";
      cout<<temp->name<<" ,";
      cout<<temp  -> artist <<" ,";
      cout<<temp -> genre <<" ,";
      cout<<temp->length;
    }  
  else
    {
      temp = head -> next ;
      while(temp->name  != sName && temp ->next != head)
	{
	  n++;
	  temp=temp->next;
	}
    }  
      if(temp->name != sName  && temp ->next == head)
	{
	  cout<<"Song " << lala << " was not found" << endl ;
	}
      if(temp->name ==sName)  
	{	  
	  cout<<"Playing song #"<<n<<": ";
	  cout<<temp->name<<", " << temp-> artist << ", " << temp-> genre << ", "  << temp -> length  << endl << endl ;
	}
}

/*
This function displays the details of the current song, the song pointed to by the
current pointer.
*/
void SongPlayer:: playCurrentSong() 
{
   cout<<"Playing song #" << n << ": " <<  current->name << ", " << current->artist<< ", " <<current->genre<<", " <<current->length << endl <<endl ;
}

/* This function updates the current pointer to point to the next song in the list, if there
is any, and then displays its details. If the current song is the last element in the list,
the current pointer should be updated to point to the first song in the list and show
the first song details. */
void SongPlayer:: playNextSong() 
{
  //  Song *temp = head ;
  n++ ; 
  if( n == 17)
    n= 1 ; 

  current = current-> next ; //finds next 
  cout<< "Playing song #" << n << ": " << current->name << ", " << current->artist<< ", " <<current->genre<<", " <<current->length << endl  ;
  cout<< endl ; 
}

/* This function updates the current pointer to point to the previous song in the list, if
there is any, and then displays its details. If the current song is the first element in
the list, the current pointer should be updated to point to the last song in the list.  */

void SongPlayer:: playPreviousSong() 
{
  n-- ; 
  Song *temp = head ;
  current = current-> previous -> previous ; //finds previous 
  cout<<"Playing song #" << n << ": " <<  current->name << ", " << current->artist<< ", " <<current->genre<<", " <<current->length << endl <<endl << endl ;
}

/* This function searches the list for the song whose name matches sName and deletes
it from the list. If the song to be deleted is the current song, the current pointer is
updated to point to its previous Song or null if the list becomes empty. */
void SongPlayer:: deleteSong(string sName) 
{

  int x = 1 ; 
  string lala = sName ;
  Song *temp  = head ;
  Song *dummy ; 

  if(temp -> name == sName)
    {
      if(head -> next ==head) 
	{
	  delete head ; 
	  head = NULL ; 
	  current = NULL ; 
	}
      else
	{

      cout << "Deleting song #" << n << ": " << temp-> name << ", " << temp-> artist << ", " << temp-> genre << ", " << temp-> length<<  endl ; 
      n++ ;
      if(n>=16)
	n = 16 ;
      
      dummy = head -> next ; //DUMMY IS USED AS ANOTHER TEMPORARY VARIABLE THE HOMIE MAKES IT EASY TO SAVE DATA WHILE DELETING STUFF 
      dummy -> previous = head -> previous ; 
      head -> previous = head -> next;
      delete head ; 
      head = dummy ; 
      return ; 
	}

    }
  else
    {
      temp = head -> next ;
      while(temp->name  != sName && temp ->next != head) //LOOKING FOR THE SONG NAME STOPS WHEN THE SONG NAME IS FOUND 
	{
	  n++ ;
	  if(n>=16)
	    n = 16 ;

	  temp=temp->next; //MOVES UP 

	}
    }
  if(temp-> name == sName)
    {
      cout << "Deleting song #" << n << ": " << temp-> name << ", " << temp-> artist << ", " << temp-> genre << ", " << temp-> length<<  endl ;
      temp -> previous -> next = temp -> next ;
      temp -> next -> previous = temp -> previous ;
      delete temp ;
    }
  else
    cout<<"Song " << lala << " was not found" << endl ;

  
}       
/*
This function deletes the current song and updates the current pointer to point to
either its previous song or null if the list becomes empty.
*/
void SongPlayer:: deleteCurrentSong() 
{
  Song *temp ; //copy variab;e 
  cout << "Deleting song #" << n << ": " << current-> name << endl ; 
  current -> previous -> next = current -> next ;
  current -> next -> previous = current -> previous ; 
  temp = current -> next ; //copy variable is used here 
  if(current = head) 
    {
      head = temp ;  //head is set to temp variable 
    }

  delete current ; //now current can be deleted 

  current = temp ; 
  cout << endl ; 
}

 



/* This function prints the details of all songs of a specific genre sGenre. If no such songs
exist, an error message must be displayed. */
void SongPlayer:: playAll (string sGenre) 
{
  current = head;
  int x = 0;
  if(current == nullptr)
    {
    cout << "list is empty." << endl;
    }
else
    {
      while(current->next != head)
        {
          if(current->genre == sGenre) //if genres match 
            {
              x = 1;
              cout <<"Playing song #" << x << ": " <<  current->name << " ,"  << current->artist << " ," << current->genre << " ,"  << current->length << endl;
            }
          current=current->next;
        }

    }

  if(x==0) //if genres dont match this is never touched so it outputs it wasnt found 
    cout << "No " << sGenre << " songs found" << endl;
  
  cout << endl ; 
}

/* This function traverses the list and prints the details of all songs in order up until the
last song in the list.  */
void SongPlayer:: playList() 
{
  int x = 0;     //SONG #
  current = head;
  cout << endl ;
  if(head == nullptr )
    {
      cout<<"List is empty. " << endl ;
    }
  else
    {
      //skips head and starts at next 
      //once current -> next == head 
      while(current -> next != head)
	{
	  x++ ; 
	  cout <<  "Song #" << x << ": " <<  current->name << ", " << current->artist << ", "  <<current->genre << ", " << " " <<current->length<< endl ;
	  current=current->next;
	}
      x++ ; //song #
      cout << "Song #" << x << ": " << current->name << ", " << current->artist << ", "  <<current->genre << ", " << " " <<current->length<< endl ;

    
}
  
}
/* 
This function traverses the list and prints the details of all songs in reverse order
(backwards).  */ 
void SongPlayer:: reversePlayList() 
{
  playList() ;
  int x = 0;
  //  current = head;
  cout << endl ;
  if(head == nullptr )
    {
      cout<<"List is empty. " << endl ;
    }
  
  current = head-> previous ; 
  x=0 ; 
  do
    {
      x++ ;
      cout <<  "Song #" << x << ": " <<  current->name << ", " << current->artist << ", "  <<current->genre << ", " << " " <<current->length<< endl ;
      current=current-> previous ;
    }
  while( current != head -> previous) ;   
  
}


  

    

/* This function reads a set of commands from the transaction file and executes the
corresponding member functions. */

void SongPlayer:: processTransactionFile() 
{
  ifstream fin ; 

  string sN  ; //song name 
  string sA;  //song artist
  string sG ; // song genre
  double sL ; //song Length 

  string command ; 
  
  fin.open("transactionFile.txt");
  if(!fin)
    {
      cout << "File doesn't exist." << endl ;
      exit(1) ;
    }

  fin >> command ;
  cout << endl ; 
  while(fin)
    {
      if(command == "addSong")
	{
	  
	  fin >> sN ; 
	  fin >> sA ; 
	  fin >> sG ; 
	  fin >> sL ; 
	  
	  addSong( sN, sA, sG, sL) ;
	  //	  cout << endl ; 
	}
      if(command == "playList")
	{

	  playList() ; 
	  cout << endl ; 

	}
           if(command == "playSong") 
	{
	  fin >> sN ; 
	  playSong(sN) ; 
	}
        if(command == "playPreviousSong") 
	{
	  	  playPreviousSong() ; 
	}
        if(command == "playNextSong")
	{
	  playNextSong() ;  
	}
	
      if(command == "deleteCurrentSong") 
	{
	  	  deleteCurrentSong() ; 
	}
      if(command == "playCurrentSong") 
	{
	  playCurrentSong() ;
	}
      if(command == "deleteSong")
	{
	  
	   fin >> sN ; 
	  deleteSong(sN);
	}
      if(command == "playAll")
      {
      fin >>sG ; 
      playAll(sG) ; 
	}
 
      if(command == "reversePlayList")
	{
	  reversePlayList();
	} 
 fin >> command ; 
    }
  fin.close() ; 
}
