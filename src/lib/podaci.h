#pragma once
#include "obrada.h"

class Podaci
{

        Obrada *obrada;
        int niz[10];

public:
        Podaci(int niz1[], Obrada *obrada)
        {
                this->obrada = obrada;
                for (int i = 0; i < 10; i++)
                        this->niz[i] = niz1[i];
        }

        bool primeni_obradu()
        {
                int i = 0;
                for (int i = 0; i < 10; i++)
                {
                        if (niz[i] > 0)
                                obrada->Procesiraj(niz[i]);
                }
                return true;
        }
};
