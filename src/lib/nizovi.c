#include "nizovi.h"

int nadji_sumu(int niz[], int n){
    int i=0;
    int suma=niz[0];
    for(i=1;i<n;i++)
    {
        suma+= niz[i];
    }
    return suma;
}
