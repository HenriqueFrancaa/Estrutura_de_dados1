#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"

int main(){
    Stack *stack = Stack_Create();

    for(int i = 1; i <= 5; i++){
        Stack_Push(stack,i);
    }

    while(Stack_IsEmpty(stack) == 0){
        Stack_Print(stack);
        printf("TOPO = %d\n", Stack_Pop(stack));
        puts("");
    }

    Stack_Destroy(stack);

    return 0;
}