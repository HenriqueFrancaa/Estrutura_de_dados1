#include <stdio.h>

int main(){
    char key,choice;
    int num,count;
    long date;
    float yield;
    double price;
    printf("ENDEREÇO DE MEMORIA DE CADA VARIAVEL:\n");
    printf("&key = %p\n",&key);
    printf("&choice = %p\n", &choice);
    printf("&num = %p\n",&num);
    printf("&count = %p\n", &count);
    printf("&date = %p\n",&date);
    printf("&yield = %p\n", &yield);
    printf("&price = %p\n",&price);
    
    return 0;
}
