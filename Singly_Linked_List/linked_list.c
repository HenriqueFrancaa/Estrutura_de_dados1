#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _snode{ // simple node
    int val;
    struct _snode *next;
}SNode;

typedef struct _linked_list{
    SNode *begin;
    SNode *end;
    int size;
}LinkedList;


SNode *SNode_create(int value){
    SNode *snode = (SNode *)calloc(1,sizeof(SNode));
    snode->val = value;
    snode->next = NULL;

    return snode;
}

LinkedList *LinkedList_create(){
    LinkedList *L = (LinkedList*)calloc(1,sizeof(LinkedList));
    L->begin = NULL;
    L->end = NULL;
    L->size = 0;
    return L;
}

bool LinkedList_IsEmpty(LinkedList *L){
    return (L->begin == NULL && L->end == NULL);
}

void LinkedList_add_first(LinkedList *L, int value){
    /*
    */
    SNode *p = SNode_create(value);
    p->next = L->begin;
    if(LinkedList_IsEmpty(L)){
        L->end = p;
    }

    L->begin = p;
    //printf("L->Begin->val = %d\n", L->begin->val);
    L->size++;
}

void LinkedList_print(LinkedList *L){
    SNode *p = L->begin;
    puts("");
    printf("L ->");
    while(p != NULL){
        printf(" %d -> ", p->val);
        p = p->next;
    }
    puts("NULL");
    printf("list size : %d\n", L->size);
}

void LinkedList_add_last_slow(LinkedList *L, int value){
    //criando o novo nó
    SNode *q = SNode_create(value);
    //caso a lista esteja vazia
    if(L->begin == NULL){
        L->begin = q;
    }
    //caso não esteja vazia
    //passando pela lista
    //iremos encontrar o ultimo nó
    else{
        SNode *current = L->begin;
        //enquanto não for o ultimo nó
        //continua procurando
        while(current->next != NULL){
            current = current->next;
        }
        //agora com o ultimo nó encontrado
        //atualizamos
        current->next = q;
    }
    L->size++;
}

void LinkedList_add_last_fast(LinkedList *L, int value){
    SNode *q = SNode_create(value);
    if(L->begin == NULL){
        L->begin = q;
        L->end = q;
    }
    else{
        L->end->next = q;
        L->end = L->end->next;        
    }
    L->size++;
}
