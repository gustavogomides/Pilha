#include"pilha.h"
#include<stdio.h>
void pilha(tpilha *p){
    p->topo=-1;
}
void empilha(tpilha *p,int va){
        if(!pilhacheia(p)){
               p->dados[++p->topo]=va;
        }
        else return -1;
}
int desempilha(tpilha *p,int va){
        if(!pilhavazia(p)){
            return p->dados[p->topo--];
        }
        else return -1;
}
int pilhacheia(tpilha *p){
    return (p->topo>=MAX);
}
int pilhavazia(tpilha *p){
    return (p->topo==-1);
}
int topo(tpilha *p){
        return p->dados[p->topo];
}
void listadados(tpilha *p){
    int i;
    printf("\nImprimindo a pilha: \n");
    for(i=p->topo;i>=0;i--) printf("%d ",p->dados[i]);
}

