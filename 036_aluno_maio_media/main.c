#include <stdio.h>
#define NOTAS 4
#define MAX 100

struct tipoAluno {
  char nome[40];
  int ingresso;
  float notas[4];
};
typedef struct tipoAluno tAluno;

void preencheMedia(int n, float medias[MAX], tAluno alunos[MAX]) {
  int i, j;
  float soma;
  
  for (i = 0; i < n; i++) {
    soma = 0.0;
    for (j = 0; j < NOTAS; j++) {
      soma += alunos[i].notas[j];
    }
    medias[i] = soma / NOTAS;
  }
}

int main(void) {
  int i, j, n, indexMaior = 0;
  float medias[MAX], maior = 0.0;
  tAluno alunos[MAX];

  printf("Quantos alunos deseja cadastrar? ");
  scanf("%d", &n);
  
  for (i = 0; i < n; i++) {
    printf("Nome: ");
    scanf("%s");
    scanf("%[^\n]", alunos[i].nome);
    
    printf("Ano de ingresso: ");
    scanf("%d", &alunos[i].ingresso);

    for (j = 0; j < NOTAS; j++) {
      printf("Nota %d: ", j + 1);
      scanf("%f", &alunos[i].notas[j]);
    }
  }
  
  preencheMedia(n, medias, alunos);

  for (i = 0; i < n; i ++) {
    if (medias[i] > maior) {
      maior = medias[i];
    }
  }
  
  printf("----- Alunos -----\n");
  for (i = 0; i < n; i++) {
    printf("Nome: %s\n", alunos[i].nome);
    printf("Ingresso: %d\n", alunos[i].ingresso);
    printf("Notas: ");
    for (j = 0; j < NOTAS; j++) {
      printf("%.2f ", alunos[i].notas[j]);
    }
    printf("\n\n");
  }

  printf("----- Médias -----\n");
  for (i = 0; i < n; i++) {
    printf("%.2f ", medias[i]);
  }

  printf("\n\n");
  printf("----- Aluno(s) com maior mnédia -----\n"); 
  // em caso de empate, mostrará todos os empatados
  for (i = 0; i < n; i ++) {
    if (medias[i] == maior) {
      printf("%s\n", alunos[i].nome);
    }
  }
    
  return 0;
}