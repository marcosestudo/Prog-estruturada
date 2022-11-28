#include <stdio.h>
#include <stdlib.h>

struct NO {
	int info;
	struct NO *prox;
};
typedef struct NO fila;

int main(void) {
	return 0;
}

void insereElem(fila **inicio, fila **final, int elem){
	fila *el;

	el = (fila*) malloc(sizeof(fila));
	el->info = elem;
	el->prox = NULL;
	
	if ((*inicio) == NULL)
		(*inicio) = el;
	else
		(*final)->prox = el;
	
	(*final) = el;
}

fila *removeElem(fila *inicio){
	fila *lixo;
	
	if (inicio != NULL) {
		lixo = inicio;
		inicio = inicio->prox;
		free(lixo);
	}
	
	return inicio;
}