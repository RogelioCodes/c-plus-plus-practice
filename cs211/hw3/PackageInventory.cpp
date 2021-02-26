#include "PackageInventory.h"

/**********************************************************************
ROGELIO CORDOVA
CS 211
10/15/2017
************************************************/

//processes transaction file 
void PackageInventory:: ProcessTransactionFile(string filename) 
{
  ifstream fin ; 

  string sn ;
  string sa ; 
  string sc ; 
  string ss ; 
  long sz ; 
  string rn ; 
  string ra ; 
  string rc ; 
  string rs ; 
  long rz ; 
  string lab ; 
  string typ ;
  double len;
  double wid; 
  double h ; 
  string d ; 
  double w ; 
  double c ; 
  string ins ; 
  string sign ;
  string track ; 
  double oFee ; 
  string command ; 
  string Count ;
  //  string dest ; 
  fin.open("transactionFile.txt"); 

  if(!fin)
    {
      cout << "File doesn't exist." << endl ; 
      exit(1) ; 
    }

  fin >> command ; 
  while(fin)
    {
      if(command == "CreateNewPackage")
	{
	  fin >> sn >> sa >> sc >> ss >> sz >> rn >> ra >> rc >> rs >> rz >> lab >> d >> w >> c >> ins >> sign ; 
	  CreateNewPackage(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, lab, d, w, c, ins, sign);
	}
      if(command == "PrintAllPackages")
	{
	  cout << endl ;
	  PrintAllPackages();
	}
      
	if(command == "CreateNewFlatRate")
	{
	  fin >> sn >> sa >> sc >> ss >> sz >> rn >> ra >> rc >> rs >> rz >> lab >> d >> w>> c >> ins >> sign >> typ >> len >> wid >> h ;
	  cout << endl ; 
	  CreateNewFlatRate(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, lab,d,w, c, ins, sign, typ, len, wid, h);
	}
      if(command == "PrintAllFlatRatePackages")
	{
	  cout << endl ; 
	 PrintFlatRatePackages() ; 
	}
      
      if(command == "CreateNewOvernight")
	{
	  fin >> sn >> sa >> sc >> ss >> sz >> rn >> ra >> rc >> rs >> rz >> lab >> d >> w >> c >> ins >> sign >> track >> oFee ; 
	  cout << endl ; 
	  CreateNewOvernight(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, lab, d, w, c, ins, sign, track, oFee);	  
	}
      if(command == "PrintAllOvernightPackages")
	{
	  cout << endl ; 
	  PrintAllOvernightPackages() ; 

	}
      
      if(command == "CreateNewInternational")
      {
	fin >> sn >> sa >> sc >> ss >> sz >> rn >> ra >> rc >> rs >> rz >> lab >> d >> w >> c >> ins >> sign >> Count ; 
	cout << endl ; 
CreateNewInternational(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, lab, d, w, c, ins, sign, Count);
	 
}
      if(command == "PrintAllInternationalPackages")
	{
	  cout << endl ; 
	  printInternationalPackage() ; 
	}
      /*
      if(command == "PrintShippedonMonthYear")
	{
	  cout << endl ; 
	  PrintShippedonMonthYear() ; 
	}
      if(command == "PrintSentToZipCode")
	{
	  cout << endl ;
	  PrintSentToZipCode() ; 
	}
      if(command == "CalculateTotalCost")
	{
	  cout << endl ; 
	  CalculateTotalCost() ; 
	  }*/
      fin >> command ;
    }
  fin.close();
}


/*
Creates a Package object, pushes it into the packages vector, and
displays a message that the package was successfully added. If any package attribute value is
not valid, it should not add an object to the vector and should print appropriate error
message. 
*/
void PackageInventory::  CreateNewPackage(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign)
{
  bool found  = false ;
  if(packages.size() == 0)
    {
      Package temp(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, lab, d, w, c, ins, sign);
     
      cout <<  "CreateNewPackage " << sn << " " << sa << " " << sc << " " << ss << " " << sz << " " << rn << " " << ra << " " << rc << " " << rs << " " << rz << " " << lab << " " << d << w << c << ins << sign << endl ; 
      cout << "Package successfully created. " << endl ; 
      packages.push_back(temp);
    }
  if(packages.size() > 0) 
    {
      for(int i = 0 ; i < packages.size() && found == false ; i++ )
	{
	  if(packages[i].getWeight() < 0 || packages[i].getCostPerOunce() < 0 || packages[i].getLabel() == lab)
	    {
	      found = true ; 
	    }
	}
    }
  if(found == true)
    {
      cout <<  "CreateNewPackage " << sn << " " << sa << " " << sc << " " << ss << " " << sz << " " << rn << " " << ra << " " << rc << " " << rs << " " << rz << " " << lab << " " << d << " "  << w << " "  << c << " "  << ins << " "  << sign << endl ;
      cout << "The package either has an invalid label, an invalid weight or an invalid price." << endl ; 
    }
  else if(found == false)
    {
      Package temp(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, lab, d, w, c, ins, sign);

      cout <<  "CreateNewPackage " << sn << " " << sa << " " << sc << " " << ss << " " << sz << " " << rn << " " << ra << " " << rc << " " << rs << " " << rz << " " << lab << " " << d << " " << w << " " << c << " "  << ins  << " " << sign << endl ;
      cout << "Package successfully created. " << endl ;
      packages.push_back(temp);

    }
}

