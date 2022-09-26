#include <stdio.h>
#define N 2

int main(void) {
  int soma, i = 0;

  while (i < 200) {
    if (i % N == 0)
      soma += i;
    i++;
  }
  
  printf("Soma: %d", soma);
  
  return 0;
}
