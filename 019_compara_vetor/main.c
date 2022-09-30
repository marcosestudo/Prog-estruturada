#include <stdio.h>
#define N 5

void preencheVetor(int *vet) {
  int i;
  for (i = 0; i < N; i ++) {
    printf("Insira o valor %d: ", i + 1);
    scanf("%d", &vet[i]);
  }
}

int comparaVetor(int *vet1, int *vet2) {
  int qtd = 0;
  int i;
  for (i = 0; i < N; i ++) {
    if (vet1[i] == vet2[i])
      qtd++;
  }
  return qtd;
}

int main(void) {
  int vet1[N], vet2[N];

  preencheVetor(vet1);
  preencheVetor(vet2);

  printf("iguais: %d", comparaVetor(vet1, vet2));
  
  return 0;
}
