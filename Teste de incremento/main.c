#include <stdio.h>

int main(void) {
  int x, y;
  
  y = 1;
  x = y++; /* primeiro atribui, depois incrementa */
  printf("x = %d, y = %d\n", x, y);

  y = 1;
  x = ++y; /* primeiro incrementa, depois atribui */
  printf("x = %d, y = %d\n", x, y);
  
  return 0;
}
