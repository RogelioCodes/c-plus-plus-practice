/**********************************************************************
ROGELIO CORDOVA
CS 211 
10/15/2017
************************************************/
#include "HospitalCharges.h" 
//#include <iomanip>

//This function will print all the surgeries
void HospitalCharges:: printAllSurgeries() const 
{
  cout << "Surgery Code: " << setw(20)<< "Description: " << setw(20) << "Charge: " << endl ; 
  cout << "-----------------------------------------------------------" << endl ;
  
  for(int i = 0 ; i < surgeries.size() ; i++)
    {
      surgeries[i].printSurgery() ; 
      
    }
  cout << "-----------------------------------------------------------" << endl << endl ; 
}

//This Function will print out all of the medications
void HospitalCharges:: printAllMedications() const 
{


  cout << "Medication Code: " << setw(20)<< "Description: " << setw(20) << "Charge: " << endl ;
  cout << "-----------------------------------------------------------" << endl ;

  for(int i = 0 ; i < medications.size() ; i++)
    {
      medications[i].printMedication() ;

    }
  cout << "-----------------------------------------------------------" << endl << endl ;

}
//This function will print out all of the patient accounts
void HospitalCharges:: printAllPatientAccounts()const 
{
  cout << "--------------PrintAllPatientAccounts---------------" << endl ;  
  for(int i = 0 ; i < patientsAccounts.size(); i++)
    {
      patientsAccounts[i].printAllPatientAccounts(); 
    }
}
//This function opens the transaction file and processes its lines one by one. If the file
//could not be opened, it should print appropriate error message. 
void HospitalCharges:: processTransactionFile(string filename) 
{
  ifstream fin ; 

  //temp variables used to fin data
  string fn ; 
  string ln ; 
  long soc ; 
  char gen ; 
  int age ; 
  double rate ; 
  int month ; 
  int day ; 
  int year ; 
  int sC ; // surgeryCode
  string sd ; //surgery des
  double sCh ; //surgeryCharge
  long pNum ; //patient Num 
  
  int mC ; //medicationCode
  string mD ; //description
  double mCh ; //charge

  

  string command ; 
  
  fin.open("transactionFile.txt");
   
  if(!fin)//checks that the file exists
    {
      cout << "File doesn't exist." << endl ; 
      exit(1) ; 
    }
 
  fin >> command ; 
 
  while(fin)//if it exists 
    {
      if(command == "CreateNewPatient") 
	{
	  //Inputs all the data
	  fin >> fn ; 
	  fin >> ln ; 
	  fin >> soc ; 
	  fin >> gen ; 
	  fin >> age ; 
	  fin >> rate ; 
	  fin >> month ; 
	  fin >> day ; 
	  fin >> year ; 
	  
	  CreateNewPatient(fn, ln, soc, gen, age, rate, month, day, year);//calls the function
	}
      if(command == "PrintAllPatientAccounts" )
	{
	  cout << endl ; 
	  printAllPatientAccounts() ; //calling function
	}
      if(command == "CreateNewSurgery")
	{
	  //data is inputed
	  fin >> soc ; 
	  fin >> sd ; 
	  fin >> sCh ; 
	  CreateNewSurgery(soc, sd, sCh) ; //calling function
	}
      if(command == "PrintAllSurgeries") 
	{
	  cout << endl ; 
	  printAllSurgeries() ;  //calling function

	}
      if(command == "AddPatientSurgery")
	{
	  fin >> sC; 
	  fin >> pNum ; 
	  cout << endl ;
	  AddPatientSurgery(sC, pNum);  //calling function

	}
      if(command == "CreateNewMedication")
	{
	  fin >> mC ; 
	  fin >> mD ; 
	  fin >> mCh ; 
	  CreateNewMedication(mC, mD, mCh);  //calling function
	}
      if(command == "PrintAllMedications")
	{
	  cout << endl ; 
	  printAllMedications() ; //calling function
	}
      if(command == "AddPatientMedication")
	{
	  cout << endl ; 
	  fin >> mC ;
	  fin >> pNum ; 
	  AddPatientMedication(mC, pNum);  //calling function
	}
      if(command == "DischargePatient")
	{
	  fin >> pNum ;
	  fin >> month ; 
	  fin >> day ;
	  fin >>  year ; 
	  DischargePatient(pNum, month, day, year);
	}
      fin >> command ; //last line should always be an fin command
    }
  fin.close() ; 
}

