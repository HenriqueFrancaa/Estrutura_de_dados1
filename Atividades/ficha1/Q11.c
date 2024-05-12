#include <stdio.h>

void conversao(int mnts, int *h, int *m){
    *h += mnts/60;
    *m += mnts%60;
}

int main(){
    int h,m,mnts;
    scanf("%d",&mnts);
    conversao(mnts,&h,&m);
    printf("%d horas e %d minutos\n", h,m);
    return 0; 
}