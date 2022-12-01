#include <stdio.h>
#include <stdlib.h>

struct NO {
	int info;
	struct NO *prox;
};
typedef struct NO lista;

int busca(lista *L, int elem, lista **pre);
void imprime(lista *L);
void insereElem(lista *L, int elem);
void removeElem(lista *L, int elem);

int main(void) {
	lista *L;

	L = (lista *)malloc(sizeof(lista));
	L->prox = L;

	return 0;
}
