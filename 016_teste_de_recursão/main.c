#include	<stdio.h>	

void rec(int n) {
  if (n > 0) {
    // trocando a ordem das duas linhas abaixo, teremos os números impressos do menor pro maior
    rec(n-1);
    printf("%d\n", n);
  }
}

int main (void)	{	
  rec(5);
  
return	0;
}
