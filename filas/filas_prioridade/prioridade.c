#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "prioridade.h"

typedef struct queue
{
    int head;
    int tail;
    int size;
    int *values;
}Queue;


Queue *Queue_Create(){
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->values = (int *)malloc(10 * sizeof(int));
    for(int i = 0; i < 10; i++){
        *(queue->values + i) = 0;
    }
    queue->head = 0;
    queue->tail = 0;
    queue->size = 0;

    return queue;
}

void Queue_Destroy(Queue *queue){
    free(queue->values);
    free(queue);
}

void Queue_Enqueue(Queue *queue, int value){
    int index = FindLocation(queue, value);
    OpenEspace(queue, index);
    *(queue->values + index) = value;
    queue->tail = (queue->tail + 1)%10;
    queue->size++;
}

int FindLocation(Queue * queue, int value){
    int index = 0;
    for(int i = 0; i < queue->size; i++){
        if(value < *(queue->values + i)){
            index = i;
            break;
        }
    }
    return index;
}

void OpenEspace(Queue *queue, int index){
    int *new_values = (int *)malloc(10 * sizeof(int));
    int j = 0;
    for(int i = 0; i < 10; i++){
        if(j == index){
            i++;
        }
        *(new_values + i) = *(queue->values + j);
        j++;
    }
    free(queue->values);
    queue->values = new_values;
}

void Queue_Dequeue(Queue *queue){
    int retirado = *(queue->values + queue->head);
    printf("O primeiro da fila de prioridade : %d", retirado);
    queue->head = (queue->head + 1)%10;
    queue->size--;
}

bool Queue_IsEmpty(Queue *queue){
    return queue->size == 0;
}