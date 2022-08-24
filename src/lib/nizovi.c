#include "nizovi.h"

int suma(int niz[], int n){
    int i=0;
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=niz[i];
    }
    return sum;
}