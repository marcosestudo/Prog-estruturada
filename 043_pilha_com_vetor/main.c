#include <stdio.h>

#define MAX 5

struct PILHA {
  int dado[MAX];
  int topo;
};
typedef struct PILHA pilha;

void push (pilha *P, int elemento) {
  if (P -> topo < MAX -1) {
    P -> topo += 1;
    P -> dado[P -> topo] = elemento;
  } else {
    printf("Pilha cheia\n");
  }  
}

int pop (pilha *P) {
  int aux;
  if (P -> topo > -1) {
    aux = P -> dado [P -> topo];
    P -> topo -= 1;
  } else {
    printf("Pilha vazia");
  }
  return aux;
}

void show (pilha P) {
  int i;
  if (P.topo > -1) {
    for (i = 0; i <= P.topo; i ++) {
      printf("%d ", P.dado[i]);
    }
  } else {
    printf("Pilha vazia");
  }
}

int main (void) {
  pilha P;
  // inicializando o topo da pilha com -1 pra sinalizar que ela está vazia
  P.topo = -1; 

  push(&P, 1);
  push(&P, 9);
  push(&P, 4);
  push(&P, 3);
  push(&P, 19);
  push(&P, 43);

  show(P);
  printf("\n");
  
  printf("%d\n", pop(&P));
  printf("%d\n", pop(&P));
  
  show(P);
  
  return 0;
}