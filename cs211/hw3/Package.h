#ifndef PACKAGE_H
#define PACKAGE_H
#include<iostream>
#include<iomanip>
using namespace std ; 
//The package class is the largest as it holds the most information and is used by the other classes
class Package
{
 protected:
  string senderName ;
  string senderAddress ; 
  string senderCity ; 
  string senderState ; 
  long senderZIPcode ; 

  //recipient information
  string recipName ;
  string recipAddress ; 
  string recipCity ;
  string recipState ; 
  long recipZIPcode ;


  string label ;
  string  date ; 
  double weight ; 
  double costPerOunce ;
  string insuranceType ;
  string signatureConfirmation ; 

 public:
  Package(string sName, string sAddress, string sCity, string sState, long sZIPcode, string rName, string rAddress,string rCity, string rState, long rZIPcode,  string l, string d, double w, double c, string i, string s) ; 

  Package() ;


  double calculateCost() const ; 
  string getLabel() const ;
  string  getDate()  const ;
  double getWeight()  const ;
  double getCostPerOunce() const ;
  string getInsuranceType()  const ;
  string getSignatureConfirmation() const  ;

  void setLabel(string l) ;
  void setDate(string d) ;
  void setWeight(double w) ;
  void setCostPerOunce(double c);
  void setInsuranceType(string i) ;
  void setSignatureConfirmation(string s) ;
  void printPackage()const ;





  
  

}
;
#endif
