#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct stack Stack;

Stack *Stack_Create();
void Stack_Destroy(Stack *stack);
bool Stack_IsEmpty(Stack *stack);
void Stack_Push(Stack *stack, int value);
int Stack_Pop(Stack *stack);
void Stack_Print(Stack *stack);