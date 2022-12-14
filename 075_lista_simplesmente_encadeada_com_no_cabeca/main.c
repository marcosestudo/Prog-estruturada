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

	L = insereElem(L, 10);
	printf("\n");
	imprime(L);
	L = insereElem(L, 30);
	printf("\n");
	imprime(L);
	L = insereElem(L, 20);
	printf("\n");
	imprime(L);
	L = insereElem(L, 50);
	printf("\n");
	imprime(L);
	L = insereElem(L, 40);
	printf("\n");
	imprime(L);
    L = removeElem(L, 40);
	printf("\n");
	imprime(L);
    L = removeElem(L, 30);
	printf("\n");
	imprime(L);
    L = removeElem(L, 40);
	printf("\n");
	imprime(L);
    L = removeElem(L, 10);
	printf("\n");
	imprime(L);
    L = removeElem(L, 20);
	printf("\n");
	imprime(L);
    L = removeElem(L, 50);
	printf("\n");
	imprime(L);

	return 0;
}

// trexos comentados pertencem a implementacao sem no cabeca
int busca(lista *L, int elem, lista **pre) {
	lista *aux, *preL;

	// aux = L;
	// preL = NULL;
	aux = L->prox;
	preL = L;

	while (aux != NULL && elem > aux->info) {
		preL = aux;
		aux = aux->prox;
	}
	(*pre) = preL;

	if (aux != NULL && aux->info == elem) {
		return 1;
	}
	return 0;
}

void imprime(lista *L) {
	// if (L != NULL) {
	//     printf("|%d|| ", L->info);
	//     if (L->prox != NULL) {
	//         imprime(L->prox);
	//     }
	// }

	if (L->prox != NULL) {
		printf("|%d|| ", L->prox->info);
		if (L->prox->prox != NULL) {
			imprime(L->prox);
		}
	} else {
        printf("Lista vazia");
    }
    
}

lista *insereElem(lista *L, int elem) {
	lista *el, *pre;

	if (!busca(L, elem, &pre)) {
		el = (lista *)malloc(sizeof(lista));
		el->info = elem;
		// if (L == NULL || pre == NULL) {
		//     el->prox = L;
		//     L = el;
		// } else {
		el->prox = pre->prox;
		pre->prox = el;
		// }
	}

	return L;
}

lista *removeElem(lista *L, int elem) {
	lista *lixo, *pre;

	if (busca(L, elem, &pre)) {
		// if (L->info == elem) {
		//     lixo = L;
		//     L = lixo->prox;
		// } else {
		lixo = pre->prox;
		pre->prox = lixo->prox;
		// }
		free(lixo);
	}

	return L;
}