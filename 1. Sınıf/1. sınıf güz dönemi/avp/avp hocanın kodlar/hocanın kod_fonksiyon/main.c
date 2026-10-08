#include <stdio.h>
/*
char harf_ver(); //<-fonksiyonun prototipi
int taseron(int x,int y);
int topla(int a,int b);

int main(){
    printf("4+7=%d",taseron(4,7));
    printf("\nHarfimiz: %c",harf_ver(15));
    return 0;
}


char harf_ver(int s){
    if(s==5)
        return 'A';
}
//x ve y i�in call_by_value
int taseron(int x,int y){
    return topla(x,y);
}

int topla(int a,int b){
    return a+b;
}

//int veya void d�n�� tipli fonksiyonlar
//main'in alt�na yaz�labilir
//di�er d�n�� tipliler main'in alt�na yaz�lamaz
*/

//recursive-�zyinelemeli


//-----------------------


int faktoriyel2(int N){
    if(N==1)
        return 1;
    else
        return N*faktoriyel2(N-1);
}

int faktoriyel(int N){
    int sonuc=1;
    for(int i=1;i<=N;i++)
        sonuc*=i;
    return sonuc;
}


int fibo_rec(int indis){
    printf("Ben Fibo(%d)'yim\n",indis);
    if(indis==0 || indis==1)
        return 1;
    else
        return fibo_rec(indis-1)+fibo_rec(indis-2);
}







void main(){
    int N;
    printf("N'i gir: ");
    scanf("%d",&N);
    printf("N!=%d\n",faktoriyel(N));

    int indis;
    printf("Fibo dizisinin hangi indisli elemani lazim: ");
    scanf("%d",&indis);

    printf("Fibo(%d)=%d",indis,fibo_rec(indis));

}




/*

//bu t�r �a�r�ya call_by_reference denir
int dizi_topla(int dizi[],int e){
    int toplam=0;
    for(int i=0;i<e;i++)
        toplam+=dizi[i];
    return toplam;
}


void main(){
    int dizim[]={10,20,30,40};
    printf("Sonuc: %d",dizi_topla(dizim,4));
}
*/






//G�zel �rnek1: Bir kelimenin ka� harf i�erdi�ini
//sayan bir rek�rsif fonksiyon
/*
int saydir(char k[],int L){
    printf("Beni L=%d ile cagirdilar.%c harfi\n",L,k[L]);
    if(k[L]=='\0')
        return L;
    else
        saydir(k,L+1);
}


void main(){
    char kelime[101]="BURSA";
    printf("%s kelimesinde %d harf var",kelime,saydir(kelime,0));
}
*/
/*
int rutbe_indisi_dondur(char R[][20],int s,char A[],int x){
    if(x==s)
        return -1;
    else if(strcmp(R[x],A)==0)
        return x;
    else
        rutbe_indisi_dondur(R,s,A,x+1);
}

void main(){
    char rutbeler[7][20]={"General","Albay","Yarbay","Binbasi","Yuzbasi","Tegmen","Onbasi"};
    char asker[]="Yuzbas";

    printf("Rutbe indisi: %d",rutbe_indisi_dondur(rutbeler,7,asker,0));


}

*/

