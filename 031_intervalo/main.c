#include <stdio.h>

void intervalo(int i, int j, int k) {
  if (i <= j && k > 0) {
    printf("%d ", i);    
    return intervalo(i + k, j, k);
  }
}

int main (void) {
  int i, j, k;

  printf("Insira o valor de I: ");
  scanf("%d", &i);

  printf("Insira o valor de J: ");
  scanf("%d", &j);

  printf("Insira o valor de K: ");
  scanf("%d", &k);

  intervalo(i, j, k);
  
  return 0; 
}
