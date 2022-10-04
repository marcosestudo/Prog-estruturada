#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define N 10


void dado (int vet[N], int n) {
  int i;
  
  for (i = 0; i < n; i++) {
    vet[i] = rand() % 6 + 1;
  }
}

int main (void) {
  int x, i, vet[N];
  
  srand(time(NULL));
  dado(vet, N);

  for (i = 0; i < N; i++) {
    printf("%d ", vet[i]);
  }
  
  return 0;
}
