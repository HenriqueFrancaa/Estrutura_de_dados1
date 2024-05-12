#include <stdio.h>

void validate(int vetor[], int *mn, int *mx, int sz){
    for(int i = 0; i < sz; i++){
        if(*(vetor + i) > *mx){
            *mx = *(vetor + i); 
        }
        if(*(vetor + i) < *mn){
            *mn = *(vetor + i);
        }
    }
}

int main(){
    int n,mn = 9999,mx = -9999;
    scanf("%d", &n);
    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    validate(v,&mn, &mx, n);
    printf("maior valor: %d\nmenor valor: %d\n", mx,mn);
    return 0;
}