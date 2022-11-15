#include <stdio.h>
#include <stdlib.h>

struct NO {
	int info;
	struct NO *prox;
};
typedef struct NO pilha;

// Funcoe que retornam o novo endereco da pilha
pilha *empilhaComRetorno(pilha *P, int elem);
pilha *desempilhaComRetorno(pilha *P, int *desempilhado);

// Funcoes que modificam diretamente o endereco da pilha
void empilhaSemRetorno(pilha **P, int elem);
void desempilhaSemRetorno(pilha **P, int *desemplihado);

// Mostra todos os elementos da pilha formatada
void mostraPilha(pilha *P);

// retorna 1 se encontrar, 0 se não
int buscaNaPilha(pilha *P, int elem);

int main(void) {
	pilha *P;
	int desempilhado;

	P = NULL;

	empilhaSemRetorno(&P, 10);
	empilhaSemRetorno(&P, 20);
	empilhaSemRetorno(&P, 30);
	empilhaSemRetorno(&P, 40);
	empilhaSemRetorno(&P, 50);

	mostraPilha(P);
	printf("40 encontrado: %d\n", buscaNaPilha(P, 40));

	desempilhaSemRetorno(&P, &desempilhado);
	printf("desempilhado: %d\n", desempilhado);
	mostraPilha(P);
	printf("40 encontrado: %d\n", buscaNaPilha(P, 40));

	desempilhaSemRetorno(&P, &desempilhado);
	printf("desempilhado: %d\n", desempilhado);
	mostraPilha(P);
	printf("40 encontrado: %d\n", buscaNaPilha(P, 40));

	return 0;
}

pilha *empilhaComRetorno(pilha *P, int elem) {
    pilha *el;

    el = (pilha *) malloc(sizeof(pilha *));

    el->info = elem;
    el->prox = P;
    P = el;

    return P;
}

void empilhaSemRetorno(pilha **P, int elem) {
	pilha *el;

	el = (pilha *)malloc(sizeof(pilha *));
    el->info = elem;
    el->prox = (*P);
    (*P) = el;
}

pilha *desempilhaComRetorno(pilha *P, int *desempilhado) {
    pilha *lixo;

    *desempilhado = P->info;
    
    lixo = P;
    P = lixo->prox;
    free(lixo);

    return P;
}

void desempilhaSemRetorno(pilha **P, int *desempilhado) {
    pilha *lixo;
    
    *desempilhado = (*P)->info;
    lixo = (*P);
    (*P) = lixo->prox;
    free(lixo);
}

void mostraPilha(pilha *P) {
	if (P != NULL) {
		printf("|%d|\n", P->info);
		if (P->prox != NULL) {
			mostraPilha(P->prox);
		}
	} else {
		printf("Pilha vazia");
	}
}

int buscaNaPilha(pilha *P, int elem) {
	if (P != NULL) {
		while (P != NULL) {
			if (P->info == elem) {
				return 1;
			}
			P = P->prox;
		}
	} else {
		printf("Pilha vazia");
	}

	return 0;
}
