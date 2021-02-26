/* Rogelio Cordova 
   HW 4 
   11/28/2017

A program that manages songs playlists in media player applications. The program
should allow typical media player functionalities such as playing the current song, previous
song, next song, play the entire playlist, delete a song... To do that, the program creates a
circular doubly linked list of Songs sorted by their names. 
*/
 
#ifndef SONG_H 
#define SONG_H

#include<iostream>
#include<string>
using namespace std ; 
#include<cstdlib>
#include<fstream>
struct Song
{
  friend class SongPlayer ; 
 private:
  string name; // includes path
  string artist; // artist name
  string genre; // genre of song
  double length; // length of song
  Song * previous; // pointer to previous Song node
  Song * next; // pointer to next Song node

 public: 
  
}
;
#endif
