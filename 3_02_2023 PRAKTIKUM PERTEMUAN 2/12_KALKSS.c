#include<stdio.h>
#include<stdlib.h>

int main()
{
    //KAMUS
    int iA, iB, HasilBulat;
    char o;
    float HasilFloat;

    //ALGORITMA
    scanf ("%d", &iA);
    scanf ("%d", &iB);
    scanf (" %c", &o);

    switch (o)
    {
        case 'a':
            HasilBulat = iA + iB;
            printf ("Hasil operasi a: %d", HasilBulat);
            break;
        case 'b':
            HasilBulat = iA - iB;
            printf ("Hasil operasi b: %d", HasilBulat);
            break;
        case 'c':
            HasilBulat = iA * iB;
            printf ("Hasil operasi c: %d", HasilBulat);
            break;
        case 'd':
            HasilFloat = (float) iA / iB;
            printf ("Hasil operasi d: %.2f", HasilFloat);
            break;
        case 'e':
            HasilBulat = iA / iB;
            printf ("Hasil operasi e: %d", HasilBulat);
            break;
        case 'f':
            HasilBulat = iA % iB;
            printf ("Hasil operasi f: %d", HasilBulat);
            break;
        default:
            printf ("Bukan pilihan menu yang benar");
            break;
    }
    return 0;
}
