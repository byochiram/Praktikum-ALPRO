#include<stdio.h>
#include<stdlib.h>

int main()
{
    //KAMUS
    int H;

    //ALGORTIMA
    scanf ("%d", &H);
    if (H >= 1 && H<= 7)
    {
        if (H == 1)
        {
            printf ("Minggu");
        }
        else if (H == 2)
        {
            printf ("Senin");
        }
        else if (H == 3)
        {
            printf ("Selasa");
        }
        else if (H == 4)
        {
            printf ("Rabu");
        }
        else if (H == 5)
        {
            printf ("Kamis");
        }
        else if (H == 6)
        {
            printf ("Jumat");
        }
        else
        {
            printf ("Sabtu");
        }

    }
    else
    {
        printf ("Masukan nomor hari tidak tepat");
    }
    return 0;
}
