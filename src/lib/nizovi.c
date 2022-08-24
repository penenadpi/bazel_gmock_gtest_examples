#include "nizovi.h"

int nadji_sumu(int niz[], int n){
    int i=0;
    int suma=0;
    for(i=0;i<n;i++)
    {
        suma = suma + niz[i];
    }
    return suma;
}

