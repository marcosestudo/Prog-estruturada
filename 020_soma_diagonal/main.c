#include <stdio.h>
#define N 3

void preencheMatriz(int matriz[N][N]) {
  int i, j;
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("Insira o elemento [%d, %d]: ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);  
    }
  }
}

void printaMatriz(int matriz[N][N]) {
  int i, j;
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("%d ", matriz[i][j]);        
    }
    printf("\n");
  }
}

int somaDiagonal(int matriz[N][N]) {
  int i, j, soma = 0;
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      if (i == j)
        soma += matriz[i][j];
    }
  }
  return soma;
}

int main(void) {
  int matriz[N][N];

  preencheMatriz(matriz);

  printaMatriz(matriz);

  somaDiagonal(matriz);
  
  printf("soma diagonal: %d", somaDiagonal(matriz));
  
  return 0;
}
