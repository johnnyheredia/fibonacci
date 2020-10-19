#include <stdio.h>

int main(void) {

  printf("Imprimiendo serie Fibonacci:\n");
  int x = 0;
  int y = 1;
 

  for (int i = 0; i < 9; i++)
  {
    printf("%i \n", x);
    x = x + y;
    y = x - y;
  }
  return 0;
}