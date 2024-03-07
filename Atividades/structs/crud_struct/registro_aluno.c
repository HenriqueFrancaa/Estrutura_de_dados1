#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned int uint;

typedef struct livro
{
    char titulo[100];
    uint paginas;
    float preco;
}livro;

typedef struct aluno
{
    char nome[100];
    int idade;
    livro *lfav;
}aluno;


//"Construtor" para livros
livro *create_livro(char *titulo, uint paginas, float preco){
    livro *book = (livro *)calloc(1,sizeof(livro)); 
    strcpy(book->titulo, titulo);
    book->paginas = paginas;
    book->preco = preco;
    return book;
}

void print_livro(const livro *book){
    printf("Titulo: %s\n", book->titulo);
    printf("Numero de paginas: %d\n", book->paginas);
    printf("Preço: %.2f\n", book->preco);
}

void destroy_livro(livro **livro_ref){
    livro *ref = *livro_ref;
    free(ref);
    *livro_ref = NULL;
}

int main(){
    livro *henrique = create_livro("Verity", 300, 83.99);
    print_livro(henrique);
    destroy_livro(&henrique);
    printf("A FUNÇÂO DESTROY funciounou?? %d\n", henrique == NULL);
    return 0;
}
