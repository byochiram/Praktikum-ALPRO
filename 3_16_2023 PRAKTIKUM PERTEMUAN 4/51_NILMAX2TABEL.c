#include<stdio.h>
#include<stdlib.h>

int main ()
{
    //KAMUS
    int n, array[100], max2, max1, i;

    //ALGORITMA
    scanf("%d", &n);

    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d", &array[i]);
    }

    max1 = max2 = 0;

    for(int i = 0 ; i<n ; i++)
    {
        if (array[i] > max1)
        {
            max2 = max1;
            max1 = array[i];
        }
        else if (array[i] > max2 && array[i]<max1)
            max2 = array[i];
    }
    printf("Nilai maksimum kedua adalah : %d\n", max2);

    return 0;
}
