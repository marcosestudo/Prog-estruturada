#include <stdio.h>
#include <stdlib.h>

struct NO {
	int info;
	struct NO *prox;
};
typedef struct NO lista;

int busca(lista *L, int elem, lista **pre);
void imprime(lista *L);
lista *insereElem(lista *L, int elem);
lista *removeElem(lista *L, int elem);

int main(void) {
	lista *L;

	L = (lista *)malloc(sizeof(lista));
	L->prox = NULL;

	return 0;
}