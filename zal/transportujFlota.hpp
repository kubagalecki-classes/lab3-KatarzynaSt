#pragma once
#include <iostream>
#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
  int PrzewiezionyTowar=0;
int zagl=0;
  if(towar=0)
     {return 0;}
  else {
      int i=0;
      for (i<towar)
        {
         Stocznia stocznia{};
         Statek* s1 = stocznia();
         PrzewiezionyTowar=s1->transportuj();
         i=i+PrzewiezionyTowar;
        
            if (s1= dynamic_cast< Zaglowiec* >(s1))
                   {zagl++;}
            else
             {  }
         delete s1;
       }
       }
return zagl;
} 