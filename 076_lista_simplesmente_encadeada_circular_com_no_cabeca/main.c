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

	insereElem(L, 10);
	printf("\n");
	imprime(L, L);
	insereElem(L, 30);
	printf("\n");
	imprime(L, L);
	insereElem(L, 20);
	printf("\n");
	imprime(L, L);
	insereElem(L, 50);
	printf("\n");
	imprime(L, L);
	insereElem(L, 40);
	printf("\n");
	imprime(L, L);
	removeElem(L, 40);
	printf("\n");
	imprime(L, L);
	removeElem(L, 30);
	printf("\n");
	imprime(L, L);
	removeElem(L, 40);
	printf("\n");
	imprime(L, L);
	removeElem(L, 10);
	printf("\n");
	imprime(L, L);
	removeElem(L, 20);
	printf("\n");
	imprime(L, L);
	removeElem(L, 50);
	printf("\n");
	imprime(L, L);

	return 0;
}

int busca(lista *L, int elem, lista **pre) {
	lista *aux, *preL;

	aux = L->prox;
	preL = L;

	while (aux != L && elem > aux->info) {
		preL = aux;
		aux = aux->prox;
	} 

	(*pre) = preL;

	if (aux != L && aux->info == elem) {
		return 1;
	}
	return 0;
}


void imprime(lista *L, lista *inicio) {
	// lista *aux;

	// aux = L->prox;

	// while (aux != L) {
	// 	printf("|%d|| ", aux->info);
	// 	aux = aux->prox;
	// }
	if (L->prox != inicio) {
		printf("|%d|| ", L->prox->info);
		if (L->prox->prox != inicio) {
			imprime(L->prox, inicio);
		}
	}
}

void removeElem(lista *L, int elem) {
	lista *lixo, *pre;

	if (busca(L, elem, &pre)) {
        lixo = pre->prox;
        pre->prox = lixo->prox;
        free(lixo);
    }
}