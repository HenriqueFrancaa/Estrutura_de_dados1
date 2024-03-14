#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"

typedef struct array{
    int *values;
    int size;
    int growthFactor;
    int capacity;
};


int Array_Size(Array *array){
    return array->size;
}

//criando array
Array *Array_Create(int capacity, int growthFactor){
    Array *array = (Array *)malloc(sizeof(Array));
    array->values = (int *)malloc(sizeof(int) * capacity);
    array->size = 0;
    array->capacity = capacity;
    array->growthFactor = growthFactor;
    
    return array;
}

void Array_Print(Array *array){
    printf("Size of array = %d\n", Array_Size(array));
    printf("Capacity of array = %d\n",array->capacity);
    int i = 0;
    for(i = 0; i < array->capacity; i++){
        if(i < array->size){
            int value =  *(array->values + i);
            printf("%d ", value);
        }
        else{
            printf("X ");
        }
    }
    puts("\n");
}

void Array_Resize(Array *array){
    int newCapacity = array->capacity * array->growthFactor;
    int *newValues = (int *)malloc(newCapacity*sizeof(int));
    for(int i = 0; i < array->capacity; i++){
        *(newValues + i) = *(array->values + i);
    }
    free(array->values);
    array->values = newValues;
    array->capacity = newCapacity;
}

void Array_Destroy(Array *array){
    free(array->values);
    free(array);
}

void Array_Add(Array *array, int value){
    if(array->size == array->capacity){
        Array_Resize(array);
    }
    *(array->values+array->size) = value;
    array->size+=1;
}
