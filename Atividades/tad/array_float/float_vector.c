#include "float_vector.h"
#include <stdlib.h>
#include <stdio.h>


struct float_vector{
    int capacity; // num maximo de elementos
    int size; // quantidade de elementos armazenados atualmente
    float *datas; //vetor de floats
};

FloatVector *create(int capacity){
    FloatVector *vec = (FloatVector *)calloc(1,sizeof(FloatVector));
    vec->size = 0;
    vec->capacity = capacity;
    vec->datas= (float*)calloc(capacity,sizeof(float));

    return vec;
}

void destroy(FloatVector **vec_ref){
    FloatVector *vec = *vec_ref;

    free(vec->datas);
    free(vec);
    *vec_ref = NULL;
}

void append(FloatVector *vec, float val){
    if(vec->size == vec->capacity){
        printf("ERROR in 'append'\nVector is full");
        exit(EXIT_FAILURE); //saida com erro
    }

    vec->datas[vec->size] = val;
    vec->size++;
}

void print(const FloatVector *vec){
    printf("Size = %d\n", vec->size);
    printf("Capacity = %d\n", vec->capacity);
    puts("----");
    for(int i = 0; i < vec->size; i++){
        printf("[%d] = %f\n", i, vec->datas[i]);
    }
    puts("----------\n");
}
