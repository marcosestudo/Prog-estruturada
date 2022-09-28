#include <stdio.h>

void fibonnacci(int n) {
  int i, anterior = 1, ultimo = 1, aux;

  if (n == 1) {
    printf("1\n");
  } else if (n == 2) {
    printf("1\n1\n");
  } else {
    printf("1\n1\n");
    for (i = 3; i <= n; i++) {
      aux = anterior + ultimo;
      anterior = ultimo;
      ultimo = aux;
      
      printf("%d\n", ultimo);
    }
  }  
}

int main(void) {
  float n;

  do {
    printf("Digite um número positivo: ");
    scanf("%f", &n);    
  } while (n <= 0);  

  fibonnacci(n);
  
  return 0;
}
