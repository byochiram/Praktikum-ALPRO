#include<stdio.h>
#include<stdlib.h>

int main()
{
    //KAMUS
    int x;

    //ALGORTIMA
    if (scanf ("%d", &x))
    {
        if (x>0)
        {
            printf ("Bulat positif");
        }
        else if (x<0)
        {
            printf ("Bulat negatif");
        }
        else
        {
            printf ("Nol");
        }
    }
    else
    {
        printf ("Bukan termasuk sebuah bilangan");
    }
    return 0;

}
