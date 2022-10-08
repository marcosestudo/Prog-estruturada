#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 200 
#define INDEXINICIAL 0

int strLen (char *frase, int index) {
  if (frase[index] == '\0') {
    return index;
  } else {
    return strLen(frase, index + 1);
  }
}

int main (void) {
  int index = 0;
  char frase[TAM];
  
  printf("Insira uma frase ou plavra: ");
  scanf("%[^\n]", frase);

  printf("Len: %d", strLen(frase, INDEXINICIAL));
  
  return 0; 
}
