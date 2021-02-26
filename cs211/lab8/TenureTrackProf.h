#ifndef TenureTrackProf_H 
#define TenureTrackProf_H 
#include "CompSciProfessor.h" 
#include "AdjunctProf.h"

class TenureTrackProf: public CompSciProfessor
{
 private:
  char rank ; 
  int yearOfExp ; 
 public: 
  TenureTrackProf();
  char getRank()const  ; 
  int getYearOfExp()const  ; 
  float findSalaryT() const ; 


  void setRank(char pRank) ; 
  void setYearOfExp(int pYearOfExp)  ; 
  void printTenure()const ;



}
;
#endif
