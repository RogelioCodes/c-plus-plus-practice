#include "FlatRatePackage.h"

FlatRatePackage::FlatRatePackage()
{
  type = " " ;
  width = 0 ;
  length = 0 ;
  height = 0 ;
}


FlatRatePackage::FlatRatePackage
(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign,string typ, double wid, double len, double h): Package(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, lab, d, w, c, ins, sign)
{ 
  type = typ ;
  width = wid ;
  length = len ;
  height = h ;

}

	  /*FlatRatePackage::FlatRatePackage(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign, string typ, double len, double wid, double h)
{

  senderName = sn ; 
  senderAddress = sa ; 
  senderCity = sc ; 
  senderState = ss; 
  senderZIPcode = sz ; 

  recipName = rn ; 
  recipAddress = ra ;
  recipCity = rc ; 
  recipState = rs ; 
  recipZIPcode = rz ;

  
  }*/


double FlatRatePackage::calculateCost() 
{
  double fCost ; 
  
  if(type == "box" && width < 12 && length < 12 && height < 5)
    fCost = 20.10 ; 
  else if(type == "box" && width < 11 && length < 8 && height < 5)
    fCost = 17.75 ; 
  else if(type == "box" && width < 8 && length < 5 && height < 2)
    fCost = 11.30 ; 

  else if(type == "PaddedEnvelope")
   fCost = 9.45 ; 
  else if(type == "LegalEnvelope") 
    fCost = 7.65 ; 
  else  if(type == "Letter") 
    fCost = 3.20 ; 
  
  if(insuranceType == "Upto1000")
    {
      fCost = fCost +  5.25 ;
    }
  else if(insuranceType == "Upto5000")
    {
      fCost = fCost + 5.50 ;
    }

  if(signatureConfirmation == "sign")
    {

      fCost = fCost +  2.90 ;
    }
  

  return fCost ;

}
string FlatRatePackage::getType() const 
{
  return type ; 
}

double FlatRatePackage::getWidth() const 
{
  return width ; 
}

double FlatRatePackage::getLength() const 
{
  return length ; 
}

double FlatRatePackage::getHeight() const 
{
  return height ; 
}

void FlatRatePackage::setType(string t) 
{
  type = t ; 
}

void FlatRatePackage::setWidth(double w) 
{
  width = w ; 
}

void FlatRatePackage::setLength(double l)
{
  length = l ; 
}
void FlatRatePackage::setHeight(double h) 
{
  height = h ; 
}
void FlatRatePackage::printFlatRatePackage() 
{
  cout << "Sender: " << setw(13) << right << senderName << endl ;
  cout << "\t     " << senderAddress << endl << setw(19) << right <<  senderCity << ", " << senderState << " " << senderZIPcode << endl  ;
  cout << "Recipient: " << setw(11) << right << recipName << endl ;
  cout << setw(19) << right <<  recipAddress << endl << setw(20) << right << recipCity << ", " << recipState << " " << recipZIPcode << endl ;   cout << left << "Label: " << setw(12) << right << label << endl ;
  cout << left << "Mailed on: " << setw(12) << right << date << endl ;
  cout << left << "Weight: " << setw(8) << right << weight << endl ;
  cout << left << "Type: " << setw(8) << right << type << endl ; 
cout << left << "Width: " << setw(20) << right << width << endl ;
  cout << left << "Length: " << setw(20) << right << length << endl ;
  cout << left << "Height: " << setw(20) << right << height << endl ;
  
  cout << left << "Insurance: " << setw(6) << right <<  insuranceType << endl ;
  cout << left << "Signature: " << setw(6) << right << signatureConfirmation << endl ;
  cout << left << "Cost: " << setw(11) << right << calculateCost() << endl ;

  cout << endl ;
}

