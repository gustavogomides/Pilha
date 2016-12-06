#define MAX 10
struct pilha{
    int topo;
    int dados[MAX];
};
typedef struct pilha tpilha;
int pilhacheia(tpilha *p);
int pilhavazia(tpilha *p);
void pilha(tpilha *p);
void empilha(tpilha *p,int va);
int desempilha(tpilha *p,int va);
int topo(tpilha *p);
void listadados(tpilha *p);