/*This function creates a PatientAccount object by calling the appropriate constructor
and adds it to the patientsAccounts vector. It validates the given patient’s
data before adding a new account to the patientsAccounts vector. If it is trying to
create a patient that already exists or has invalid date, it should print an error
message.*/
void HospitalCharges:: CreateNewPatient (string pFName, string pLName, long pSSN, char pGen, int pAge, double pRate, int aMonth, int aDay, int aYear)
{
  //bool variable is used to check conditons
  bool found = false ; 
  
  if(patientsAccounts.size() == 0)//goes through the vector 
    {
      PatientAccount temp(pFName, pLName, pSSN, pGen, pAge, pRate, aMonth, aDay, aYear); //calls the constructor
      cout << "CreateNewPatient " << pFName << " " << pLName << " " << pSSN << " " << pGen << " " << pAge << " " << pRate << " " << aMonth << " " << aDay << " " << " " << aYear << ".." << endl ; 
      cout << pFName << " " << pLName << "'s account was successfully added." << endl ;
      cout << endl ; 
      patientsAccounts.push_back(temp); //pushes to top
      
    }
  if(patientsAccounts.size() > 0) //makes sure it keeps going through the vector
    {
      for(int i = 0 ; i < patientsAccounts.size() && found == false ; i++)
	{
	  if(pSSN == patientsAccounts[i].getSSN()) //checks that the SSNs match
	    {
	      found = true ; 
	    }
	}
    }
  if(found == true) //if it finds a matching SSN
    {
      cout << "CreateNewMedication " << pFName << " " << pLName << " " << pSSN << " " << pGen << " " << pAge << " " << pRate << " " << aMonth << " " << aDay << " " << " " << aYear << ".." << endl ;
      cout << "An account for " <<  pFName << " "  << pLName << " already exists. " << endl ;
      cout << endl ; 
    }
  else if(found == false) //if it doesnt mind a matching SSN
    {
      PatientAccount temp(pFName, pLName, pSSN, pGen, pAge, pRate, aMonth, aDay, aYear); //calling constructor
      cout << "CreateNewPatient " << pFName << " " << pLName << " " << pSSN << " " << pGen << " " << pAge << " " << pRate << " " << aMonth << " " << aDay << " " << " " << aYear << ".." << endl ;
      cout << pFName << " " << pLName << " account was successfully added." << endl << endl  ; 
      patientsAccounts.push_back(temp); //goes to top of vector
    }      
  
} 

/* This function creates a new Surgery object by calling the appropriate constructor and
adds it to the surgeries vector. It should not add duplicate surgeries or surgeries
with invalid data. If it is trying create a surgery whose code is the same as an
existing one, or whose charge is less than or equal to 0, it should print an error
message */
void HospitalCharges:: CreateNewSurgery (int sCode, string sDescription, double sCharge)
{

  bool temp = false ;
  int tmp ;  
  if(surgeries.size() == 0) 
    {
      Surgery s(sCode, sDescription, sCharge) ;
      surgeries.push_back(s) ; //pushes to top

      cout << "CreateNewSurgery " << sCode << " " << sDescription << " " << sCharge << ".." << endl ; 
      cout << "Surgery entry was successfully created." << endl<< endl  ;

    }
  if(surgeries.size() > 0) //goes through vector 
    {
      for(int i = 0 ; i < surgeries.size() && temp == false; i++)
	{
	  if(sCode == surgeries[i].getSurgeryCode() || surgeries[i].getSurgeryCharge() <= 0)
	    {
	      temp = true ; 
	    }    
	}
    }
  
  if(temp == true ) //if it finds a duplicate or the charge is negative
	{	 
	  cout << "CreateNewSurgery " << sCode << " " << sDescription << " " << sCharge << ".." <<  endl ;
     cout <<  sCode << " This surgery code already exists, can not create new entry." << endl  << endl ; 
	}
  else if(temp == false && sCharge > 0 )//if no duplicate or negative charge
	{
	  Surgery s(sCode, sDescription, sCharge) ;
	  cout << "CreateNewSurgery " << sCode << " " << sDescription << " " << sCharge << ".." << endl ; 
	  cout << "Surgery entry was successfully created." << endl << endl ;
	  surgeries.push_back(s) ;//pushes to top
	}  
      
}
/*
This function creates a new Medication object by calling the appropriate constructor
and adds it to the medications vector. It should not have duplicate medication
entries or entries with invalid data. If is trying to create a medication whose code
is the same as an existing one, or whose charge is less than or equal to 0, it should
print an error message
*/
 void HospitalCharges:: CreateNewMedication(int mCode, string mDescription, double mCharge)
{

  bool found = false ;
  if(medications.size() == 0) 
    {
      Medication temp(mCode, mDescription, mCharge); //temp variable
      cout << "CreateNewMedication " << mCode << " " << mDescription << " " << mCharge<< " " << endl ; 
      cout << mDescription << " was successfully created." << endl ;
      cout << endl ;
      medications.push_back(temp); //pushes to top

    }
  if(medications.size() > 0) //goes through vector
    {
      for(int i = 0 ; i < medications.size() && found == false ; i++) //goes through vector
        {

          if(mCode == medications[i].getMedicationCode()|| medications[i].getMedicationCharge()< 0 ) //finds a duplicate code or invalid charge
            {
              found = true ;
	      
            }
        }
    }
  if(found == true || mCharge <= 0) //if invalid code or charge
    {
      cout << "CreateNewMedication " << mCode << " " << mDescription << " " << mCharge << "..\
" <<  endl ;
      cout << " This medication charge is invalid, can not create new entry." << endl  
	   << endl ;
    }
     
  else if(found == false && mCharge>0)
    {
      Medication temp(mCode, mDescription, mCharge) ;
      cout << "CreateNewMedication " << mCode << " " << mDescription << " " << mCharge << "..\
" << endl ;
      cout << mDescription << " medication entry was successfully created." << endl << endl ;
      medications.push_back(temp) ;
    }




}

