#include <stdlib.h>
#include <stdio.h>

typedef struct _snode SNode;
typedef struct _linked_list LinkedList;

LinkedList *LinkedList_create(); //criar nossa Lista encadeada simples
SNode *SNode_create(int value); //criando um nó  
void LinkedList_add_first(LinkedList *L, int value); // adicionando elemento na cabeça da lista
void LinkedList_print(LinkedList *L);
void LinkedList_add_last(LinkedList *L, int value); // adicionando elemento no fim da lista