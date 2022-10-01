#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LIN 5
#define COL 10

void preencheMatriz(char matriz[LIN][COL]) {
  int i, j;
  for (i = 0; i < LIN; i ++) {
    printf("insira o código do produto %d: ", i + 1);
    scanf("%s", &matriz[i][0]);
    printf("insira o valor do produto %d: ", i + 1);
    scanf("%s", &matriz[i][3]);    
  }
}

void codMaisCaro(char matriz[LIN][COL]) {
  int i, j;
  char maior[4];
  
  for (j = 0; j < 3; j++) {
    maior[j] = matriz[0][j];
  }
  maior[3] = '\0';
  
  for (i = 0; i < LIN - 1; i++) {
    /* testes
    printf("teste %d: %d\n", i, atof(&matriz[i + 1][3]) > atof(&matriz[i][3]));
    printf("%.2f, %.2f\n", atof(&matriz[i + 1][3]), atof(&matriz[i][3]));
    */
    if (atof(&matriz[i + 1][3]) > atof(&matriz[i][3])) {
      for (j = 0; j < 3; j++) {
        maior[j] = matriz[i + 1][j];
      }
      maior[3] = '\0';
    }  
  }
  
  printf("Maior: %s\n", maior);
}

int main(void) {
  char matrizCodPreco[LIN][COL];

  preencheMatriz(matrizCodPreco);
  
  codMaisCaro(matrizCodPreco);
    
  return 0;
}
