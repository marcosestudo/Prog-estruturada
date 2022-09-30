#include <stdio.h>
#define N 10

void preencheVetor(int *vet) {
  int i;
  for (i = 0; i < N; i ++) {
    printf("Insira o valor %d: ", i + 1);
    scanf("%d", &vet[i]);
  }
}

float mediaVetor(int *vet) {
  float soma = 0, media;
  int i;
  for (i = 0; i < N; i ++) {
    soma += (float)vet[i];
  }
  return soma / N;
}

int main(void) {
  int vet[N];

  preencheVetor(vet);

  printf("media: %.2f", mediaVetor(vet));
  
  return 0;
}
