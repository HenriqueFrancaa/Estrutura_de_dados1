#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "prioridade.h"

int main(){
    Queue *queue = Queue_Create();
    int n = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &n);
        Queue_Enqueue(queue, n);        
    }

    while(Queue_IsEmpty(queue) == 0){
        Queue_Dequeue(queue);
        puts("");
    }

    Queue_Destroy(queue);

    return 0;
}