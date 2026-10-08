#include <stdio.h>

int main()
{
    double sayi;
    printf("Bir sayi giriniz: ");
    scanf("%lf", &sayi);

    (sayi>0)? printf("Sayi pozitif.") : (sayi<0)? printf("Sayi negatif."): printf("Sayi sifira esit.");

    /*if (sayi>0)
        printf("Sayi pozitif.");
    else if(sayi<0)
        printf("Sayi negatif.");
    else
        printf("Sayi sifira esit.");*/

    return 0;
}
