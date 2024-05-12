#include <stdio.h>
#include <string.h>

int main(){
    char key,choice;
    int num,count;
    long date;
    float yield;
    double price;
    printf("ENDEREÇO DE MEMORIA DE CADA VARIAVEL:\n");
    printf("&key = %p\nQUANTIDADE DE BYTES: %ld\n",&key,sizeof(key));
    printf("&choice = %p\nQUANTIDADE DE BYTES: %ld\n", &choice,sizeof(choice));
    printf("&num = %p\nQUANTIDADE DE BYTES: %ld\n",&num, sizeof(num));
    printf("&count = %p\nQUANTIDADE DE BYTES: %ld\n", &count, sizeof(count));
    printf("&date = %p\nQUANTIDADE DE BYTES: %ld\n",&date, sizeof(date));
    printf("&yield = %p\nQUANTIDADE DE BYTES: %ld\n", &yield, sizeof(yield));
    printf("&price = %p\nQUANTIDADE DE BYTES: %ld\n",&price, sizeof(price));
    
    return 0;
}
