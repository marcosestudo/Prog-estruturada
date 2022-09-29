#include <stdio.h>

int prod(int N) {
  if (N <= 0)
    return 1;
  else
    return prod(N - 2) * N;
}

int main(void) {
  int N;

  printf("Insira um número inteiro positivo: ");
  do {
    scanf("%d", &N);
  } while (N <= 0);

  if (N % 2 == 0)
    N--;
  
  printf("O produto é: %d", prod(N));
  
  return 0;
}
