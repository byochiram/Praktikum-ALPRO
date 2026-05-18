#include <stdio.h>
#include <stdlib.h>

int main()
{
    //KAMUS
    int n, i, *count, array[100];

    //ALGORITMA
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    count = (int *)calloc(sizeof(int), (n + 1));

    printf("Angka yang muncul lebih dari sekali : ");
    for (i = 0; i < n; i++)
    {
        if (count[array[i]] == 1)
            printf("%d ", array[i]);
        else
            count[array[i]]++;
    }

    return 0;
}
