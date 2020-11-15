#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{int liczba;
int zaglowce;
  if (towar=0)
      {return 0;}
  else   {

  int i=0;
  for (i=0; i<towar)
  {
  Stocznia stocznia{};
  Statek* s1 = stocznia();
if (Zaglowiec* zagl = dynamic_cast< Zaglowiec >(s1)) {zaglowce++}
else {}
  
  liczba=statek->transportuj();
  i+=liczba;
  delete statek;
}}

return liczba;
} 