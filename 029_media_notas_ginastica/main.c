#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define QTD 30
#define TAM 6

float mediaNota(float notas[TAM]){
  int i, maior = 0, menor = 0;
  float soma = 0, media;

  for (i = 1; i < TAM; i++) {
    if (notas[i] >= notas[maior]) {
      maior = i;
    }
    if (notas[i] < notas[menor]) {
      menor = i;
    }
  }

  notas[maior] = 0;
  notas[menor] = 0;

  printf("Notas: ");
  for (i = 0; i < TAM; i++) {
    printf("%.2f ", notas[i]);
  }
  printf("\n");

  for (i = 0; i < TAM; i ++) {
    soma += notas[i];
  }

  media = soma / (TAM - 2);
  
  return media;
}

int main (void) {
  int i, j;
  float notas[TAM];

  for (i = 0; i < QTD; i ++) {
    for (j = 0; j < TAM; j++) {
      printf("Insira a nota %d: ", j + 1);
      scanf("%f", &notas[j]);
    }
    printf("Média: %.2f\n", mediaNota(notas));
  }
  
  return 0;
}
