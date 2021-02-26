#ifndef INTERNATIONALPACKAGE_H
#define INTERNATIONALPACKAGE_H

#include "Package.h" 
//An international package class with functions for getting a country and calculating cost based on that country 
class InternationalPackage: public Package
{
 private:
  string country ; 
  
 public: 
  InternationalPackage() ; 
  InternationalPackage(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign, string Count)  ; 

  string getCountry() const ; 
  double calculateCost() ; 
  
  void printInternationalPackage() ; 

}
;
#endif 
