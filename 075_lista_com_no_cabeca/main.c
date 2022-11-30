#include <stdio.h>
#include <stdlib.h>

struct NO {
	int info;
	struct NO *prox;
};
typedef struct NO lista;

int main(void) {
	lista *L;

	L = (lista *)malloc(sizeof(lista));
	L->prox = NULL;

	return 0;
}