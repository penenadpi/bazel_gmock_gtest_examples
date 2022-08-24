#include "nizovi.h"

int nadji_max(int niz[], int n){
    int i=0;
    int max=niz[0];
    for(i=0;i<n;i++)
    {
        if(niz[i]>max)
            max=niz[i];
    }
    return max;
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