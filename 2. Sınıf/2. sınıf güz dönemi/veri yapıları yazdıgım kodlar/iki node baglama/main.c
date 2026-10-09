#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    void* data;
    struct node* next;
} NODE;

NODE* createNode(void* data) {
    NODE* n = malloc(sizeof(NODE));
    if (n == NULL) return NULL;

    n->data = data;
    n->next = NULL;
    return n;
}

int main(void) {
    int* a = malloc(sizeof(int));
    int* b = malloc(sizeof(int));

    *a = 10;
    *b = 20;

    NODE* node1 = createNode(a);
    NODE* node2 = createNode(b);

    node1->next= node2;//!BURASI ONEMLI ben buraya node2'nin datasi demistim. ama direkt node'a baglidir aslinda bu linkler. dataya degil

    printf("Node1: %d \nNode2: %d", *(int*)node1->data, *(int*)node2->data);

    free(a);
    free(b);
    free(node1);
    free(node2);

    return 0;
}
