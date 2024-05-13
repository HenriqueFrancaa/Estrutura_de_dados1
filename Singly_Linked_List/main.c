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
    }
    LinkedList_print(L);

    */
    for(int i = 5; i >= 1; i--){
        LinkedList_add_first(L,i);
        //LinkedList_print(L);
    }
    //LinkedList_add_first(L,1);
    LinkedList_print(L);
    LinkedList_remove(L,3);
    LinkedList_print(L);
    
    return 0;
}