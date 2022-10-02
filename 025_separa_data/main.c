#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void separaData(char data[11], int *dia, int *mes, int *ano) {
  char aux[5];  
  
  strncpy(aux, data, 2);
  *dia = atoi(aux);

  strncpy(aux, &data[3], 2);
  *mes = atoi(aux);

  strcpy(aux, &data[6]);
  *ano = atoi(aux);
}

int main (void) {
  int dia, mes, ano;
  char data[11];

  printf("Insira uma data no formato DD/MM/AAA: ");
  scanf("%s", data);
  
  separaData(data, &dia, &mes, &ano);

  printf("dia: %d\nmês: %d\nano: %d", dia, mes, ano);
  
  return 0;
}
