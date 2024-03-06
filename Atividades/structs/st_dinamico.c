#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno
{
    char nome[100];
    int idade;
}aluno;

// "->" para ponteiros do tipo da struct
// "." para se referir ao campo da struct em alguma variavel do tipo da struct;
int main(){
    aluno *estudante = (aluno *)calloc(1,sizeof(aluno));

    strcpy(estudante->nome, "FRANCA");
    estudante->idade = 18;

    printf("tamanho do nome FRANCA : %ld\nIdade: %d\n", strlen(estudante->nome), estudante->idade);
    free(estudante);
    estudante = NULL;
    return 0;
}