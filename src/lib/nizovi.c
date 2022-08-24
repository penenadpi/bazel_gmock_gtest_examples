#include "nizovi.h"

int nadji_sum(int niz[], int n){
    int i=0;
    int sum=niz[0];
    for(i=1;i<n;i++)
    {
         sum += niz[i] ;
    }
    return sum;
}

