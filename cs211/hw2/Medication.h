#ifndef MEDICATION_H
#define MEDICATION_H

#include "Date.h"
#include<iomanip>
class Medication
{
 private:  
  int medicationCode;
  string medicationDescription;
  double medicationCharge; 
  
 public: 
  Medication(int mCode, string mDescription, double mCharge) ; 
  

void getMedication(int mCode, string mDescription, double mCharge);
  void printMedication() const ; 
  double getMedicationCharge() const ;
  int getMedicationCode() const ;
  string  getMedicationDescription() const ;



}
;
#endif