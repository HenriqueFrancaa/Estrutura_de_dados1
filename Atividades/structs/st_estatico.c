#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct aluno
{
    char nome[1000];
    int idade;
}aluno;

int main(){
    aluno franca;
    puts("###ALUNO###");

    gets(franca.nome);

    scanf("%d", &franca.idade);
    for(int i = 0; i < strlen(franca.nome); i++){
        printf("%c", franca.nome[i]);
    }
    printf("\nIDADE: %d\n", franca.idade);



    return 0;
}
