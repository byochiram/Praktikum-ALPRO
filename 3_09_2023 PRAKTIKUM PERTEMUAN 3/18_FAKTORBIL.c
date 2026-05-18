#include<stdio.h>
#include<stdlib.h>

int main()
{
    //KAMUS
    int N;

    //ALGORITMA

    scanf("%d", &N);

    //Periksa apakah N positif
    if (N <= 0) {
        printf("N harus bernilai positif");
    }

    printf("N = %d, faktor bilangannya adalah : ", N);

    //Cari faktor bilangan
    for (int i=1 ; i<=N ; i++)
    {
        if (N % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
