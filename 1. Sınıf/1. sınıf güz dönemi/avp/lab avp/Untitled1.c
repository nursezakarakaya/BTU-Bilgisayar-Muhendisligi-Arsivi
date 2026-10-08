#include <stdio.h>

void faktoriyelHesapla(int *sayi, int *sonuc) {
    *sonuc = 1; // sifir girilirse oto 1 yapacak
    if (*sayi < 0) {
        printf("Negatif sayýlarýn faktöriyeli hesaplanamaz!\n");
        return;
    }
    for (int i = 1; i <= *sayi; i++)
        *sonuc *= i;
}

int main() {
    int sayi, sonuc;
    int *sayiPtr = &sayi;
    int *sonucPtr = &sonuc;

    printf("Pozitif bir tam sayi girin: ");
    scanf("%d", sayiPtr);
    faktoriyelHesapla(sayiPtr, sonucPtr);
    if (sayi >= 0)
        printf("Faktoriyeli: %d\n", *sonucPtr);

    return 0;
}
