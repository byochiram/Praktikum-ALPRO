#include<stdio.h>
#include<stdlib.h>

int main()

{
    //Kamus Lokal
    float V0, t, y;

    //Algoritma
    scanf ("%f", &V0);
    scanf ("%f", &t);

    y = V0 * t - (0.5)*(9.8*t*t);
    printf ("Benda berada di ketinggian %f meter dari tanah", y);
    return 0;
}
