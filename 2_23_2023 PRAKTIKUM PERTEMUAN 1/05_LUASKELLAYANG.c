#include<stdio.h>
#include<stdlib.h>

int main()

{
    //Kamus Lokal
    float s1, s2, d1, d2, L, K;

    //Algoritma
    scanf ("%f", &s1);
    scanf ("%f", &s2);
    scanf ("%f", &d1);
    scanf ("%f", &d2);

    L = 0.5 * d1 * d2;
    K = 2 * (s1 + s2);

    printf ("Luas layang layang: %f \n", L);
    printf ("Keliling layang layang: %f", K);
    return 0;
}
