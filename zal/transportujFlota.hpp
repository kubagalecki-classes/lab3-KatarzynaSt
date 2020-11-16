#pragma once
#include <iostream>
#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{unsigned int PrzewiezionyTowar=0;
int zagl=0;
  if(towar==0)
     {return 0;}
  else {
      int i=0;
      for (i<towar)
        {
         Stocznia stocznia{};
         Statek* s1 = stocznia();

            if (Zaglowiec* wziety= dynamic_cast< Zaglowiec* >(s1))
                   {zagl++;}
            else
             {
                PrzewiezionyTowar=s1->transportuj();
                i=i+PrzewiezionyTowar;
                delete s1;
             }
        }
       }
return zagl;
} 