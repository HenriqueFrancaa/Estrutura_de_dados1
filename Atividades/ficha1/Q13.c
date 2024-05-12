#include <stdio.h>
#include <stdlib.h>

typedef struct dados{
    char sexo;
    float altura;
    int idade;
    char olho;
}dados;

int main(){
    int n;
    scanf("%d", &n);
    dados *vetor = (dados *)malloc(n * sizeof(dados));
    for(int i = 0; i < n; i++){
        scanf(" %c", &(*(vetor+i)).sexo);
        scanf("%f", &(*(vetor+i)).altura);
        scanf("%d", &(*(vetor+i)).idade);
        scanf("%c", &(*(vetor+i)).olho);
    }
    free(vetor);
    return 0;
}