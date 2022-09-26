#include <stdio.h>

int main(void) {
  float a, b, c;

  printf("Insira o valor de A: ");
  scanf("%f", &a);
  printf("Insira o valor de B: ");
  scanf("%f", &b);
  printf("Insira o valor de C: ");
  scanf("%f", &c);

  if (a > b && a > c)
    printf("A é o maior.");
  else if (b > c)
    printf("B é o maior.");
  else
    printf("C é o maior");
  
  return 0;
}
