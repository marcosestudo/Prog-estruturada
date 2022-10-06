#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 10
  
int main (void) {
  int i, index = 0, palindromo, palindromos[N];
  char strNum[40];

  printf("Insira um número inteiro ou insira -1 para sair: ");
  scanf("%s", strNum);

  while (atoi(strNum) != -1) {
    for (i = 0; i < strlen(strNum) / 2; i ++) {
      if (strNum[i] != strNum[strlen(strNum) - i - 1]) {
        palindromo = 0;
      };
    }
    if (palindromo == 1) {
      palindromos[index] = atoi(strNum);
      index++;
    } else {
      palindromo = 1;
    }
    printf("Insira um número inteiro ou nsira -1 para sair: ");
    scanf("%s", strNum);
  }
  
  for (i = 0; i < index; i ++) {
    printf("%d ", palindromos[i]);
  }

  return 0;
}
