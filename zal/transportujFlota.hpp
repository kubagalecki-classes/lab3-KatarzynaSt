#pragma once
#include <iostream>
#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{

    std::cout << towar << std::endl;
    int PrzewiezionyTowar = 0;
    int zagl = 0;
    if (towar == 0)
    {
        return 0;
    }
    else {
        int i = 0;
        while (i < towar)
        {
            Stocznia stocznia{};
            Statek* s1 = stocznia();
            PrzewiezionyTowar = s1->transportuj();
            i = i + PrzewiezionyTowar;

            if (s1 == dynamic_cast<Zaglowiec*>(s1))
            {
                zagl++;
            }
            else
            {
            }
            delete s1;
        }
    }
    std::cout << zagl << std::endl;
    return zagl;
}
