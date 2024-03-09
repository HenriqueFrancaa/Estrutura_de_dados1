#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned int uint;

typedef struct livro{
    char titulo[100];
    uint paginas;
    float preco;
}Livro;

typedef struct aluno{
    char nome[100];
    int idade;
    Livro *livro_fav;
}Aluno;

//alocando memoria para criar um livro do tipo Struct LIVRO
Livro *create_livro(char *titulo, uint paginas, float preco){
    Livro *livro = (Livro *)calloc(1,sizeof(Livro));
    strcpy(livro->titulo, titulo);
    livro->paginas = paginas;
    livro->preco = preco;

    return livro;
}

void print_livro(Livro *livro){
    puts("### LIVRO ###\n");
    printf("Titulo : %s\n", livro->titulo);
    printf("Paginas : %d paginas\n", livro->paginas);
    printf("Preco : R$ %.2f\n", livro->preco);
}

void destroy_livro(Livro **ref){
    Livro *book = *ref;
    free(book);
    *ref = NULL;
}

Livro *copy_livro(Livro *livro){
    return create_livro(livro->titulo, livro->paginas, livro->preco);
}

Aluno *create_aluno(char *nome, int idade, Livro *livro_fav){
    Aluno *aluno = (Aluno *)calloc(1,sizeof(Aluno));
    strcpy(aluno->nome,nome);
    aluno->idade = idade;
    aluno->livro_fav = copy_livro(livro_fav);

    return aluno;
}

void print_aluno(Aluno *aluno){
    printf("Nome do aluno : %s\n", aluno->nome);
    printf("Idade : %d\n", aluno->idade);
    puts("LIVRO FAVORITO");
    puts("----------");
    print_livro(aluno->livro_fav);
    puts("\n");
}

void destroy_aluno(Aluno **aluno_ref){
    Aluno *aluno = *aluno_ref;
    destroy_livro(&aluno->livro_fav);
    free(aluno);
    *aluno_ref = NULL;
}

int main(){
    Livro *livro1 =  create_livro("Verity", 320, 70.99);
    print_livro(livro1);
    
    Aluno *franca = (Aluno *)calloc(1,sizeof(Aluno));
    
    franca = create_aluno("Franca", 18, livro1);
    puts("\n");
    print_aluno(franca);

    destroy_livro(&livro1);
    print_aluno(franca);
    destroy_aluno(&franca);

    return 0;
}
