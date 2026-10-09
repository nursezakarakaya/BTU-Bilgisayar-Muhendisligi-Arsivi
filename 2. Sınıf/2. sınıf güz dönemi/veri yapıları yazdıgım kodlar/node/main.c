#include <stdio.h>
#include <stdlib.h>

typedef struct node{ //!! main fonksiyonundan once yazilir. ya da bir header olusturacaksin ayri bir tane
    void* data; //datayi isaret ediyor (data her sey olabilir o yüzden void dedik pointerin tipine)
    struct node* link; //bir sonraki node'u isaret ediyor. Isaret ettigi sey bir struct oldugu için struct node dedik.
}NODE; //bunu artik yeni bir veri tipi gibi düsün. int, char, float gibi

NODE* createNode(void* itemPtr){ //döndürecegi sey bir NODE'un adresi olacagi için NODE* dedik fonksiyonun tipine.
    NODE* nodePtr;
    nodePtr = (NODE*)malloc(sizeof(NODE));
    nodePtr->data = itemPtr; //nodePtr bir pointer oldugu için içindeki elemanlara -> ile ulasiyoruz. (*nodePtr).data da olurdu, ayni sey. ama bu daha kolay
    nodePtr->link = NULL;
    return nodePtr;
}

int main(void) {
    int* sayi = (int*)malloc(sizeof(int));
    if (sayi == NULL) return 1; //malloc basarisiz olmussa NULL oluyo sayi, yani hicbir yeri isaret edemiyo
    *sayi = 57; //!!mallocla yer acmadan bunu yapamam, cunku mantiken pointer daha hicbir yeri isaret etmiyordu.
    //dangling/garbage pointer olurdu mallocla yer almasaydin

    NODE* nodeBu = createNode(sayi);
    if (nodeBu == NULL) return 1; //node olusturamadiysa gene NULL olacak

    printf("Node icindeki veri: %d\n", *(int*)nodeBu->data); //%d int bir deger ister ondan int* castledik

    free(sayi); //!mallocla aldigimiz alanlari freeliyoruz
    free(nodeBu); //fonksiyon icinde mallocla acilan alani nodeBu'ya verdik, yani yeni sahibi o. O yüzden free(nodePtr); degil

    return 0;
}

