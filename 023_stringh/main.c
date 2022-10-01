#include <stdio.h>
#include <string.h>

int main (void) {
  char vet1[50], vet2[50];

  /* 
  strcpy(dest, src)
  copia a string do segundo parâmetro para a do primeiro
  */ 
  strcpy(vet1, "palavra teste 1");

  printf("%s\n", vet1);
  printf("%s\n", vet2);
   
  /*
  strncpy(dest, src, n)
  copia somente os n primeiros caracteres do segundo parâmetro
  */
  strncpy(vet2, vet1, 7);

  printf("%s\n", vet2);


  /*
  strcat(dest, src)
  concatena a segunda string no final da primeira
  */  
  strcat(vet1, vet2);

  printf("%s\n", vet1);


  /* 
  strcmp(str1, str2)
  retorna 0 se as strings forem iguais
  */
  printf("%d\n", strcmp(vet1, vet2));
  

  /*
  strlen(str)
  retorna o tamanho da string, quando encrontra o "\0"
  */
  printf("%ld\n", strlen(vet1));

  
  return 0;
}