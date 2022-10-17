#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void populaLista(int n, int *lista) {
  int i;
  srand(time(NULL));

  for (i = 0; i < n; i++) {
    lista[i] = rand() % 100 + 1;
  }
}

void mostraLista(int n, int *lista) {
  int i;
  printf("----------------------\n");
  for (i = 0; i < n; i ++) {
    printf("%d ", lista[i]);
  }
  printf("\n----------------------\n");
}

int main(void) {
  int n = 10;
  
  int lista[n];
  
  populaLista(n, lista);

  mostraLista(n, lista);

  return 0;
}
