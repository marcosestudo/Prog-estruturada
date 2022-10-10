#include <stdio.h>

int fat(int n) {
  int i, fat = n;

  for (i = n - 1; i > 0; i--) {
    fat *= i;
  }
  return fat;
}

int main(void) {
  float n;

  do {
    printf("Digite um número positivo: ");
    scanf("%f", &n);    
  } while (n <= 0);  

  printf("%d", fat(n));
  
  return 0;
}
