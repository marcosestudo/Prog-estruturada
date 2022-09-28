#include <stdio.h>

int main(void) {
  float num;

  do {
    printf("Digite um número positivo: ");
    scanf("%f", &num);    
  } while (num > 0);  
  
  return 0;
}
