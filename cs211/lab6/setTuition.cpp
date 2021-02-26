#include "student.h"
void setTuition(Student& s)
{
  if(s.classification == "undergraduate")
    s.tuition = s.units * 700 ;

  if(s.classification == "graduate")
    s.tuition = s.units * 1000 ;

}

