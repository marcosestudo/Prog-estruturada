#include <stdio.h>
#define N 2

int main(void) {
  int soma, i = 0;

  for (i = 0; i < 200; i++)
    if (i % N == 0)
      soma += i;

  printf("Soma: %d", soma);
  
  return 0;
}
