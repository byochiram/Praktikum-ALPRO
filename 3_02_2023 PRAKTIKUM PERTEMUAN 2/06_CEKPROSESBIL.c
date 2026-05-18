#include<stdio.h>
#include<stdlib.h>

int main()
{
    //KAMUS
    int N;

    //ALGORITMA
    scanf ("%d", &N);

    if (N % 2 == 0)
    {
        if ((N+3) % 5 == 0)
        {
            printf ("%d", (N+3) + 5);
        }
        else
        {
            printf ("%d", (N+3) + 2);
        }
    }
    else
    {
        if ((N+2) % 3 == 0)
        {
            printf ("%d", (N+2) + 4);
        }
        else
        {
            printf ("%d", (N+2) + 1);
        }
    }
    return 0;

}
