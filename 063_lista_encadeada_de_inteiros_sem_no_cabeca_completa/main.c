#include <stdio.h>
#include <stdlib.h>

struct NO {
	int info;
	struct NO *prox;
};
typedef struct NO lista;

//  ___ ___  ___ _____ ___ _____ ___ ___  ___  ___
// | _ \ _ \/ _ \_   _/ _ \_   _|_ _| _ \/ _ \/ __|
// |  _/   / (_) || || (_) || |  | ||  _/ (_) \__ \
// |_| |_|_\\___/ |_| \___/ |_| |___|_|  \___/|___/
int busca(lista *L, int elem, lista **pre);

void mostra(lista *L);

void insere1(lista **L, int elem);
lista *insere2(lista *L, int elem);
void insereNoInicio1(lista **L, int elem);
lista *insereNoInicio2(lista *L, int elem);
void insereNoFim1(lista **L, int elem);
lista *insereNoFim2(lista *L, int elem);

void remove1(lista **L, int elem);
lista *remove2(lista *L, int elem);
int removePrimeiro(lista **L);
int removeUltimo(lista **L);

// concatena
// concatena recursiva
// inverte
// intercala
// interseccao
// uniao
// diferenca
// ordena
// insereSublista

//  __  __     _     ___   _  _
// |  \/  |   /_\   |_ _| | \| |
// | |\/| |  / _ \   | |  | .` |
// |_|  |_| /_/ \_\ |___| |_|\_|
int main(void) {
	lista *L;

	L = NULL;

	printf("Inserindo ordenado\n");
	insere1(&L, 50);
	L = insere2(L, 10);
	insere1(&L, 40);
	L = insere2(L, 30);
	insere1(&L, 20);
	L = insere2(L, 20);
	mostra(L);

	printf("\nInserindo no inicio");
	L = insereNoInicio2(L, 1);
	insereNoInicio1(&L, 2);
	L = insereNoInicio2(L, 3);
	insereNoInicio1(&L, 4);

	printf("\n");
	mostra(L);

	printf("\nRemovendo");
	remove1(&L, 40);
	printf("\n");
	mostra(L);
	L = remove2(L, 10);
	printf("\n");
	mostra(L);
	remove1(&L, 40);
	printf("\n");
	mostra(L);
	L = remove2(L, 30);
	printf("\n");
	mostra(L);
	L = remove2(L, 20);
	printf("\n");
	mostra(L);
	remove1(&L, 50);
	printf("\n");
	mostra(L);

    printf("\nInserindo no fim");
    insereNoFim1(&L, 100);
    printf("\n");
    mostra(L);
    insereNoFim1(&L, 200);
    printf("\n");
    mostra(L);
    insereNoFim1(&L, 300);    
    printf("\n");
    mostra(L);
    
	printf("\nPopped: %d\n", removePrimeiro(&L));
	mostra(L);
	printf("\nRemovido: %d\n", removeUltimo(&L));
	mostra(L);
	printf("\nPopped: %d\n", removePrimeiro(&L));
	mostra(L);
	printf("\nRemovido: %d\n", removeUltimo(&L));
	mostra(L);
	printf("\nPopped: %d\n", removePrimeiro(&L));
    mostra(L);
    
	return 0;
}

//  ___ _   _ _  _  ___ ___  ___ ___   ___   _   ___ ___ ___   _   ___
// | __| | | | \| |/ __/ _ \| __/ __| | _ ) /_\ / __|_ _/ __| /_\ / __|
// | _|| |_| | .` | (_| (_) | _|\__ \ | _ \/ _ \\__ \| | (__ / _ \\__ \
// |_|  \___/|_|\_|\___\___/|___|___/ |___/_/ \_\___/___\___/_/ \_\___/
void mostra(lista *L) {
	if (L != NULL) {
		printf("|%d|| ", L->info);
		if (L->prox != NULL) {
			mostra(L->prox);
		}
	} else {
		printf("Lista vazia");
	}
}

