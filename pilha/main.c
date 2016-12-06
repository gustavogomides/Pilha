#include"pilha.h"
#include<stdio.h>
int main(){
    tpilha qqq,*v=&qqq;
    int n,q=1,r;
    printf("Digite o numero decimal: ");
    scanf("%d",&n);
    pilha(v);
    while(q){
        r=n%2;
        n=n/2;
        if(n<2){
            empilha(v,r);
            empilha(v,n);
            q=0;
        }
        else empilha(v,r);
    }
    listadados(v);
}
