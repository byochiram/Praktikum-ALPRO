#include<stdio.h>
#include<stdlib.h>

int main()
{
    //KAMUS
    int N, i, sum = 0;

    //ALGORITMA
    scanf("%d", &N);

    printf("Jumlah deret bilangan dari 1 sampai %d : ", N);
    for (i=1 ; i<=N ; i++)
    {
        sum += i;
    }
    printf("%d", sum);

    return 0;
}
