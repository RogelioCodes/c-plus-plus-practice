
// this demo program shows how inheritance and virtual functions work
 

#include "girl.h"
#include <iostream>
#include <vector>


// girl inherits from person

int main()
{
  cout << "-- First with girl A and person B " << endl;

  girl A;    // calls person const first even when girl const was there
  A.doit();  // girls doit is called

  person B;
  B.doit();  // persons doit is called

  cout << "-- Person gets a girl " << endl;

  B = A;  // person gets girl does work
  /* A = B;   but girl gets person does NOT work  */
  B.doit();   // persons doit is called whether virtual or not 

  char x;
  cin >> x;

  cout << "-- Now with a person array with a Girl and a Person....." << endl;

  person L[2];  
  L[0] = A;     // yes I can assign a girl to the person array
  L[1] = B;
  L[0].doit();  // persons doit for the girl - virtual or not
  L[1].doit();


  cin >> x;
  
  cout << "-- Now with pointers to a person, a girl and a girl." << endl;

  person* P = new person;   // person to person
  person* G = new girl;     // person gets girl (not possible other way)
  girl*   RG = new girl;    // girl to girl

  cout << "With a person pointer to a person ";
  (*P).doit();    // person
  cout << "With a person pointer to a girl ";
  (*G).doit();    // person? girl?
  // G->doit();  does  the same thing as above
  cout << "With a girl pointer to a girl ";
  (*RG).doit();   // girl
  
  cout << endl << "ending..." << endl;
}
