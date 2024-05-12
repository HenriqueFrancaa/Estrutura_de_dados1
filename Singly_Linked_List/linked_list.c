#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _snode{ // simple node
    int val;
    struct _snode *next;
}SNode;

typedef struct _linked_list{
    SNode *begin;
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
    L->size = 0;
    return L;
}

void LinkedList_add_first(LinkedList *L, int value){
    /*
    if(L->begin == NULL){
        SNode *p = SNode_create(value);
        L->begin = p;
    }
    else{ // inserção na cabeça (inicio) da lista 
    */
    SNode *p = SNode_create(value);
    p->next = L->begin;
    L->begin = p;
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

void LinkedList_add_last(LinkedList *L, int value){
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