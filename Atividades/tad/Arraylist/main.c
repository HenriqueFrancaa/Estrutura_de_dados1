#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"


int main(int argc, char * argv[]){
    int capacity = atoi(argv[1]);
    int growthFactor = atoi(argv[2]);

    Array *array = Array_Create(capacity,growthFactor);
    if(array == NULL){
        return -1;
    }
    Array_Print(array);

   int i;
   for(int i = 3; i < argc; i++){
       int value = atoi(argv[i]);
       Array_Add(array,value);
       Array_Print(array);
   }

   Array_Print(array);
   Array_Destroy(array);

   return 0;

}
