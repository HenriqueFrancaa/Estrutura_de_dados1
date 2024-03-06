#include <stdio.h>
#include <stdlib.h>

void soma_escalar(int v[], int sz){
    int escalar = 10;
    for(int i = 0; i < sz; i++){
        *(v+i) += escalar;
    }
}

void print_vetor(int *v, int sz){
    for(int i = 0; i < sz; i++){
        printf("v[%d] = %d | endereço = %p\n", i,*(v+i),(v+i));
    }
}

void destroy(int **v){
    free(v);
    v = NULL;
}

int main(){
    

    puts("##### VETOR ESTATICO####\n");
    int v[5] = {0,5,10,15,20};
    
    print_vetor(v,5);
    soma_escalar(v,5);
    puts("##### SOMANDO A ESCALAR ####\n");
    print_vetor(v,5);

    int *vh = (int *)calloc(5,sizeof(int));
    puts("\n##### VETOR ESTATICO####\n");
    for(int i = 0; i < 5; i++){
        *(vh+i) = i * 100;
    }
    print_vetor(vh,5);
    puts("##### SOMANDO A ESCALAR ####\n");
    soma_escalar(vh,5);
    print_vetor(vh,5);
    
    destroy(&vh);

    return 0;
}
