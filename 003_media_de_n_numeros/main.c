#include <stdio.h>
#define N 5

int main(void) {

  int i;
  float media, valores[N];

  for (i = 0; i < N; i++){
    printf("Digite o valor %d: ", i + 1);
    scanf("%f", &valores[i]);
  }

  media = 0;
  for (i = 0; i < N; i++){
    media += valores[i];
  }
  media /= N;
  
  printf("média: %.2f", media);
  
  return 0;
}
