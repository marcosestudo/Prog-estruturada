#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define CONSTANTE 100

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

int mdcRecursivo(int x, int y)
{
    if(y == 0) 
      return x;
    else
      return mdcRecursivo(y, x%y);
}

int mdcIterativo(int x, int y) {
    int resto;

    do {
        resto = x % y;
        x = y;
        y = resto;
    } while (resto != 0);

    return x;
}


int mmcRecursivo(int x, int y) {
    int div;
    if (y == 0) 
      return x;
    else
      div = (x * y) / (mdcRecursivo(x, y));
    return (div); 
} 

int mmcIterativo(int x, int y) {
    int mmc, aux, i;

    for (i = 2; i <= y; i++) {
        aux = x * i;
        if ((aux % y) == 0) {
            mmc = aux;
            i = y + 1;
        }
    }
    return mmc;
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

void populaLista(int lista[N]) {
  int i;
  
  srand(time(NULL));
  
  for(i = 0; i < N; i ++) {
    lista[i] = rand() %10 + 1;
  }
}

void mostraLista(int lista[N]) {
  int i;
  for (i = 0; i < N; i ++) {
    printf("%d ", lista[i]);
  }
  printf("\n");
}

void ordenaLista(int lista[N]) {
  int i, k, aux;

  for (k = 0; k < N; k ++) {
    for(i = 0; i < N - 1; i ++) {
      if(lista[i] > lista[i + 1]) {
        aux = lista[i];
        lista[i] = lista[i + 1];
        lista[i + 1] = aux;
      }
    }
  }
}

void inverteLista(int lista[N]) {
  int i, aux[N];

  for(i = N - 1; i >= 0; i --) {
    aux[i] = lista[N - i - 1];
  }

  for(i = 0; i < N; i ++) {
    lista[i] = aux[i]; 
  }
}

