#include "nizovi.h"

int nadji_sumu(int niz[], int n)
{
    int brojac, suma;
    suma = 0;
    for(brojac = 0; brojac < n; brojac++)
    {
        suma = suma + niz[brojac];
    }
    return suma;
}

int nadji_min(int niz[], int n){
    int i=0;
    int min=niz[0];
    for(i=0;i<n;i++)
    {
        if(niz[i]<min)
            min=niz[i];
    }
    return min;
}