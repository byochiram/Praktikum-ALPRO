#include<stdio.h>
#include<stdlib.h>

int main()
{
    //KAMUS
    int B;

    //ALGORTIMA
    scanf ("%d", &B);
    if (B >= 1 && B <= 12)
    {
        if (B == 1)
        {
            printf ("Januari");
        }
        else if (B == 2)
        {
            printf ("Februari");
        }
        else if (B == 3)
        {
            printf ("Maret");
        }
        else if (B == 4)
        {
            printf ("April");
        }
        else if (B == 5)
        {
            printf ("Mei");
        }
        else if (B == 6)
        {
            printf ("Juni");
        }
        else if (B == 7)
        {
            printf ("Juli");
        }
        else if (B == 8)
        {
            printf ("Agustus");
        }
        else if (B == 9)
        {
            printf ("September");
        }
        else if (B == 10)
        {
            printf ("Oktober");
        }
        else if (B == 11)
        {
            printf ("November");
        }
        else
        {
            printf ("Desember");
        }

    }
    else
    {
        printf ("Masukan nomor bulan tidak tepat");
    }
    return 0;
}
