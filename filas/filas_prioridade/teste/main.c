#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

int FindLocation(Queue * queue, int value){
    int index = 0;
    for(int i = 0; i < queue->size; i++){
        if(value < *(queue->values + i)){
            return i;
        }
        index = i+1;
    }
    return index;
}
void OpenEspace(Queue *queue, int index){
    int *new_values = (int *)malloc(10 * sizeof(int));
    int j = 0;
    for(int i = 0; i <= queue->size; i++){
        if(j == index){
            i++;
        }
        *(new_values + i) = *(queue->values + j);
        j++;
    }
    free(queue->values);
    queue->values = new_values;
}
void Queue_Enqueue(Queue *queue, int value){
    int index = FindLocation(queue, value);
    OpenEspace(queue, index);
    *(queue->values + index) = value;
    queue->tail = (queue->tail + 1)%10;
    queue->size++;
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

void Queue_Print(Queue *queue){
    for(int i = 0; i < 10; i++){
        if(i < queue->size){
            printf("%d ", *(queue->values + i));
        }
        else{
            printf("_ ");        }
    }
    puts("");
}

int main(){
    int t,n;
    Queue *queue = Queue_Create();
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d", &n);
        Queue_Enqueue(queue,n);
        Queue_Print(queue);
        puts("");
    }

    while(Queue_IsEmpty(queue) == 0){
        Queue_Dequeue(queue);
        puts("");
    }

    Queue_Destroy(queue);
    return 0;
}