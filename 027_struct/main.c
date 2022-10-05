#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define N 10

struct tipoPonto {
  int x;
  int y;
};
typedef struct tipoPonto tPonto;

void somaPonto(tPonto a, tPonto b, tPonto *c) {
  c -> x = a.x + b.x;
  c -> y = a.y + b.y;
}

int main (void) {
  tPonto a, b, c;

  printf("Insira os valors x e y do ponto a: ");
  scanf("%d %d", &a.x, &a.y);

  printf("Insira os valors x e y do ponto b: ");
  scanf("%d %d", &b.x, &b.y);
  
  somaPonto(a, b, &c);

  printf("c.x: %d, c.y: %d", c.x, c.y);
  
  return 0;
}
