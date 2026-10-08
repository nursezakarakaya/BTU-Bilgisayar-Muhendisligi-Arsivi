#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
    int yaslar[10]={1,6,9};

    for(int sayac=0;sayac<sizeof(yaslar)/sizeof(int);sayac++){
        //printf("%d. ogrencinin yasini gir: ",sayac+1);
        //scanf("%d",&yaslar[sayac]);

        printf("%d\n",yaslar[sayac]);
    }
*/
/*
    int x[5];

    for(int s=0;s<5;s++)
        x[s]=3*s;

    for(int s=0;s<5;s++)
        printf("%d\n",x[s]);
*/

/*
    int sayilar[10];

    int r=0;
    int gecici;
    while(r<10){
        printf("Dizinin %d. elemanini gir: ",r+1);
        scanf("%d",&gecici);
        if(gecici==0)
            break;
        else
            sayilar[r]=gecici;
        r++;
    }

    for(int g=0;g<r;g++)
        printf("sayilar[%d]=%d\n",g,sayilar[g]);
*/


/*
    int dizi[5]={-1,-2,-3,-4,-5};
    int indis;
    printf("Indis gir: ");
    scanf("%d",&indis);
    printf("dizi[%d]=%d",indis,dizi[indis]);
*/
/*
    int grafik[]={4,15,2,20,8,1};

    for(int i=0; i<sizeof(grafik)/sizeof(grafik[0]); i++){

        printf("%d. eleman: %d -->\t",i,grafik[i]);

        for(int j=0; j<grafik[i]; j++)
            printf("*");

        printf("\n");
    }
*/
/*
    const int BOYUT=10;
    srand(time(NULL));
    int y[BOYUT];

    for(int u=0;u<BOYUT;u++)
        y[u]=rand()%100+1;

    for(int u=0;u<BOYUT;u++)
        printf("y[%d]=%d\n",u,y[u]);


    int enbuyuk=y[0];
    for(int u=1;u<BOYUT;u++)
        if(y[u]>enbuyuk)
            enbuyuk=y[u];

    printf("Dizideki en buyuk eleman: %d",enbuyuk);

    */
/*
    int dizi1[5]={18,6,22,3,1};
    int dizi2[5];
    int sayac;

    for(int a=0;a<5;a++){
        sayac=0;

        for(int b=0;b<5;b++){
            if(dizi1[a]>dizi1[b])
                sayac++;
        }

        dizi2[sayac]=dizi1[a];
    }

    for(int a=0;a<5;a++)
        printf("dizi2[%d]=%d\n",a,dizi2[a]);
*/


    int sayi;
    int ters_sayi=0;
    printf("Sayiyi gir: ");
    scanf("%d",&sayi);

    while(sayi>0){
        //printf("%d",sayi%10);
        ters_sayi*=10;
        ters_sayi+=sayi%10;

        sayi/=10;
    }

    printf("Olusan ters sayi: %d",ters_sayi);

    return 0;
}
