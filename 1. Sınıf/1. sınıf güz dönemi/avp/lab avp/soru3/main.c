#include <stdio.h>

int main()
{
    double a,b,c,d,sonuc,enbuyuk,yenideger;
    printf("Musluklarin kac saatte dolduracagini girin: ");
    scanf("%lf %lf %lf %lf", &a,&b,&c,&d);

    if(a==0||b==0||c==0||d==0)
        printf("Deger olarak sifir girilemez");
    else{
        if(a&&b&&c&&d < 0){
            enbuyuk=a;

            if(b<a)
            enbuyuk=b;
            if(c<a)
            enbuyuk=c;
            if(d<a)
            enbuyuk=d;

            yenideger = enbuyuk * -1;

            if(a==enbuyuk)
            a=yenideger;
            if(b==enbuyuk)
            b=yenideger;
            if(c==enbuyuk)
            c=yenideger;
            if(d==enbuyuk)
            d=yenideger;
        }
        else
        sonuc = 1 / (1/a + 1/b + 1/c + 1/d);
        if(sonuc==0)
            printf("Havuz dolmaz.");
        else
            printf("Havuz %lf saatte dolar.", sonuc);
        }
    return 0;
}
