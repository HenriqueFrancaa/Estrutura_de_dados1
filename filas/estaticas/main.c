#include <stdio.h>
#include "fila.h"
#include <stdlib.h>
#include <stdbool.h>

int main(){
    Queue *queue = Queue_Create();

    for(int i = 1; i <= 5; i++){
        Queue_Enqueue(queue,i);
    }

    while(Queue_IsEmpty(queue) == 0){
        //Queue_Print(queue);
        Queue_Dequeue(queue);
        puts("");
    }

    Queue_Destroy(queue);

    return 0;
}