int busca(lista *L, int elem, lista **pre) {
	lista *aux, *preL;
	aux = L;
	preL = NULL;
	while ((aux != NULL) && (elem > aux->info)) {
		preL = aux;
		aux = aux->prox;
	}
	(*pre) = preL;
	if ((aux != NULL) && (elem == aux->info)) {
		return 1;
	}
	return 0;
}

void insere1(lista **L, int elem) {
	lista *pre, *el;
	if (!busca((*L), elem, &pre)) {
		el = (lista *)malloc(sizeof(lista));
		el->info = elem;
		if (((*L) == NULL) || pre == NULL) {
			el->prox = (*L);
			(*L) = el;
		} else {
			el->prox = pre->prox;
			pre->prox = el;
		}
	}
}

lista *insere2(lista *L, int elem) {
	lista *pre, *el;
	if (!busca(L, elem, &pre)) {
		el = (lista *)malloc(sizeof(lista));
		el->info = elem;
		if ((L == NULL) || (pre == NULL)) {
			el->prox = L;
			L = el;
		} else {
			el->prox = pre->prox;
			pre->prox = el;
		}
	}
	return L;
}

void insereNoInicio1(lista **L, int elem) {
	lista *el;
	el = (lista *)malloc(sizeof(lista *));
	el->info = elem;
	el->prox = (*L);
	(*L) = el;
}

lista *insereNoInicio2(lista *L, int elem) {
	lista *el;
	el = (lista *)malloc(sizeof(lista));
	el->info = elem;
	el->prox = L;
	L = el;
	return L;
}

void insereNoFim1(lista **L, int elem) {
	lista *aux, *el;

	aux = (*L);
    el = (lista *)malloc(sizeof(lista));
    el->info = elem;
	el->prox = NULL;
    
	if (aux != NULL) {
		while (aux->prox != NULL) {
			aux = aux->prox;
		}
		aux->prox = el;
	} else {
        (*L) = el;
    }
}

void remove1(lista **L, int elem) {
	lista *pre, *lixo;
	if (busca((*L), elem, &pre)) {
		if ((*L)->info == elem) {
			lixo = (*L);
			(*L) = lixo->prox;
		} else {
			lixo = pre->prox;
			pre->prox = lixo->prox;
		}
		free(lixo);
		printf("\nRemovido: %d", elem);
	} else {
		printf("\nElemento nao encontrado: %d", elem);
	}
}

lista *remove2(lista *L, int elem) {
	lista *pre, *lixo;
	if (busca(L, elem, &pre)) {
		if (L->info == elem) {
			lixo = L;
			L = lixo->prox;
		} else {
			lixo = pre->prox;
			pre->prox = lixo->prox;
		}
		free(lixo);
		printf("\nRemovido: %d", elem);
	} else {
		printf("\nElemento nao encontrado: %d", elem);
	}
	return L;
}

int removePrimeiro(lista **L) {
	lista *lixo;
	int popped;

	if ((*L) != NULL) {
		popped = (*L)->info;
		lixo = (*L);
		(*L) = (*L)->prox;
		free(lixo);
	} else {
		printf("\nLista vazia");
	}

	return popped;
}

int removeUltimo(lista **L) {
	lista *pre, *lixo;
	int removido;

	if ((*L) != NULL) {
		lixo = (*L);
		pre = NULL;

		while (lixo->prox != NULL) {
			pre = lixo;
			lixo = lixo->prox;
		}

		if (pre == NULL) {
			(*L) = NULL;
		} else {
			pre->prox = NULL;
		}
		removido = lixo->info;
		free(lixo);
	} else {
		printf("\nLista vazia");
	}

	return removido;
}

//  ___  ___ ___   _   ___ ___ ___  ___ 
// |   \| __/ __| /_\ | __|_ _/ _ \/ __|
// | |) | _|\__ \/ _ \| _| | | (_) \__ \
// |___/|___|___/_/ \_\_| |___\___/|___/
// concatena
// concatena recursiva
// inverte
// intercala
// interseccao
// uniao
// diferenca
// ordena
// insereSublista