#include <stdio.h>

 int par(num) {
   return num % 2 == 0;
 }

int main(void) {
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);

  if (par(num)) {
    printf("%d é par", num);
  } else {
    printf("%d é ímpar", num);
  }
  
  return 0;
}
