#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void populaLista(int lista[N][N]) {
  int i, j;
  
  srand(time(NULL));
  
  for(i = 0; i < N; i ++) {
    for(j = 0; j < N; j ++) {
      lista[i][j] = rand() %10 + 1;
    }
  }
}

void mostraLista(int lista[N][N]) {
  int i, j;
  for (i = 0; i < N; i ++) {
    for(j = 0; j < N; j ++) {
      printf("%d ", lista[i][j]);
    }
    printf("\n");
  }
}

void ordenaLista(int lista[N][N]) {
  int i, j, k, aux;
  for (i = 0; i < N; i ++) {
    for (k = 0; k < N; k ++) {
      for(j = 0; j < N - 1; j ++) {
        if(lista[i][j] > lista[i][j + 1]) {
          aux = lista[i][j];
          lista[i][j] = lista[i][j + 1];
          lista[i][j + 1] = aux;
        }
      }
    }
  }
}

void inverteLista(int lista[N][N]) {
  int i, j, aux[N][N];

  for (i = 0; i < N; i ++) {
    for(j = N - 1; j >= 0; j --) {
      aux[i][j] = lista[i][N - j - 1];
    }
  }

  for (i = 0; i < N; i ++) {
    for(j = 0; j < N; j ++) {
      lista[i][j] = aux[i][j]; 
    }
  }
}

int main(void) {
  int lista[N][N];
  int lista2[N];

  populaLista(lista);

  mostraLista(lista);

  ordenaLista(lista);

  printf("\n");

  mostraLista(lista);

  inverteLista(lista);

  printf("\n");

  mostraLista(lista);
  
  return 0;
}
