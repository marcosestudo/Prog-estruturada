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