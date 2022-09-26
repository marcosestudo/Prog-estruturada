#include <stdio.h>

int main(void) {
  float grauC, grauF;
  printf("Digite a temperatura em Farenheit: ");
  scanf("%f", &grauF);
  
  grauC = (grauF - 32 / 9 * 5);

  printf("%.2f graus Celsius", grauC);
  
  return 0;
}