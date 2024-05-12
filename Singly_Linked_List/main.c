#include "linked_list.h"

typedef struct _snode{ // simple node
    int val;
    struct _snode *next;
}SNode;

typedef struct _linked_list{
    SNode *begin;
    int size;
}LinkedList;

int main(){

    LinkedList *L = LinkedList_create();
    /*
    for(int i = 1; i <= 5; i++){
        LinkedList_add_first(L,i);
        LinkedList_print(L);
    }
    */
    LinkedList_add_last(L,2);
    LinkedList_add_last(L,5);
    LinkedList_add_last(L,4);

    LinkedList_print(L);
    return 0;
}