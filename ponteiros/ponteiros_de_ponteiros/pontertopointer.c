
#include <stdio.h>

int main(){
    int a = 10;
    int *p1 = &a; // ponteiro de inteiros
    int **p2 = &p1; // ponteiro para ponteiros de inteiro

    printf("&a = %p, a = %d\n", &a,a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1,p1,*p1);
    printf("&p2 = %p, p2 = %p, *p2 = %p , **p2 = %d\n",  &p2,p2,*p2,**p2);
    **p2 = 99;
    printf("\ndepois de ter feito as alterações:\n"); //dessa forma, consigo alterar a variavel 'a' através do seu endereço

    printf("&a = %p, a = %d\n", &a,a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1,p1,*p1);
    printf("&p2 = %p, p2 = %p, *p2 = %p , **p2 = %d\n",  &p2,p2,*p2,**p2);

    return 0;

}