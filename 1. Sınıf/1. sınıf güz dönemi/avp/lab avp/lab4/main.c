#include <stdio.h>

int main()
{
    float a,b;
    int islem;

    printf("Islem yapilacak sayilari giriniz: ");
    scanf("%f %f",&a, &b);

    printf("Hangi islemi yapmak istersiniz?(1 toplama, 2 cikarma, 3 carpma, 4 bolme): ");
    scanf("%d",&islem);

    switch(islem){

    case 1:
        printf("%f", a+b);
    break;
    case 2:
        printf("%f", a-b);
    break;
    case 3:
        printf("%f", a*b);
    break;
    case 4:
        if(b==0)
        printf("Hatali giris yapildi, programdan cikiliyor...");
        else
        printf("%f", a/b);
    break;
    default:
        printf("Hatali giris yapildi, programdan cikiliyor...");
    }




    /*if(islem==1){
        printf("%f", a+b);
    }
    else if(islem==2){
        printf("%f", a-b);
    }
    else if(islem==3){
        printf("%f", a*b);
    }
    else if(islem==4){
        if(b==0)
        printf("Hatali giris yapildi, programdan cikiliyor...");
        else
        printf("%f", a/b);
    }
    else
        printf("Hatali giris yapildi, programdan cikiliyor...");*/

    //(islem==1)? (printf("%f", a+b)): (islem==2 ? printf("%f", a-b):((islem==3 ? printf("%f", a*b) : (b==0 ? printf("Hatali giris yapildi, programdan cikiliyor...") : islem==4 ? printf("%.2f", a/b) : printf("Hatali giris yapildi, programdan cikiliyor...")))));


    return 0;
}
