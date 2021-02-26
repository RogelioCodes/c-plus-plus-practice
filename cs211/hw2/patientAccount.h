#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H
#include "Date.h" 
#include "Surgery.h" 
#include <vector>

class PatientAccount
{
  //  friend class HospitalCharges ;
 private: 
  const long patientAccountNum; // =nextPatientAccountNum
  string firstName;
  string lastName;
  long SSN;
  char gender;
  int age;
  double dailyRate;
  Date admittDate;
  Date dischargeDate;
  vector <Surgery> patientSurgeries;
  vector <Medication> patientMedications;
  static long nextPatientAccountNum; // initialize it to 1000 and increment it by 1 as you create a new object

 public: 
  //  PatientAccount(); 
  PatientAccount(string pFName, string pLName, long pSSN, char pGen, double pAge, double dRate, int aDay, int aMonth, int aYear) ;

  //  void setPatientAccount( string pfName, string plName, long pSSN, char pGen, double pAge, double dRate, int aDay, int aMonth, int aYear);


 void  setName(string pfName, string plName);
 void  setSSN(long pSSN) ;
 void setGender(char pGen) ;
 void setAge(int pAge) ; 
 void setDailyRate(double dRate) ; 
 void setAdmittDate(Date adDate) ;
 //void setDischargeDate(Date disDate);
 void setPatientAccountNum(long pNum) ;
 void addSurgeries(const Surgery& S ) ;
 void addMedications(const Medication& M);
 void setDischargeDate(int aDay, int aMonth, int aYear) ; 
 void AddDischarge(const PatientAccount& P) ;


   string getFirstName() ;
  string getLastName() ;
   long  getSSN() ;
  char  getGender() ;
    int  getAge() ;
  double  getDailyRate() ; 
  Date getAdmittDate()  const ;
  Date  getDischargeDate()  const ; 
    long getPatientAccountNum() const ; 

    //    Date getDay() const ; 


  void printAllPatientAccounts() const ;
}
;
#endif
