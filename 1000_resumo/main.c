#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int multiplicacao (x, y) {
  if (y == 0) {
    return 0;
  } else {
    return mult(x, y-1) + x;
  }
}

int quociente(int x, int y) {
  if (x < y) {
    return 0;
  } else {
  return quociente(x - y, y) + 1;
  }
}

int fatorialRecursivo(int n) {
  if (n == 1) {
    return 1;
  } else {
    return fat(n - 1) * n;
  }
}

int fatorialIterativo(int n) {
  int i, fat = n;

  for (i = n - 1; i > 0; i--) {
    fat *= i;
  }
  return fat;
}

int fibonnacciRecursivo(int n) {                                         
  if (n == 1) 
    return 1;                   
  else if (n == 2) 
    return 1;                 
  else 
    return fibonnacci(n - 1) + fibonnacci(n - 2);  
} 

int fibonnacciIterativo(int n) {
  int i, anterior = 1, ultimo = 1, aux;

  if (n == 1 || n == 2) {
    return 1;
  } else {
    for (i = 3; i <= n; i++) {
      aux = anterior + ultimo;
      anterior = ultimo;
      ultimo = aux;
    }
    return ultimo;
  }  
}

void intToStr(void){
  // testando funcao sprintf
  char str [50];
  int x = 123456789;

  sprintf(str, "%d", x);

  printf("%s", str);
}

int palindromo(int num) {
  char numChar[6];
  int tamChar, i;
 
  sprintf (numChar, "%d", num) ;
  tamChar = strlen(numChar);
  
  for (i = 0; i < tamChar / 2; i++) {
    if (numChar[i] != numChar[tamChar - 1 - i])
    return 0;
  }
  return 1;
}

void doWhile(void) {
  float num;

  do {
    printf("Digite um número positivo: ");
    scanf("%f", &num);    
  } while (num > 0);  
}
