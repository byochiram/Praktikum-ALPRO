#include<stdio.h>
#include<stdlib.h>

int main()

{
    //Kamus Lokal
    float F, v, r, m;

    //Algoritma
    scanf ("%f", &m);
    scanf ("%f", &v);
    scanf ("%f", &r);

    F = m*(v*v/r);

    printf ("Benda mengalami gaya sentripetal sebesar %f Newton", F);

    return 0;
}
