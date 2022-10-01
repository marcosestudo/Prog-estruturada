#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void troca(int *px, int *py) {
  int aux;
  aux = *px;
  *px = *py;
  *py = aux;
}

int main (void) {
  int x = 1, y = 2;

  troca(&x, &y);

  printf("x: %d\ny: %d", x, y);
  
  return 0;
}
