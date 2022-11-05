#include <stdio.h>

#define MAX 5

struct FILA {
  int dado[MAX];
  int inicio, fim, total;
};
typedef struct FILA fila;

void inserir (fila *F, int elemento) {
  if (F -> total < MAX) {
    // printf("\ninicio: %d fim: %d\n", F -> inicio, F -> fim);
    F -> dado[F -> fim] = elemento;
    F -> fim ++;
    F -> fim = F -> fim % MAX;
    F -> total ++;
  } else {
    printf("\nfila cheia\n");
  }
}

int remover (fila *F) {
  int num;
  if (F -> total > 0) {
    num = F -> dado[F -> inicio];
    F -> inicio++;
    F -> total--;
  }
  return num;
}

void show (fila F) {
  int i;
  printf("\ninicio: %d", F.inicio);
  printf("\nfim: %d\n", F.fim);
  if (F.total != 0) {
    for (i = F.inicio; i < F.inicio + F.total; i ++) {
      printf("%d ", F.dado[i % MAX]);
    }
  } else {
    printf("Fila vazia");
  }
}

int main (void) {
  fila F;
  F.inicio = 0; 
  F.fim = 0;
  F.total = 0;

  inserir(&F, 1);
  inserir(&F, 2);
  inserir(&F, 3);
  inserir(&F, 4);
  inserir(&F, 5);
  inserir(&F, 6);

  show(F);
  printf("\n");

  printf("\n------removendo------\n");
  printf("removido: %d", remover(&F));
  show(F);
  printf("\n\nremovido: %d", remover(&F));
  show(F);
  printf("\n---------------------\n");

  printf("\n------inserindo------");
  inserir(&F, 100);
  show(F);
  inserir(&F, 200);
  show(F);
  inserir(&F, 300);
  printf("---------------------\n");
  
  show(F);
  
  return 0;
}