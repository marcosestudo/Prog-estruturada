#include <stdio.h>
#include <stdlib.h>

struct NO {
	int info;
	struct NO *prox;
	struct NO *ant;
};
typedef struct NO lista;

int busca(lista *L, int elem, lista **pre);
void imprimeCrescente(lista *L, lista *inicio);
void imprimeDecrescente(lista *L, lista *inicio);
void insereElem(lista *L, int elem);
void removeElem(lista *L, int elem);

int main(void) {
	lista *L;

	L = (lista *)malloc(sizeof(lista));
	L->prox = L;
	L->ant = L;

	return 0;
}