#include <stdio.h>
#define MAX 100

void soma(float x[MAX][MAX], float y[MAX][MAX], float z[MAX][MAX], int n) {
  int i, j;

  for (i = 0; i < n; i ++) {
    for (j = 0; j < n; j++) {
      z[i][j] = x[i][j] + y[i][j];
    }
  }
}

void sub(float x[MAX][MAX], float y[MAX][MAX], float z[MAX][MAX], int n) {
  int i, j;

  for (i = 0; i < n; i ++) {
    for (j = 0; j < n; j++) {
      z[i][j] = x[i][j] - y[i][j];
    }
  }
}  

void busca(float matriz[MAX][MAX], float buscado, int n) {
  int i, j, encontrado = 0;
  
  for (i = 0; i < n; i ++) {
    for (j = 0; j < n; j++) {
      if (matriz[i][j] == buscado) {
        printf ("Encontrado na posição: [%d, %d]", i + 1, j + 1);
        encontrado = 1;
      }
    }
  }
  if (encontrado == 0) {
    printf("Não encontrado");
  }
}

void mostra(float matriz[MAX][MAX], int n) {
  int i, j;
  
  for (i = 0; i < n; i ++) {
    for (j = 0; j < n; j++) {
      printf ("%.2f ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main(void) {
  int i, j, n, escolha;
  float x[MAX][MAX], y[MAX][MAX], z[MAX][MAX], numBusca;

  printf("Insira o valor de n: ");
  scanf("%d", &n);

  printf("Preenchendo matriz X...\n");
  for (i = 0; i < n; i ++) {
    for (j = 0; j < n; j++) {
      printf("Insira o valor da posição [%d, %d]: ", i + 1, j + 1);
      scanf("%f", &x[i][j]);
    } 
  }

  printf("Preenchendo matriz Y...\n");
  for (i = 0; i < n; i ++) {
    for (j = 0; j < n; j++) {
      printf("Insira o valor da posição [%d, %d]: ", i + 1, j + 1);
      scanf("%f", &y[i][j]);
    } 
  }
    
  printf("Escolha uma opção\n");
  printf("1: Soma\n");
  printf("2: Subtração\n");
  printf("3: Busca\n");
  printf("4: Print\n");
  scanf("%d", &escolha);
  
  // mostrando as matrizes pra debugar
  printf("X\n");
  mostra(x, n);
  printf("Y\n");
  mostra(y, n);
  
  switch (escolha) {
    case 1:
      soma(x, y, z, n);
      printf("Soma\n");
      mostra(z, n);
      break;
    case 2:
      sub(x, y, z, n);
      printf("Subtração\n");
      mostra(z, n);
      break;
    case 3:
      printf("Em qual matriz deseja fazer a busca? (1 ou 2) ");
      scanf("%d", &escolha);
      switch (escolha) {
        case 1:
          printf("Qual número deseja buscar? ");
          scanf("%f", &numBusca);
          busca(x, numBusca, n);
          break;
        case 2:
          printf("Qual número deseja buscar? ");
          scanf("%f", &numBusca);
          busca(y, numBusca, n);
          break;
        default:
          printf("Opção inválida");
      }
      break;
    case 4:
      printf("Qual matriz deseja printar? (1 ou 2) ");
      scanf("%d", &escolha);
      switch (escolha) {
        case 1:
          mostra(x, n);
          break;
        case 2:
          mostra(y, n);
          break;
        default:
          printf("Opção inválida");
      }
      break;
    default:
      printf("Opção inválida");
  }
  
  return 0;
}