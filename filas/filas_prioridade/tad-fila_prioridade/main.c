#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "prioridade.h"

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