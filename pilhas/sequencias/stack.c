#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

typedef struct stack{
    int top;
    int *values;
}Stack;

Stack *Stack_Create(){
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->values = (int *)malloc(10 * sizeof(int));
    stack->top = 0;

    return stack;
}

void Stack_Destroy(Stack *stack){
    free(stack->values);
    free(stack);
}

bool Stack_IsEmpty(Stack *stack){
    return stack->top == 0;
}

void Stack_Push(Stack *stack, int value){
    *(stack->values + stack->top) = value;
    stack->top += 1;
}

int Stack_Pop(Stack *stack){
    int topo = *(stack->values + stack->top-1);
    stack->top -= 1;
    return topo;
}

int Stack_Peek(Stack *stack){
    return *(stack->values + stack->top-1);
}

void Stack_Print(Stack *stack){
    for(int i = 0; i < 10; i++){
        if(i < stack->top){
            printf("%d ", *(stack->values + i));
        }
        else{
            printf("X ");
        }
    }
    
}