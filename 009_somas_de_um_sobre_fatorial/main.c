/* Faça um programa que calcule o valor de E. 
E = 1 + 1/(1!) + 1/(2!) + 1/(3!) + ... + 1/(N!) */


#include <stdio.h>
#define N 3

int main(void) {
  float fatorial = 1, i = 1, j = 1, result = 0;
  
  while (i <= N) {
    fatorial = 1;
    while (j <= i) {
      fatorial *= j;
      j++;
    }
    j = 1;
    result += 1 / fatorial;
    i++;
  }
  
  printf("E = %.2f", result);
  
  return 0;
}
