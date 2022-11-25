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
int busca(lista *L, int elem, lista *pre);

void mostra(lista *L);

void insere1(lista **L, int elem);
lista *insere2(lista *L, int elem);
void insereNoInicio1(lista **L, int elem);
lista *insereNoInicio2(lista *L, int elem);
void insereNofim1(lista **L, int elem);
lista *insereNofim2(lista *L, int elem);

void remove1(lista **L, int elem);
lista *remove2(lista *L, int elem);
int removePrimeiro(lista **L, int *removido);
int removeUltimo(lista **L, int *removido);

// concatena
// inverte
// intercala
// interseccao
// uniao
// diferenca
// ordena

//  __  __     _     ___   _  _
// |  \/  |   /_\   |_ _| | \| |
// | |\/| |  / _ \   | |  | .` |
// |_|  |_| /_/ \_\ |___| |_|\_|
int main(void) {
	lista *L;

	L = NULL;

	return 0;
}

//  ___ _   _ _  _  ___ ___  ___ ___ 
// | __| | | | \| |/ __/ _ \| __/ __|
// | _|| |_| | .` | (_| (_) | _|\__ \
// |_|  \___/|_|\_|\___\___/|___|___/
void mostra(lista *L) {
	if (L != NULL) {
		printf("%d|| ", L->info);
		if (L->prox != NULL) {
			mostra(L - prox);
		}
	}
}

int busca(lista *L, int elem, lista **pre) {
}