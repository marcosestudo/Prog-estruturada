#include <stdio.h>
#include <stdlib.h>

#define N 11

int ano(char data[N]) {
  int ano;
  ano = atoi(&data[6]);
  return ano;
}

int main (void) {
  char data[N];

  printf("Insira uma data no formato DD/MM/AAAA: ");
  scanf("%s", data);
  
  printf("Data: %s\n", data);
  printf("Ano: %d", ano(data));
      
  return 0;
}