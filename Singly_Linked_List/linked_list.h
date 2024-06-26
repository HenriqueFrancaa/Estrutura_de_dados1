#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
typedef struct _snode SNode;
typedef struct _linked_list LinkedList;

LinkedList *LinkedList_create(); //criar nossa Lista encadeada simples
SNode *SNode_create(int value); //criando um nó  
void LinkedList_add_first(LinkedList *L, int value); // adicionando elemento na cabeça da lista
void LinkedList_print(LinkedList *L);
void LinkedList_add_last_slow(LinkedList *L, int value); // adicionando elemento no fim da lista de forma lenta
void LinkedList_add_last_fast(LinkedList *L, int value);// adicionando elemento no fim da lista de forma mais eficiente
bool LinkedList_IsEmpty(LinkedList *L);
void LinkedList_remove(LinkedList *L, int value); // vai remover o primeiro nó que tiver com o valor de value