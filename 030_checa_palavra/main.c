#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checaPalavra(char *palavra, char *frase) {
  int i, j, letrasEncontradas = 0;
  for (i = 0; i < strlen(frase); i ++) {
    if (tolower(palavra[letrasEncontradas]) == tolower(frase[i])) {
      letrasEncontradas ++;
      if (letrasEncontradas == strlen(palavra)) {
        return 1;
      } 
    }
  }
  return 0;
}

int main (void) {
  char palavra[40], frase[200];

  printf("Insira uma plavara: ");
  scanf("%s", palavra);

  printf("Insira uma frase: ");
  scanf("%s");
  scanf("%[^\n]", frase);

  if (checaPalavra(palavra, frase)) {
    printf("Palavra encontrada");
  } else {
    printf("Palavra não encontrada");
  }
  
  return 0;
}
