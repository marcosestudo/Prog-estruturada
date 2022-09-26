#include <stdio.h>

int main(void) {

  float base, altura, area;

  printf("Digite a base do triângulo: ");
  scanf("%f", &base);

  printf("Digite o altura do triângulo: ");
  scanf("%f", &altura);

  area = (base * altura) / 2;
  printf("A área do triângulo é %.2f", area);  
  
  return 0;
}
