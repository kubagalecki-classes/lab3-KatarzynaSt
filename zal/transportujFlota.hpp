#pragma once
#include <iostream>
#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{int liczba;
int zagl;
  if (towar=0)
      return 0;
  else   {

  int i=0;
  for (i; i<towar)
  
  Stocznia stocznia{};
  Statek* s1 = stocznia();

if (Zaglowiec* zaglowiec = dynamic_cast< Zaglowiec* >(s1)) {zagl++;}
else {}
  
  liczba=statek->transportuj();
  i+=liczba;
  delete s1;
}

return zagl;
} 