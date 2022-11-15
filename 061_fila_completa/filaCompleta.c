#include <stdio.h>
#include <stdlib.h>

struct NO {
	int info;
	struct NO *prox;
};
typedef struct NO fila;

void entraNaFila(fila **F, int elem);

// Funcoes que retornam o novo endereco da fila
fila *saiDaFilaComRetorno(fila *F, int *primeiroDaFila);

// Funcoes que modificam diretamente o endereco da fila
void saiDaFilaSemRetorno(fila **F, int *primeiroDaFila);

// Mostra todos os elementos da fila formatada
void mostraFila(fila *F);

// retorna 1 se encontrar, 0 se não
int buscaNaFila(fila *F, int elem);

int main(void) {
	fila *F;
	int primeiroDaFila;

	F = NULL;

	entraNaFila(&F, 10);
	entraNaFila(&F, 20);
	entraNaFila(&F, 30);
	entraNaFila(&F, 40);
	entraNaFila(&F, 50);

	mostraFila(F);
	printf("\n20 encontrado: %d\n", buscaNaFila(F, 20));

	F = saiDaFilaComRetorno(F, &primeiroDaFila);
	printf("prinmeiro da fila: %d\n", primeiroDaFila);
	mostraFila(F);
	printf("\n20 encontrado: %d\n", buscaNaFila(F, 20));

	F = saiDaFilaComRetorno(F, &primeiroDaFila);
	printf("prinmeiro da fila: %d\n", primeiroDaFila);
	mostraFila(F);
	printf("\n20 encontrado: %d\n", buscaNaFila(F, 20));

	return 0;
}

void entraNaFila(fila **F, int elem) {
	fila *aux, *el;

	el = (fila *)malloc(sizeof(fila *));
	el->info = elem;

	if ((*F) == NULL) {
		(*F) = el;
	} else {
		aux = (*F);
		while (aux->prox != NULL) {
			aux = aux->prox;
		}

		aux->prox = el;
	}
}

void mostraFila(fila *F) {
	if (F != NULL) {
		printf("|%d||", F->info);
		if (F->prox != NULL) {
			printf("->");
			mostraFila(F->prox);
		}
	}
}
int buscaNaFila(fila *F, int elem) {
	while (F != NULL) {
		if (F->info == elem) {
			return 1;
		}
		F = F->prox;
	}
	return 0;
}

fila *saiDaFilaComRetorno(fila *F, int *primeiroDaFila) {
	fila *lixo;

	lixo = F;
	F = lixo->prox;

	free(lixo);

	return F;
}

void saiDaFilaSemRetorno(fila **F, int *primeiroDaFila) {
	fila *lixo;

    *primeiroDaFila = (*F)->info;

	lixo = (*F);
	(*F) = lixo->prox;

	free(lixo);
}
