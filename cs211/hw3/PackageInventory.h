#ifndef PACKAGEINVENTORY_H
#define PACKAGEINVENTORY_H 

#include "Package.h" 
#include "FlatRatePackage.h" 
#include "OvernightPackage.h"
#include "InternationalPackage.h" 
#include <vector> 
#include <fstream>
#include <cstdlib>

//The package inventory class is used for the largest part of the program. It has 6 normal functions and 6 different print functions 
class PackageInventory
{
 private: 
  vector <Package> packages;
  vector <FlatRatePackage> flatRatePackages;
  vector <OvernightPackage> overnightPackages;
  vector <InternationalPackage> internationalPackages; 
  
 public: 
  void ProcessTransactionFile(string filename) ;
  
  void CreateNewPackage(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign) ;
  
  void CreateNewFlatRate(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign, string typ, double len, double wid, double h) ;
  
  void CreateNewOvernight(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign, string track, double oFee);
  
  

  void CreateNewInternational(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign, string dest);

  void PrintAllPackages(); 
 
  void PrintFlatRatePackages();

  void PrintAllOvernightPackages() ; 

  void  printInternationalPackage();

}
;
#endif
