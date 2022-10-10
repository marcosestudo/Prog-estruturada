#include <stdio.h>

int fat(int n) {
  if (n == 1) {
    return 1;
  } else {
    return fat(n - 1) * n;
  }
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
