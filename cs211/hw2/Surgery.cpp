#include "Surgery.h" 


Surgery::Surgery(int sCode, string sDescription, double sCharge) 
{
  surgeryCode = sCode; 
  surgeryDescription = sDescription ; 
  surgeryCharge= sCharge; 
}
void Surgery:: printSurgery() const 
{
  cout << surgeryCode << setw(31) << right << surgeryDescription << setw(18) << right << surgeryCharge << endl ; 
 
}
int Surgery:: getSurgeryCode() const 
{
  return surgeryCode ; 
}
string Surgery:: getSurgeryDescription() const 
{
  return surgeryDescription ; 
}

double Surgery:: getSurgeryCharge() const 
{
  return surgeryCharge ; 
}

void Surgery :: printSurgeryDescription() const
{
  cout << surgeryDescription << endl ; 
}

void Surgery:: setSurgeryCode(int sCode)
{
  surgeryCode = sCode ;
}

void Surgery:: setSurgeryDescription(string sDescription) 
{
  surgeryDescription = sDescription ;

}

void Surgery:: setSurgeryCharge (double sCharge) 
{

  surgeryCharge= sCharge;

}
