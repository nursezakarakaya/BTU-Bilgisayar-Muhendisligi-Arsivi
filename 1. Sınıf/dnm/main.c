#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /*char metin[100];
    gets (metin);

    if (strcmp(metin, "did you get your photos printed") == 0) {
        printf("\nbogos binted?\n");
    }*/
/*
    char a[50], b[50];
    gets(a);
    gets(b);

    if(strcmp(a,b)>0)
        printf("%s %s", b, a);
    else if (strcmp(a,b)<0)
        printf("%s %s", a, b);
    else
        puts("Ayni kelimeler.");
        */
    /*int a;
    printf("%d", a);*/

    /*char kelime[50];
    int i;

    gets(kelime);
    for(i=strlen(kelime);i>=0;i--)
        printf("%c", kelime[i-1]);

    char kelime[50], yenistring[500];
    int tekrar;

    printf("Kelimeyi gir: ");
    gets(kelime);
    strcpy(yenistring, kelime);

    printf("Kac kere tekrarlansin?: ");
    scanf("%d", &tekrar);

    if (tekrar <= 0) {
        printf("Tekrar sayisi sifir veya negatif olamaz.!\n");
        return 0;
    }

    while(tekrar>1){
        strcat(yenistring, kelime);
        --tekrar;
    }

    printf("%s", yenistring);

    return 0;*/
     int n;
     scanf("%d", &n);
     printf("n = %d \n", n);
     printf("n = %d \n", &n);
     printf("n = %p\n", n);
     printf("n = %p", &n);
}
