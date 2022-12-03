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

void imprimeCrescente(lista *L, lista *inicio) {
	if (L->prox != inicio) {
		printf("||%d|| ", L->prox->info);
		if (L->prox->prox != inicio) {
			imprimeCrescente(L->prox, inicio);
		}
	}
}

void imprimeDecrescente(lista *L, lista *inicio) {
	if (L->ant != inicio) {
		printf("||%d|| ", L->ant->info);
		if (L->ant->ant != inicio) {
			imprimeDecrescente(L->ant, inicio);
		}
	}
}

void insereElem(lista *L, int elem) {
	lista *pre, *el;

	if (!busca(L, elem, &pre)) {
		el = (lista *)malloc(sizeof(lista));
		el->info = elem;
		el->prox = pre->prox;
		el->ant = pre;
		pre->prox->ant = el;
		pre->prox = el;
	}
}

void removeElem(lista *L, int elem) {
	lista *lixo, *pre;

	if (busca(L, elem, &pre)) {
		lixo = pre->prox;
		pre->prox = lixo->prox;
		lixo->prox->ant = lixo->ant;
        free(lixo);
	}
}