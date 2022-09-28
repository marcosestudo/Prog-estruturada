#include <stdio.h>

int fibonnacci(int n) {                                         
  if (n == 1) 
    return 1;                   
  else if (n == 2) 
    return 1;                 
  else 
    return fibonnacci(n - 1) + fibonnacci(n - 2);  
} 

int main(void) {
  float n;

  do {
    printf("Digite um número positivo: ");
    scanf("%f", &n);    
  } while (n <= 0);  

  printf("%d\n", fibonnacci(n));
  
  return 0;
}
