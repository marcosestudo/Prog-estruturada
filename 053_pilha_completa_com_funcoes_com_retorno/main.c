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

// Mostra todos os elementos da pilha formatada
void mostraPilha(pilha *P);

int main(void) {
    pilha *P;
    int desempilhado;

    P = NULL;

    P = empilhaComRetorno(P, 10);
    P = empilhaComRetorno(P, 20);
    P = empilhaComRetorno(P, 30);
    P = empilhaComRetorno(P, 40);
    P = empilhaComRetorno(P, 50);

    mostraPilha(P);

    P = desempilhaComRetorno(P, &desempilhado);
    printf("desempilhado: %d\n", desempilhado);
    mostraPilha(P);
    
    P = desempilhaComRetorno(P, &desempilhado);
    printf("desempilhado: %d\n", desempilhado);
    mostraPilha(P);

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

pilha *desempilhaComRetorno(pilha *P, int *desempilhado) {
    pilha *lixo;

    *desempilhado = P->info;
    
    lixo = P;
    P = lixo->prox;
    free(lixo);

    return P;
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