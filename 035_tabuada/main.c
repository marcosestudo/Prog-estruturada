#include <stdio.h>
#define MAX 50

void tabuada(int n, int matriz[MAX][MAX]) {
  int i, j, x;

  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++) {
      matriz[i][j] = i * j;
    } 
  }
}

int main(void) {
  int i, j, x, n, print, matriz[MAX][MAX];

  printf("Insira o valor de N: ");
  scanf("%d", &n);
  n++;
  
  tabuada(n, matriz);

  printf("Deseja imprimir quantas vezes? (digite -1 para sair): ");
  scanf("%d", &x);

  for(print = 0; print < x; print++)  {
    for (i = 1; i < n; i++){
      for (j = 1; j < n; j++) {
        printf("%d ", matriz[i][j]);
      } 
      printf("\n");
    } 
    printf("\n");
  }
  
  return 0;
}