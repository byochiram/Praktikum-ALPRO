#include <stdio.h>

int main() {
    int N, i, j, isPrime;

    scanf("%d", &N);

    if (N <= 0) {
        printf("N harus bernilai positif");
        return 1;
    }

    printf("Bilangan primanya adalah : ");

    for (i = 2; i <= N; i++) {
        isPrime = 1;

        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
