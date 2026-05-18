#include<stdio.h>
#include<stdlib.h>

int main()

{
    //Kamus Lokal
    float Vb, Vk, r;
    const float phi = 3.1415;

    //Algoritma
    scanf ("%f", &r);

    Vb = (float) 4/3 * phi * r * r * r;
    Vk = 0.5*Vb;

    printf ("Dengan r sepanjang %f meter", r);
    printf (", kita bisa membuat bola dengan volume %f meter kubik", Vb);
    printf (" dan kerucut dengan volume %f meter kubik", Vk);

    return 0;
}
