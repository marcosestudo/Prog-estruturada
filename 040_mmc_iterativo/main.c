

#include <stdio.h>

int mmc(int num1, int num2) {

    int mmc, aux, i;

    for (i = 2; i <= num2; i++) {
        aux = num1 * i;
        if ((aux % num2) == 0) {
            mmc = aux;
            i = num2 + 1;
        }
    }
    return mmc;
}

int main(void) {
  
  printf("%d", mmc(7, 14));
  
  return 0;
}
