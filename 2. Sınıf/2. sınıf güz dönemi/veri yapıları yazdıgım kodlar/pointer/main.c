#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int n;
    scanf("%d", &n); // & işareti ile yazilir. n'in adresini alıp ordan içine yazacak çünkü scanf
    printf("n = %d \n", n); //DOGRU, n'nin degerini verir
    printf("n = %d \n", &n); // X int isteyen bir yere sen pointer (adres isteyen) bişey yazmaya çalışıyorsun. Sonucu saçma olur.
    printf("n = %p \n", n); // X adres isteyen bir yere sen int bir deger yazmaya calisiyorsun gene sacma bir sonuc verir
    printf("n = %p", &n); //DOGRU, n'in adresini verir
    // --------
    */
    /*
    int n = 10;
    int *p = &n; //burda * işareti ile p'nin bir pointer oldugunu belirtiyorum sadece. AYrica int dedim cunku pointerin gosterdigi deger bir int. yani n, bir sayi. buna casting denir, yani pointerin turunu belirtiyorum
    *p = 20; //p'nin adresteki degerine 20 yazdım
    printf("%d\n", n);   // 20
    printf("%d\n", *p);  // 20 DEREFERENCE, bir pointerin isaret ettigi degeri almaya denir.
    p = 30; //gittim adrese 30 yazdim, yanlis ve sacma olur. p bir adrestir. *p ise adresteki deger, ordaki degere ulasir.
    printf("%d\n", n); // n hic degismemisti. ondan hala 20
    // kisaca p, n'nin adresini tutar. *p ise o adresteki degeri
    //---------------
    */
/*
    //VOID POINTERLAR: pointera casting yaparken void atariz. yani, bu pointer her turden seyi gosterebiliyo
    int x = 10;
    void *p = &x; // "Ben bir adres tutuyorum ama icindeki şeyin ne olduğunu bilmiyorum" lmao surpriz yumurta
    //*p = 5; YANLIS.
    int *a, *b; //birden fazla yazacaksam her birine yildiz koyacam. YOKSA b'yi bir int mis gibi gorur.
    printf("%d\n", *(int*)p);  // 10️ derleyici icindeki degeri bilmedigi icin ona haber vermen gerek. "İCİNDEKİ DEGERİ İNT GİBİ YORUMLA"
    // *(int*)p okuma sirasi soyledir: sagdan sola ilk once (int*) ile p'nin bir pointer oldugunu anlar. sonra en soldaki * isaretiyle bu adresteki degeri okur.
    // *(  (int*)  p  ) boyle dusun yani
    //*((int)*p) dersem olmaz. cunku: *p bir isaretci, okey. SONRA onu gidip int'e ceviriyo. sonra adresteki degeri almaya calisiyo ama orda adres yerine int bir deger olmus oluyo lol
    printf("%p", p); // direk tuttugu adresi yazar. printf("%p", (void*)p); da yazabilirim
*/
/*

    //malloc ve calloc birer fonksiyondur aslında
    int *p = malloc(sizeof(int)); //heap'ten(dinamik bellek) yer ayir, ADRESINI bana ver der.
    // void turunde bir isaretci geri dondurur. (void*)
    // ornegin bir integer isaretcisi olusturulmak istenirse: (int*)malloc (sizeof (int))
    //Ne icin kullanilir?
    // scanf'ten gelen degerin buyuklugu bilinmiyosa Ornegin:
    int big[1000000]; // X stack patlayabilir
    int *big = malloc(1000000 * sizeof(int)); // dogru

    // bir degiskenin bir fonksiyonun disinda da yasamasi isteniyorsa. Ornegin:
    int* f() { //!EGER BIR ADRES DÖNDÜRECEKSE BÖYLE YILDIZ İŞARETİ KONUR, x'i döndürüyor mesela ve x bir adres
    int *x = malloc(sizeof(int));
    *x = 5;
    return x; // gibi.
    }

    //malloc-calloc farki:
    int *arr = malloc(5 * sizeof(int)); //bu 5 tane cop deger yapar. cop cop cop cop cop
    int *arr = calloc(5, sizeof(int)); //bu 0 0 0 0 0 diye bir sey olur. yani BOS YER yerine direk oraya 0 yaziyor bu.
    //!!Calloc bu sekilde iki parametreden olusur ayrica. malloc ise 1 idi.
    //!!su sizeof(int) dedigin sey tanimladigin pointerin turune gore yaziliyor. Yani float *arr olsaydi sizeof(float) derdik. Direk 2 veya 4 byte yazmamamizin sebebi ise: her derleyicide bunlar degislen olabiliyomus. yani bi yerde int 2 iken baska birinde 4 falan olabiliyomus, yani risk atmamak adina.
    // Stack'ler kucuk ve gecicidir. Heap'ler ise buyuk ve kalicidir ve sen yonetirsin.

    //iste bu yuzden, ayırdıgın alanla işin bittigi zaman onu serbest bırakman lazım. onu da free fonksiyonu ile yapıcan.
    int *p = malloc(sizeof(int));
    *p = 42;
    free(p); //! p'yi NULL yapmaz veya sıfırlamaz!!
    //bir pointer free edildikten sonra kullanılmaz
    p = NULL; //free ettikten sonra boyle dedik çünkü p hala onun oldugunu sandığı "yeri" işaret ediyor. Halbuki heapteki o yer çoktan serbest kaldı. ama p hala orayı gösteriyor.
    //!!! DANGLING POINTER denir bu duruma.
    //dangling p: pointer NULL degildir. free sonrasında p, dangling pointer olur.
    //kısaca free: bellegi temizler, NULL: pointerı temizler
    */

    //POINTER TO FUNCTION
    int (*fp)(int, int); //fp, int,int alan bir fonksiyonu gösteriyor demek. Bastaki int ise, o fonksiyonun donus tipidir
    //! int *fp(int, int); diye parantezsiz YAZAMAM, yoksa derleyici bunu pointer döndüren bir fonksiyon sanar.
    fp = topla; //Topla diye bi fonksiyon var mesela, artık bunu işaret ediyo

    printf("%d\n", fp(5, 6)); //! *fp(5, 6) da yazabilirim. Ama daha cok bu tercih edilir. C, fonksiyon pointerlarını * olamadan da anlayabiliyor.
    //o da topla fonksiyonun cagirir, bu da.
    //!Bu sadece fonksiyon pointerlari için gecerli.
}
