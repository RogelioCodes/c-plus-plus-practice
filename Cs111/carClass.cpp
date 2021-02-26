#include<iostream>
using namespace std; 

enum direc{NORTH, EAST, SOUTH, WEST } ; 
class Car 
{
private: 
  string model ; 
  int year ; 
  int mileage ; 
  int X ; 
  int Y ; 
  direc  direction ; 

public: 
  Car(string mdl, int yr ) ; 
  string getModel() ;
  void turnRight() ;
  string getDirection() ;
  void goForward(int blocks) ; 
  int getX() ;
  int getY() ;
  int getMileage(); 


};


Car::Car(string mdl, int yr )
{
  model = mdl ; 
  year = yr ; 
  mileage = 0 ; 
  X = Y = 0 ; 
  direction = NORTH ; 

}

string Car:: getModel() 
{
  return model ; 
}

void Car::turnRight()
{
 if(direction == WEST)
   direction = NORTH ;
 else 
   direction =(direc)(direction+1) ;
}

string Car::getDirection()
{
   switch(direction)
    {
    case NORTH: return "north" ; 
    case EAST: return "east" ; 
    case SOUTH: return "south" ;
    case WEST: return "west" ; 
    }

   //  return "OK";
}

void Car:: goForward(int blocks)
{
  mileage += blocks ; 
  if(direction ==NORTH)
    Y += blocks ; 
  else if(direction == EAST)
    X += blocks ; 
  else if(direction == SOUTH)
    Y += blocks ; 
  else  if(direction ==WEST)
	  X += blocks ; 
}

int Car::getX()
{
  return X ; 
}

int Car::getY()
{
  return Y ;
}

int Car::getMileage()
{
  return mileage ; 
}

int main()
{
  Car c1("Camry", 2017) ;  
  Car c2("F150", 2017) ;
  //  cout << c1.model << endl ; 
  cout << c1.getModel() << endl ; 
  cout << c2.getModel() << endl ;

   cout << c1.getDirection() << endl;   
  c1.goForward(2) ;   

  cout << "(" << c1.getX() << ", " << c1.getY() << ")" << endl ; 

  c1.turnRight() ; 
  c1.goForward(3);

  cout << "(" << c1.getX() << ", " << c1.getY() << ")" << endl ;
 
  //  cout << "mileage is " << c1.getMileage() << endl ; 

  cout << c1.getDirection() << endl;
  c1.turnRight() ;

  cout << c1.getDirection() << endl;
  c1.turnRight() ;

  cout << c1.getDirection() << endl;
  c1.turnRight() ;
  

  cout << c1.getDirection() << endl;
  


    //cout << c1.direction ;  
 

  
 return 0 ; 
}

//CHaspPPPs doNt kIlll my vIibBEBEBbbEEE 
