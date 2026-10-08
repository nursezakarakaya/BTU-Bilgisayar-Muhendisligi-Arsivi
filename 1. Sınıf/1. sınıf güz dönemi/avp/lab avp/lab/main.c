#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dizi[10];
    int *diziPtr = dizi;

    srand(time(NULL));
    for (int i = 0; i < 10; i++)
        *(diziPtr + i) = rand() % 100;

    int diziCift[10], diziTek[10];
    int *ciftPtr = diziCift;
    int *tekPtr = diziTek;

    int ciftsayac = 0, teksayac = 0;
    for (int i = 0; i < 10; i++) {
        if (*(diziPtr + i) % 2 == 0) {
            *(ciftPtr + ciftsayac) = *(diziPtr + i);
            ciftsayac++;
        }
        else {
            *(tekPtr + teksayac) = *(diziPtr + i);
            teksayac++;
        }
    }

    printf("Dizi: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(diziPtr + i));
    }

    printf("\n\n");
    printf("Cift Sayilar: \n");

    for (int i = 0; i < ciftsayac; i++) {
        printf("%d ", *(ciftPtr + i));
    }
    printf("\n\n");

    printf("Tek Sayilar: \n");
    for (int i = 0; i < teksayac; i++) {
        printf("%d ", *(tekPtr + i));
    }

    return 0;
}