/*
This function adds a Surgery object to the patient’s list of surgeries, that is, to the
vector of patientSurgeries for the patient whose account number is pNum. It
ensures that both the surgery code and patient account number are valid. If so, you should
add the Surgery object to the patientSurgeries vector and display a message that the
Surgery object is successfully added.
*/
void HospitalCharges:: AddPatientSurgery (int sCode, long pNum)
{
  bool found ;
  found = false ;

  int i ;
  int index  ;

  for( i = 0 ; i < patientsAccounts.size() ; i ++) //finds the person
    {
      if(pNum == patientsAccounts[i].getPatientAccountNum() )
        {
          index = i ;
          found = true ;
        }
    }
  if(found == true) //if the person exists
    {
      for(int x = 0 ; x < surgeries.size()&&found == true ; x++ )
        {
          if(sCode == surgeries[x].getSurgeryCode())
            {
              cout << "AddPatientSurgery " << sCode << " " << pNum << endl ;
              cout << surgeries[x].getSurgeryDescription() << " was successfully added to " <<patientsAccounts[index].getFirstName() << " " << patientsAccounts[index].getLastName() << "'s acc\
ount" << endl ;
	       patientsAccounts[index].addSurgeries(surgeries[x]) ;

            }
        }
    }
  if(found == false) //if patient doesnt exist or surgery code doesnt exist/ is invalid 
    {
      cout << "AddPatientSurgery " << sCode << " " << pNum << endl ;
      cout << "Invalid surgery code." << endl ;
    }
}

/*
This function adds a Medication object a patient took to the patient’s list of
medications, that is, to the vector of patientMedications for the patient whose account
number is pNum. It ensures that the medication code is valid and the patient
account number is valid. If any of these is invalid, it should print appropriate error
messages.
*/
void HospitalCharges:: AddPatientMedication (int mCode, long pNum) 
{
  bool found, found1  ;

  found = false ;
  found1 = false ; 
  int i ;
  int index  ;
  
  for( i = 0 ; i < patientsAccounts.size() ; i ++) //if patient exists
    {
      if(pNum == patientsAccounts[i].getPatientAccountNum() )
        {
          index = i ;
          found = true ;
        }
    }
  if(found == true)//if it finds the patient
    {
      for(int x = 0 ; x < medications.size()&&found == true ; x++ )
        {
          if(mCode == medications[x].getMedicationCode())
            {

              cout << "AddPatientMedication " << mCode << " " << pNum << endl ;
              cout << medications[x].getMedicationDescription() << " was successfully added to " <<patientsAccounts[index].getFirstName() << " " << patientsAccounts[index].getLastName() << "'s account" << endl ;
              patientsAccounts[index].addMedications(medications[x]) ; //addMedications is a pushback function 

            }
        }
    }
  if(found == false) //if there is an invalid medications
    {
      cout << "AddPatientMedication " << mCode << " " << pNum << endl ;
      cout << "Invalid medication code." << endl ;
    }

}
/*void HospitalCharges :: aPush(const PatientAccount& P) 
{
    patientsAccounts.push_back(P) ; 
}
*/

//THIS FUNCTION IS TRASH 
void HospitalCharges:: DischargePatient (long pNum, int dMonth, int dDay, int dYear) 
{
  /*bool found = false ; 
  int index ; 
 
  Date temp ; 
 
 
  if(dDay>0 && dDay <= 31 )
    {
      
       
	  for(int  i = 0 ; i < patientsAccounts.size() ; i ++) //if patient exists
	    {
	     
	      patientsAccounts[i].setDischargeDate(dMonth, dDay, dYear) ;
	      patientsAccounts[i].aPush(patientsAccounts[i]) ;
              
	     
	      if(dDay > temp.getDay())// && pNum == patientsAccounts[i].getPatientAccountNum() )
		{
		   
		 
		  cout << "DischargePatient " << pNum << " " << dMonth << " " << dDay << " " << dYear << endl ; 

		} 
	    }
	    }
	  if(found == true) 
	    {
	      for( int  i = 0 ; i < patientsAccounts.size() ; i ++)
		{
		  cout << "Patient " << pNum << " successfuly discharged." << endl ; 
		}
	    }
    
  if (found == false) 
    {
      cout << "INVALID DISCHARGE DATE. " << endl; 
    }
  
  */  

 }
void HospitalCharges:: CalculatePatientBill(long pNum)
{

}




