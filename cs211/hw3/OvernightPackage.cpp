#include "OvernightPackage.h"  

OvernightPackage::OvernightPackage() 
{
  overnightFee = 0 ; 
  tracking = " " ; 
}


OvernightPackage::OvernightPackage(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign,string track, double oFee): Package(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz,lab, d, w, c, ins, sign)

{
  overnightFee = oFee ;
  tracking = track ;
}


double  OvernightPackage:: getOvernightFee() const 
{
  return overnightFee ; 
}
string OvernightPackage:: getTracking() const 
{
  return tracking ; 
}

double OvernightPackage:: calculateCost() 
{
  double oCost ;
  if(insuranceType == "Upto1000")
    {
      oCost = (weight * (costPerOunce + overnightFee)) +  5.25 ;
    }
  else if(insuranceType == "Upto5000")
    {
      oCost = (weight * (overnightFee + costPerOunce)) + 5.50 ;
    }
  else if(insuranceType == "none" )
    {
      oCost = (weight * ( overnightFee + costPerOunce)) ;
    }

  if(signatureConfirmation == "sign")
    {

      oCost += 2.90 ;
    }

  if(tracking == "track")
    {
      oCost += 5.90 ; 
    }

  return oCost ;

}

void OvernightPackage:: printOvernightPackage() 
{
  cout << "Sender: " << setw(20) << right << senderName << endl ;
  cout << senderAddress << endl << senderCity << ", " << senderState << " " << senderZIPcode << endl  ;

  cout << left << "Recipient: " << setw(20) << right << recipName << endl ;
  cout << recipAddress << endl << recipCity << ", " << recipState << " " << recipZIPcode << endl ;

  cout << left << "Label: " << setw(20) << right << label << endl ;
  cout << left << "Mailed on: " << setw(20) << right << date << endl ;
  cout << left << "Weight: " << setw(20) << right << weight << endl ;
  cout << left << "Tracking: " << setw(20) << right << tracking << endl ; 
  cout << left << "Insurance: " << setw(20) << right <<  insuranceType << endl ;
  cout << left << "Signature: " << setw(20) << right << signatureConfirmation << endl ;
  cout << left << "Cost: " << setw(20) << right << calculateCost() << endl ;

}
