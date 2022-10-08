#include <stdio.h>

int quociente(int a, int b) {
  if (a < b) {
    return 0;
  } else {
  return quociente(a - b, b) + 1;
  }
}

int main (void) {
  int a, b;

  printf("Insira o valor de A: ");
  scanf("%d", &a);

  do {
  printf("Insira o valor de B maior que 0: ");
  scanf("%d", &b);    
  } while (b <= 0);
  
  printf("quociente: %d", quociente(a, b));
  
  return 0; 
}
