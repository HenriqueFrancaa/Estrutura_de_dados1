#include <stdio.h>
#include <stdlib.h>

int main(){
    //alocação de vetor dinamico(memória heap)
    //o calloc vai colocar o valor zero em todos os endereços do vetor

    int *v = (int *)calloc(5,sizeof(int));
    
    for(int i = 0; i < 5; i++){
        printf("v[%d] = %d | endereço = %p\n",i, *(v+i), (v+i));
    }
    puts("Depois de colocar os valores\n");

    for(int i = 0; i < 5; i++){
        scanf("%d",(v+i));
    }

    for(int i = 0; i < 5; i++){
        printf("v[%d] = %d | endereço = %p\n",i, *(v+i), (v+i));
    }


    free(v);


    return 0;
}
