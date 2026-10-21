#include <stdio.h>
#include <stdlib.h>

char massimo(char a, char b) {
  if (a > b) {
    printf("Il massimo tra a e b è: %d\n", a);
    return a;
  } else {
    printf("Il massimo tra a e b è: %d\n", b);
    return b;
  }
}

/*
int main(void) {
  char x, y, z;
  x = 2;
  y = massimo(-3, x);
  z = massimo(6, y);

  return 0;
}
*/
