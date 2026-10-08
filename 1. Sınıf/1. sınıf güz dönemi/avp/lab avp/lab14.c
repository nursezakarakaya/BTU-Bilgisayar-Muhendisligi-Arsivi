#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char *ad;
    char *soyad;
    int not;
} Ogrenci;

void bilgileriAl(Ogrenci *ogrenci) {
    char buffer[100];

    printf("Ogrencinin adini girin: ");
    scanf("%s", buffer);
    ogrenci->ad = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
    strcpy(ogrenci->ad, buffer);

    printf("Ogrencinin soyadini girin: ");
    scanf("%s", buffer);
    ogrenci->soyad = (char *)malloc((strlen(buffer) + 1) * sizeof(char));
    strcpy(ogrenci->soyad, buffer);

    printf("Ogrencinin notunu girin: ");
    scanf("%d", &ogrenci->not);
}

void dosyayaYaz(Ogrenci *ogrenciler, int sayi) {
    FILE *dosya = fopen("ogrenciler.txt", "w");
    if (dosya == NULL) {
        printf("Dosya açýlamadý\n");
        return;
    }

    for (int i = 0; i < sayi; i++)
        fprintf(dosya, "%s %s %d\n", ogrenciler[i].ad, ogrenciler[i].soyad, ogrenciler[i].not);

    fclose(dosya);
    printf("Ogrenci bilgileri dosyaya yazildi.\n");
}

void bellekTemizle(Ogrenci *ogrenciler, int sayi) {
    for (int i = 0; i < sayi; i++) {
        free(ogrenciler[i].ad);
        free(ogrenciler[i].soyad);
    }
}

int main() {
    int ogrenciSayisi = 5;
    Ogrenci *ogrenciler = (Ogrenci *)malloc(ogrenciSayisi * sizeof(Ogrenci));

    if (ogrenciler == NULL) {
        printf("Bellek tahsis edilemedi\n");
        return 1;
    }

    for (int i = 0; i < ogrenciSayisi; i++) {
        printf("Ogrenci %d:\n", i + 1);
        bilgileriAl(&ogrenciler[i]);
    }
    dosyayaYaz(ogrenciler, ogrenciSayisi);
    bellekTemizle(ogrenciler, ogrenciSayisi);
    free(ogrenciler);

    return 0;
}
