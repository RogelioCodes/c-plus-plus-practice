\#include "patientAccount.h" 
#include"Medication.h" 
#include"Surgery.h"

long PatientAccount::nextPatientAccountNum = 1000 ; 

PatientAccount::PatientAccount(string pFName, string pLName, long pSSN, char pGen, double pAge, double dRate, int aDay, int aMonth, int aYear): patientAccountNum(nextPatientAccountNum)
{
  nextPatientAccountNum++ ; 
  firstName = pFName ;
  lastName = pLName ;
  SSN = pSSN ;
  gender = pGen ;
  age = pAge ;
  dailyRate = dRate ;
  admittDate.setDate(aMonth,aDay,aYear) ;
  dischargeDate.setDate(0,0,0);


  //  day = aDay ; 

 /*  firstName = "unknown" ;
  lastName = "unknown" ; 
  SSN = 0 ; 
  */

}





/*PatientAccount::PatientAccount(string pfName, string plName, long pSSN, char pGen, double pAge, double dRate, int aDay, int aMonth, int aYear): patientAccountNum(nextPatientAccountNum)

{

  firstName = pfName ;
  lastName = plName ;
  SSN = pSSN ;
  gender = pGen ;
  age = pAge ;
  dailyRate = dRate ;
  admittDate.setDate(aMonth,aDay,aYear) ;
  dischargeDate.setDate(0,0,0);
 


  }*/

/*void PatientAccount:: setPatientAccount( string pfName, string plName, long pSSN, char pGen, double pAge, double dRate, Date adDate, Date disDate)

{
  firstName = pfName ; 
  lastName = plName ; 
  SSN = pSSN ; 
  gender = pGen ; 
  age = pAge ; 
  dailyRate = dRate ; 
  admittDate = adDate ;
  dischargeDate = disDate; 
  }*/
void PatientAccount:: setName(string pfName, string plName)
{
  firstName = pfName ; 
  lastName = plName ; 
} 
void PatientAccount:: setSSN(long pSSN) 
{
  SSN = pSSN ; 
}
void PatientAccount:: setGender(char pGen)
{
  gender = pGen ; 
}
void PatientAccount:: setAdmittDate(Date adDate)
{
  admittDate = adDate ;
}
/*void PatientAccount:: setDischargeDate(Date disDate)
{
  dischargeDate = disDate ; 
  }*/



string PatientAccount::  getFirstName() 
{
  return firstName ; 
}

string PatientAccount::  getLastName()  
{
  return lastName ; 
}

long PatientAccount::   getSSN() 
{
  return SSN ; 
}

char PatientAccount::  getGender() 
{
  return gender ; 
}

int PatientAccount:: getAge() 
{
  return age ; 
}

double PatientAccount:: getDailyRate()
{
  return dailyRate ; 
}

Date PatientAccount::  getAdmittDate() const 
{
  return admittDate ; 
}



Date PatientAccount::  getDischargeDate() const
{
  return dischargeDate ; 
}

void PatientAccount:: setDischargeDate(int aDay, int aMonth, int aYear) 
{
  dischargeDate.setDate(aDay,aMonth,aYear) ; 
}

/*void PatientAccount:: setPatientAccountNum(long pNum)
{
  patientAccountNum = pNum ; 
  }*/

long PatientAccount:: getPatientAccountNum() const
{
  return patientAccountNum ; 
} 

void PatientAccount:: addSurgeries(const Surgery& S)
{
  patientSurgeries.push_back(S) ; 
}
void PatientAccount:: addMedications(const Medication& M)
{
  patientMedications.push_back(M) ;
}

/*void PatientAccount :: AddDischarge(const PatientAccount& P)
{
  patientsAccounts.push_back(P) ;
}
*/

/*void PatientAccount :: getDischargeDate(int dMonth, int dDay, int dYear)const
{

}*/

void PatientAccount:: printAllPatientAccounts() const 
{
  cout << firstName << " " << lastName << ", " << gender << ", " << age << endl ;
  cout << "Patient ID: " << patientAccountNum << endl ; 

  cout << "Admitted on: " ; 
  admittDate.printDate() ; 

  cout << "Discharged on: " ; 
  dischargeDate.printDate() ;
  //  cout << endl ; 

  cout << "Surgeries: " ;
  if(patientSurgeries.size()> 0)
    {
  for(int i = 0 ; i < patientSurgeries.size() ; i++)
    {
      cout   <<  patientSurgeries[i].getSurgeryDescription() << ", "      ;

    }
  cout << endl ; 
    }
   

  cout << "Medications: "  ;

  if(patientMedications.size() > 0)
    {

      
  for(int i = 0 ; i < patientMedications.size() ; i++)
    {
      cout <<  patientMedications[i].getMedicationDescription() << ", "  ;
      
    }
    }

  cout << endl << endl  ; 
  
}


