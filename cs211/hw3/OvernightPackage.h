#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"
//the overnight package class has functions for getting an overnight fee and tracking and then calculating cost based on those functions
class OvernightPackage: public Package
{
 private:
  double overnightFee ;
  string tracking ;
 public:
  OvernightPackage() ; 
  OvernightPackage(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign, string track, double oFee);
  double getOvernightFee() const ; 
  string getTracking() const ; 
  double calculateCost() ;

 void printOvernightPackage() ;

};
#endif


