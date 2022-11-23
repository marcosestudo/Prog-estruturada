#include <stdio.h>
#include <stdlib.h>

struct NO {
    int info;    
    struct NO *prox;
};
typedef struct NO lista;

void mostra(lista *L);

int busca(lista *L, int elem, lista **pre);

void insere1(lista **L, int elem);
lista *insere2(lista *L, int elem);

void remove1(lista **L, int elem);
lista *remove2(lista *L, int elem);
int removePrimeiro(lista **L, int *removido);
int removeUltimo(lista **L, int *removido);

 //  __  __     _     ___   _  _ 
 // |  \/  |   /_\   |_ _| | \| |
 // | |\/| |  / _ \   | |  | .` |
 // |_|  |_| /_/ \_\ |___| |_|\_|
int main(void) {
    lista *L;
    
    return 0;
}
