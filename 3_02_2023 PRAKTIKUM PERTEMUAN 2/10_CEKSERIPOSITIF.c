#include<stdio.h>
#include<stdlib.h>

int main()
{
    //KAMUS
    int A, B, C, J;

    //ALGORITMA
    scanf ("%d", &A);
    scanf ("%d", &B);
    scanf ("%d", &C);

    J = A + B + C;

    if (A >= 0 && B>= 0 && C>=0)
    {
        printf ("Jumlah dari ketiga bilangan adalah %d", J);
    }
    else
    {
        printf ("Masukan tahanan tidak boleh negatif");
    }

    return 0;
}
