#include "sequences.h"
#include "stack.h"

typedef struct stack{
    int top;
    int *values;
}Stack;


bool Algorithm_Sequences_IsValid(int * pushed, int * popped, int size){
       int i = 0; int j = 0;
       Stack *stack_aux = Stack_Create(); 
       bool validate = true;
       while(true){
              int sz_pushed = size;
              while(validate){
                     if(*(pushed + i) == *(popped + j)){
                            j++;
                            i++;

                     }
                     else{
                            Stack_Push(stack_aux,*(pushed + i));
                            i++;
                            validate = false;
                            
                     }

              }
              while(!validate){
                     if(*(stack_aux->values + stack_aux->top-1) == *(pushed + j)){
                            Stack_Pop(stack_aux);
                            j++;
                     }
                     else{
                            validate = false;
                     }
              }
              
       }

       return false;
}