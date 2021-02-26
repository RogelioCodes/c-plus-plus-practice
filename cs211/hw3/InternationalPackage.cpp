#include "InternationalPackage.h" 

InternationalPackage::InternationalPackage() 
{
  country = " " ; 
}
InternationalPackage::InternationalPackage(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign, string Count) : Package(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, lab, d, w, c, ins, sign)
{
  country = Count ; 
}

string InternationalPackage:: getCountry() const 
{
  return country ; 
}
double InternationalPackage::calculateCost() 
{
  double icost ; 

  //If insurance type =="Upto1000", add 5.25 to icost
  if(insuranceType == "upto1000" && country == "Canada")
    {
      icost = (weight * (costPerOunce+10.00)) + 5.25;
    }
  //If insureance type =="Upto1000", add 5.50 to ipcost
  else if(insuranceType == "upto5000" && country == "Canada")
    {
      icost = (weight * (costPerOunce+10.00)) + 5.50;
    }

  //if not insured, don't add any insurance cost
  else if(insuranceType =="none" && country == "Canada")
    {
      icost = (weight * (costPerOunce+10.00));
    }


  //If insurance type =="Upto1000", add 5.25 to icost
  if(insuranceType == "upto1000" && country == "Mexico")
    {
      icost = (weight * (costPerOunce+9.50)) + 5.25;
    }
  //If insureance type =="Upto1000", add 5.50 to ipcost
  else if(insuranceType == "upto5000" && country == "Mexico")
    {
      icost = (weight * (costPerOunce+9.50)) + 5.50;
    }

  //if not insured, don't add any insurance cost
  else if(insuranceType =="none" && country == "Mexico")
    {
      icost = (weight * (costPerOunce+9.50));
    }


  //If insurance type =="Upto1000", add 5.25 to icost
  if(insuranceType == "upto1000" && country == "France")
    {
      icost = (weight * (costPerOunce+20.50)) + 5.25;
    }
  //If insureance type =="Upto1000", add 5.50 to ipcost
  else if(insuranceType == "upto5000" && country == "France")
    {
      icost = (weight * (costPerOunce+20.50)) + 5.50;
    }

  //if not insured, don't add any insurance cost
  else if(insuranceType =="none" && country == "France")
    {
      icost = (weight * (costPerOunce+20.50));
    }

  //If insurance type =="Upto1000", add 5.25 to icost
  if(insuranceType == "upto1000" && country == "England")
    {
      icost = (weight * (costPerOunce+18.65)) + 5.25;
    }
  //If insureance type =="Upto1000", add 5.50 to ipcost
  else if(insuranceType == "upto5000" && country == "England")
    {
      icost = (weight * (costPerOunce+18.65)) + 5.50;
    }

  //if not insured, don't add any insurance cost
  else if(insuranceType =="none" && country == "England")
    {
      icost = (weight * (costPerOunce+18.65));
    }


  //If insurance type =="Upto1000", add 5.25 to icost
  if(insuranceType == "upto1000" && country == "China")
    {
      icost = (weight * (costPerOunce+25.35)) + 5.25;
    }
  //If insureance type =="Upto1000", add 5.50 to ipcost
  else if(insuranceType == "upto5000" && country == "China")
    {
      icost = (weight * (costPerOunce+25.35)) + 5.50;
    }

  //if not insured, don't add any insurance cost
  else if(insuranceType =="none" && country == "China")
    {

      icost = (weight * (costPerOunce+25.35));
    }

  //If insurance type =="Upto1000", add 5.25 to icost
  if(insuranceType == "upto1000" && country == "India")
    {
      icost = (weight * (costPerOunce+22.50)) + 5.25;
    }
  //If insureance type =="Upto1000", add 5.50 to ipcost
  else if(insuranceType == "upto5000" && country == "India")
    {
      icost = (weight * (costPerOunce+22.50)) + 5.50;
    }

  //if not insured, don't add any insurance cost
  else if(insuranceType =="none" && country == "India")
    {
      icost = (weight * (costPerOunce+22.50));
    }



  //if signature is required, add 2.90 to pcost
  if(signatureConfirmation == "sign")
    {
      icost +=2.90;
    }


  return icost;
}

void InternationalPackage:: printInternationalPackage() 
{
  cout << "Sender: " << setw(20) << right << senderName << endl ;
  cout << senderAddress << endl << senderCity << ", " << senderState << " " << senderZIPcode << endl  ;

  cout << left << "Recipient: " << setw(20) << right << recipName << endl ;
  cout << recipAddress << endl << recipCity << ", " << recipState << " " << recipZIPcode << endl ;
  cout << setw(20) << right << country << endl ; 

  cout << left << "Label: " << setw(20) << right << label << endl ;
  cout << left << "Mailed on: " << setw(20) << right << date << endl ;
  cout << left << "Weight: " << setw(20) << right << weight << endl ;
  cout << left << "Insurance: " << setw(20) << right <<  insuranceType << endl ;
  cout << left << "Signature: " << setw(20) << right << signatureConfirmation << endl ;
  cout << left << "Cost: " << setw(20) << right << calculateCost() << endl ;


}

