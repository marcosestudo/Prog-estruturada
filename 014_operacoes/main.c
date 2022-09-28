#include <stdio.h>

void menu (void) {
  printf("escolha uma operação:\n");
  printf("1 - soma\n");
  printf("2 - subtração\n");
  printf("3 - divisão\n");
  printf("4 - multipicação\n");
}

int checaOperando(op) {
  if (op == 1 || op == 2 || op == 3 || op == 4) {
    return 1;
  } else {
    return 0;
  }
}

float soma(float a, float b) {
  return a + b;
}

float sub(float a, float b) {
  return a - b;
}

float div(float a, float b) {
  return a / b;
}

float mult(float a, float b) {
  return a * b;
}

int main(void) {
  int op;
  float a, b;
  
  menu();
  scanf("%d", &op);

  if (checaOperando(op)) {
    printf("Insira o número A: ");
    scanf("%f", &a);
    printf("Insira o número B: ");
    scanf("%f", &b);
    
    switch (op) {
      case 1:
        printf("%.2f", soma(a, b));
        break;
      case 2:
        printf("%.2f", sub(a, b));
        break;
      case 3:
        printf("%.2f", div(a, b));
        break;
      case 4:
        printf("%.2f", mult(a, b));
        break;
    }
  }  
  
  return 0;
}
