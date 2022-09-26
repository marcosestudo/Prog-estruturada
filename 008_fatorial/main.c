#include <stdio.h>
#define N 8

int main(void) {
  int fatorial = 1, i = 1;
  
  while (i <= N) {
    fatorial *= i;
    i++;
  }
  
  printf("%d! = %d", N, fatorial);
  
  return 0;
}
