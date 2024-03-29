#include "fila.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct queue
{
    int head;
    int tail;
    int size;
    int *values;
}Queue;

Queue *Queue_Create(){
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->values = (int *)malloc(5 * sizeof( int));
    queue->head = 0;
    queue->tail = 0;
    queue->size = 0;
    
    return queue;
}

void Queue_Destroy(Queue *queue){
    free(queue->values);
    free(queue);
}

bool Queue_IsEmpty(Queue *queue){
    return queue->size == 0;
}

void Queue_Enqueue(Queue *queue, int value){
    *(queue->values + queue->tail) = value;
    queue->tail = (queue->tail + 1)%5;
    queue->size++;  
}

int Queue_Dequeue(Queue *queue){
    int retirado = *(queue->values + queue->head);
    printf("O primeiro da fila : %d", retirado);
    queue->head = (queue->head + 1)%5;
    queue->size--;
}

