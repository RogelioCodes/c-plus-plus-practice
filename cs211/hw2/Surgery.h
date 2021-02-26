#ifndef SURGERY_H
#define SURGERY_H
#include "Medication.h" 
#include <iomanip>
using namespace std ; 
class Surgery
{
  private:
  int surgeryCode;
  string surgeryDescription;
  double surgeryCharge; 
  

 public: 
  Surgery(int sCode, string sDescription, double sCharge) ;
  void printSurgery() const ; 
  void printSurgeryDescription() const ;
  void setSurgeryCode(int sCode) ;
  void setSurgeryDescription(string sDescription) ;
  void setSurgeryCharge (double sCharge);


  int  getSurgeryCode() const ;
  string getSurgeryDescription() const ;
  double  getSurgeryCharge() const;
 



}
;
#endif