/*
Creates a FlatRatePackage object, pushes it into the FlatRatePackages
vector, and displays a message that the package was successfully added. If any package
attribute value is not valid, you should not add an object to the vector and should print
appropriate error message.
*/

void PackageInventory:: CreateNewFlatRate(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign, string typ, double len, double wid, double h)
{
  bool found  = false ;
  if(flatRatePackages.size() == 0)
    {
     
      FlatRatePackage temp(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, lab, d, w, c, ins, sign,typ, len, wid, h);
      cout <<  "CreateNewFlatRate " << sn << " " << sa << " " << sc << " " << ss << " " << sz << " " << rn << " " << ra << " " << rc << " " << rs << " " << rz << " " << lab << " " << d << " " <<  w <<  " " << c << " " << ins << " " << sign <<  endl ;
      cout << "Package successfully created. " << endl ;
      flatRatePackages.push_back(temp);
     
    }
  if(flatRatePackages.size() > 0)
    {
      for(int i = 0 ; i < flatRatePackages.size() && found == false ; i++ )
        {
          if(flatRatePackages[i].getLabel() == lab || w <= 0 || wid <= 0 || wid >12 || flatRatePackages[i].getCostPerOunce() <= 0 || len  <= 0  || len > 12 || h  > 5 || h <= 0 /* ins !="UpTo1000" && "Upto5000" && "none"*/)
            {
              found = true ;
            }
        }
    }
  if(found == true)
    {
      cout <<  "CreateNewFlatRate " << sn << " " << sa << " " << sc << " " << ss << " " << sz << " " << rn << " " << ra << " " << rc << " " << rs << " " << rz << " " << lab << " " << d << " " << w <<  " " << c << " " << ins << " " << sign <<  endl ;
 cout << "The package either has an invalid label, an invalid weight or an invalid price." << endl ;
    }
  else if(found == false)
    {     
      FlatRatePackage temp(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, lab, d, w, c, ins, sign,typ, len, wid, h);
      cout <<  "CreateNewFlatRate " << sn << " " << sa << " " << sc << " " << ss << " " << sz << " " << rn << " " << ra << " " << rc << " " << rs << " " << rz << " " << lab << " " << d << " " << 
	w <<  " " << c << " " << ins << " " << sign <<  endl ;
      cout << "Package successfully created. " << endl ;
      flatRatePackages.push_back(temp);
     



    }

}

/*
Creates an OvernightPackage object, pushes it into the
OvernightPackages vector, and displays a message that the package was successfully added. If
any package attribute value is not valid, it should not add an object to the vector and should
print appropriate error message.
*/

void PackageInventory::  CreateNewOvernight(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign, string track, double oFee)
{
  OvernightPackage temp(sn, sa, sc, ss, sz, rn, ra, rc, rs, rz, lab, d, w, c, ins, sign, track, oFee); 
  for(int i= 0 ; i < overnightPackages.size(); i++ )
    {
      if(overnightPackages[i].getLabel() == lab)
	{
	  cout << "Label already exists." << endl ; 
	  return ; 
	}

      if(ins != "upto1000" && "upto5000" && "none" || "track" || oFee <= 0)
	{
	  cout << "Error, package is invalid." << endl ; 
	}
    }

  cout << "Overnight package successfully created." << endl ; 
  overnightPackages.push_back(temp); 

    
 
}


/*
Creates an InternationalPackage object, pushes it into the
internationalPackages vector, and displays a message that the package was successfully added.
If any package attribute value is not valid, it should not add an object to the vector and
should print appropriate error message.
*/
void PackageInventory:: CreateNewInternational(string sn, string sa, string sc, string ss, long sz, string rn, string ra, string rc, string rs,long rz, string lab, string d, double w, double c, string ins, string sign, string Count)
{
  
  InternationalPackage temp(sn, sa, sc, ss, sz,
			  rn, ra, rc, rs, rz,
			  lab, d, w, c,
			  ins, sign,
			  Count);

  //checks if the countries and insurance are valid
  for(int i =0; i< internationalPackages.size(); i++)
    {
      if(lab==internationalPackages[i].getLabel())
        {
          cout << "Error, value already entered. " << endl;
          return;
        }

      if(        (ins !="upto1000" && "upto5000" && "none") ||      \
                 (Count!= "Canada" || "Mexico" || "France" || "England" || \
                  "China" || "India"))
        {
          cout << "Error, invalid package values. " << endl;
          return;
        }
    }

  cout << "International Package successfully added. " << endl;

  //pushback into the end of vector
  internationalPackages.push_back(temp);
}



//These are all print functions
void PackageInventory:: PrintAllPackages() 
{
  for(int i = 0 ; i <  packages.size() ; i++)
    {
      packages[i].printPackage() ; 
    } 
}

void PackageInventory:: PrintFlatRatePackages()
{
  for(int i = 0 ; i < flatRatePackages.size() ; i++ )
    {
      flatRatePackages[i].printFlatRatePackage();
    }
}
void PackageInventory:: PrintAllOvernightPackages() 
{

  for(int i = 0 ; i < overnightPackages.size() ;  i++)
    {
      overnightPackages[i].printOvernightPackage();
    }

}

void PackageInventory:: printInternationalPackage() 
{

  for(int i = 0 ; i < internationalPackages.size() ;  i++)
    {
      internationalPackages[i].printInternationalPackage();

    }
}
