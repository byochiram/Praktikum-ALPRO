#include<stdio.h>
#include<stdlib.h>

int main()
{
    //KAMUS
    int N, i, is_prime = 0;

    //ALGORITMA
    scanf("%d", &N);

    for (i = 2 ; i <= N/2 ; i++)
    {
        if (N % i == 0)
        {
           is_prime = 1;
            break;
        }
    }

    if (N <= 0)
    {
        printf("N harus bernilai positif");
    }
    else if (N == 1)
    {
        printf("N = 1 adalah bukan bilangan prima");
    }
    else
    {
        if (is_prime == 1)
        {
            printf("N = %d adalah bukan bilangan prima", N);
        }
        else
        {
            printf("N = %d adalah bilangan prima", N);
        }
    }
    return 0;
}
