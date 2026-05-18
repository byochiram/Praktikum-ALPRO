#include<stdio.h>
#include<stdlib.h>

int main()
{
    //KAMUS
    int A, B, C;

    //ALGORITMA
    scanf ("%d", &A);
    scanf ("%d", &B);
    scanf ("%d", &C);

    if ((A + B > C)  && (B + C > A) && (A + C > B))
    {
        if ((A == B) && (B == C) && (A == C))
        {
            printf ("Segitiga Sama Sisi");
        }
        else if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A))
        {
            printf ("Segitiga Sama Kaki");
        }
        else
        {
            printf ("Segitiga Sembarang");
        }
    }
    else if ((A <= 0) || (B <= 0) || (C <= 0))
    {
        printf ("Terdapat nilai yang bukan sisi segitiga");
    }
    else
    {
        printf ("Tidak dapat membentuk segitiga");
    }
    return 0;
}
