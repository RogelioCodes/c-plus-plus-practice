#include "Medication.h" 


Medication:: Medication(int mCode, string mDescription, double mCharge)
{
  medicationCode = mCode ; 
  medicationDescription = mDescription ; 
  medicationCharge = mCharge ; 
}
void Medication:: printMedication() const 
{
  cout << medicationCode<< "\t\t\t"  <<  left << setw(18) <<  medicationDescription <<right << setw(10) << medicationCharge << endl ; 
}


int Medication :: getMedicationCode() const
{
  return medicationCode ; 
}
string Medication:: getMedicationDescription() const 
{
  return medicationDescription ; 
}

double Medication :: getMedicationCharge() const
{
  return medicationCharge ;
}
