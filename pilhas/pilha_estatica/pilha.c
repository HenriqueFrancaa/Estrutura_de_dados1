#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"

typedef struct stack{
    int top;
    int *values;
};

//criando a stack
Stack *Stack_Create(){
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->values = (int *)malloc(5 * sizeof(int));
    stack->top = 0;

    return stack;
}
//destruindo a stack
void Stack_Destroy( Stack *stack){
    free(stack->values);
    free(stack);
}

void Stack_Push(Stack *stack, int value){
    *(stack->values + stack->top) = value;
    stack->top += 1;
}

int Stack_Pop(Stack *stack){
    int topo = *(stack->values + stack->top-1);
    stack->top -=1;
    return topo;
}

bool Stack_IsEmpty(Stack *stack){
    return stack->top == 0;
}

void Stack_Print(Stack *stack){
    for(int i = 0; i < 5; i++){
        if(i < stack->top){
            printf("%d ", *(stack->values + i));
        }
        else{
            printf("X ");
        }
    }
    
}
