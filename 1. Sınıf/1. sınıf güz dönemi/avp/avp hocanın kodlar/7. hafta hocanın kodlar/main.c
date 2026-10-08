#include <stdio.h>

int main(){
    srand(time(NULL));
/*
    int matrisim[5][3];
    int bayt_miktari=sizeof(matrisim);
    int eleman_sayisi=bayt_miktari/sizeof(matrisim[0][0]);
    int sutun_sayisi=sizeof(matrisim[0])/sizeof(matrisim[0][0]);
    int satir_sayisi=eleman_sayisi/sutun_sayisi;

    printf("Matrisin toplam bayt miktari: %d\n",bayt_miktari);
    printf("Matrisin toplam %d tane elemani var\n",eleman_sayisi);
    printf("Matrisin sutun sayisi: %d\n",sutun_sayisi);
    printf("Matrisin satir sayisi: %d\n",satir_sayisi);
    */
/*
    int kucuk_matris[3][2];

    for(int row=0;row<3;row++)
        for(int column=0;column<2;column++)
            kucuk_matris[row][column]=rand()%10+1;


    for(int row=0;row<3;row++){
        for(int column=0;column<2;column++)
            printf("%d\t",kucuk_matris[row][column]);
        printf("\n");
    }
*/
/*
    int kucuk_matris2[3][2]={1,3,5,7,9,11};

    for(int row=0;row<3;row++){
        for(int column=0;column<2;column++)
            printf("%d\t",kucuk_matris2[row][column]);
        printf("\n");
    }
*/
/*
    const int ogr_sayisi=12;
    const int sinav_sayisi=3;

    char notlar[ogr_sayisi][sinav_sayisi];

    for(int ogr=0;ogr<ogr_sayisi;ogr++)
        for(int sinav=0;sinav<sinav_sayisi;sinav++)
            notlar[ogr][sinav]=rand()%101;

    float ortalama=0.0;

    for(int i=0;i<sinav_sayisi;i++) //dýþ döngü sýnav boyunca
    {
        ortalama=0.0;
        for(int j=0;j<ogr_sayisi;j++) //iç döngü öðrenci boyunca
            ortalama+=notlar[j][i];

        ortalama/=ogr_sayisi;
        printf("%d tane ogrencinin %d. sinav ortalamasi: %f\n",ogr_sayisi,i,ortalama);
    }
*/


/*
    //Öðrenci bazýnda not ort. hesabý
    int gecti=0;
    float katsayilar[]={0.3,0.2,0.5};

    for(int j=0;j<ogr_sayisi;j++){
        float basari_notu=0.0;
        for(int i=0;i<sinav_sayisi;i++)
            basari_notu+=notlar[j][i]*katsayilar[i];
        printf("%d. ogrencinin ortalama basari notu: %f\n",j,basari_notu);
        if(basari_notu>=50)
            gecti++;
    }
    printf("%d tane ogrenci bu dersten gecti.",gecti);
*/

/*
    int A[3][2]={1,2,3,4,5,6};
    int B[2][4]={10,20,30,40,50,60,70,80};
    int C[3][4]={};

    int A_sutun=sizeof(A[0])/sizeof(int);
    int B_satir=(sizeof(B)/sizeof(int))  /    (sizeof(B[0])/sizeof(int));

    if(A_sutun!=B_satir)
        printf("Bu matrisler carpilamaz!");
    else{
        for(int i=0;i<3;i++)
            for(int j=0;j<4;j++)
                for(int k=0;k<A_sutun;k++)
                    C[i][j]+=A[i][k]*B[k][j];

        for(int row=0;row<3;row++){
            for(int column=0;column<4;column++)
                printf("%d\t",C[row][column]);
            printf("\n");
        }
    }
*/
/*
    char kelime[]={'B','U','R','S','A','\0'};
    //Karakter dizisi sonlandýrma karakteri: \0 -> ingilizce adý: terminating character
    char kelime2[6]="BURSA";

    for(int i=0;i<5;i++) //ilkel yöntem
        printf("%c",kelime[i]);

    printf("\n2- %s\n\n",kelime);

    puts(kelime);
*/

/*
    char metin[101];
    printf("En fazla 100 karakterlik bir metin gir: ");
    scanf("%s",metin);

    printf("Az once girdiginiz metin: %s\n",metin);
    //puts(metin);
*/
/*
    char metin[101];
    printf("En fazla 100 karakterlik bir metin gir: ");
    gets(metin);

    printf("Az once girdiginiz metin: %s\n",metin);
    //puts(metin);
    printf("\n\nAz once girdiginiz metnin uzunlugu: %d",strlen(metin));

    int sayac=0;
    for(;metin[sayac]!='\0';sayac++)
        ;

    printf("\nIlkel yolla metin uzunlugu : %d",sayac);
*/
/*
    char kelime1[100],kelime2[100];
    printf("1. kelimeyi gir: ");
    gets(kelime1);
    printf("2. kelimeyi gir: ");
    gets(kelime2);
    strcat(kelime1," ");
    strcat(kelime1,kelime2);

    printf("1. kelimenin yeni hali: %s",kelime1);
*/



/*
    char isimler[5][50]={{'A','Y','S','E','\0'},"Mahmut","Sibel","Furkan","Burak"};
/*
    strcat(isimler[0],isimler[1]);
    strcat(isimler[0],isimler[2]);
    strcat(isimler[0],isimler[3]);
    strcat(isimler[0],isimler[4]);

    for(int i=1;i<5;i++)
        strcat(isimler[0],isimler[i]);

    puts(isimler[0]);

*/
/*
    char isimler[5][50]={{'A','Y','S','E','\0'},"Mahmut","Sibel","Furkan","Burak"};

    strncpy(isimler[1],"Ali",2);

    for(int i=0;i<50;i++)
        printf("%c",isimler[1][i]);
*/
/*
    char isimler[5][50]={{'A','Y','S','E','\0'},"ALI","Sibel","Furkan","Burak"};

    printf("%d",strcmp(isimler[0],isimler[1]));
*/


    char metin[50];
    printf("Metin gir:");
    gets(metin);
/*
    if(strcmp(metin,"BURSA")==0)
        printf("Parola dogru");
    else
        printf("Parola yanlis");
        */

    int i=strlen(metin)-1;
    for(;i>=0;i--)
        printf("%c",metin[i]);

    char yenikelime[10];
    strcpy(yenikelime,strrev(metin));
    printf("\n\nMetnin tersi: %s",yenikelime);

    return 0;
}
