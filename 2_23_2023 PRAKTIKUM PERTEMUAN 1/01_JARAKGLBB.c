#include<stdio.h>
#include<stdlib.h>

int main()
{
    //KAMUS
    float v0, t, a;
    float S;

    //ALGORITMA
    scanf("%f", &v0);
    scanf("%f", &t);
    scanf("%f", &a);

    S = v0 * t + 0.5 *(a * t * t);

    printf ("Jarak yang ditempuh adalah %f meter", S);
    return 0;
}
