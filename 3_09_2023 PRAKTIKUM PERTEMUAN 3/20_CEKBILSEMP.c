#include<stdio.h>
#include<stdlib.h>

int main()
{
    //KAMUS
    int N, i, j = 0;

    //ALGORITMA
    scanf ("%d", &N);

    if (N <= 0)
    {
        printf("N harus bernilai positif");
        return 0;
    }

    for (i=1 ; i< N ; i++)
    {
        if (N % i == 0)
        {
            j += i;
        }
    }

    if (j == N)
    {
        printf("N = %d adalah bilangan sempurna\n", N);
    }
    else
    {
        printf("N = %d adalah bukan bilangan sempurna\n", N);
    }
    return 0;
}

