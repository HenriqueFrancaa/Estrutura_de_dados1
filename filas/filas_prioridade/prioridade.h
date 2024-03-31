#include <stdlib.h>
#include <stdbool.h>

typedef struct queue Queue;

Queue * Queue_Create();
void Queue_Destroy(Queue * queue);
void Queue_Enqueue(Queue *queue, int value);
void Queue_Dequeue(Queue *queue);
int FindLocation(Queue *queue,int value);
void OpenEspace(Queue *queue, int index);  
bool Queue_IsEmpty(Queue *queue);