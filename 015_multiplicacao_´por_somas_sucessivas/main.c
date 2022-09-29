#include	<stdio.h>	

int mult (x, y) {
  if (y == 0) {
    return 0;
  } else {
    return x + mult(x, y-1);
  }
}

int main	(void)	{	

  printf("%d", mult(2, 7));
  
return	0;
}
