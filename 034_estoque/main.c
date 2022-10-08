#include <stdio.h>
#include <string.h>

struct tipoEstoqueMensal {
  char nomeProduto[40];
  int estoqueDiario[31];
  int maior;
  int menor;
  float media;
};
typedef struct tipoEstoqueMensal tEstoqueMensal;

void estoque(char *nome, int dias, tEstoqueMensal *produto) {
  int i, maior = 0, menor = 100000, soma = 0;

  for(i = 0; i < dias; i++) {
    if (produto -> estoqueDiario[i] > maior) {
      maior = produto -> estoqueDiario[i]; 
    }
    if (produto -> estoqueDiario[i] < menor) {
      menor = produto -> estoqueDiario[i];
    }
    soma += produto -> estoqueDiario[i];
  }
  produto -> maior = maior;
  produto -> menor = menor;
  produto -> media = soma * 1.0 / dias;
}

int main (void) {
  int i, dias;
  tEstoqueMensal produto1;
  
  printf("Quantos dias o mês possui? ");
  scanf("%d", &dias);

  printf("Nome do produto: ");
  scanf("%s");
  scanf("%[^\n]", produto1.nomeProduto);
  
  for (i = 0; i < dias; i++) {
    printf("Quantidade no dia %d: ", i + 1);
    scanf("%d", &produto1.estoqueDiario[i]);
  }
  
  estoque("nome", dias, &produto1);

  printf("Estoque diário: ");
  for (i = 0; i < dias; i++) {
    printf("%d ", produto1.estoqueDiario[i]);
  }

  printf("\n");
  printf("Nome: %s\n", produto1.nomeProduto);
  printf("Maior: %d\n", produto1.maior);
  printf("Menor: %d\n", produto1.menor);
  printf("Media: %.2f\n", produto1.media);
  
  return 0; 
}
