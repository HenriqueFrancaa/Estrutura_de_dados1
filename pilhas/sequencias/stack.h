#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct stack Stack;


Stack * Stack_Create();//feito
void Stack_Destroy(Stack *stack);//feito
bool Stack_IsEmpty(Stack *stack);//feito
void Stack_Push(Stack *stack, int value);//feito
int Stack_Pop(Stack *stack); //feito
void Stack_Print(Stack *stack); // feito
int Stack_Peek(Stack *stack); 