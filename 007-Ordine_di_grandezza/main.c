#include <stdio.h>
#include <stdlib.h>

char max_pot10(unsigned int val) {
  char n;

  if (val == 0) {
    return -1;
  } else {
    n = 0;
    while (val > 1) {
      val /= 10;
      n++;
    }
  }
  return n;
}

/*
int main(void) {
  int v1 = 123;
  printf("%d\n", max_pot10(v1));

  int v2 = 123456;
  printf("%d\n", max_pot10(v2));

  int v3 = 1;
  printf("%d\n", max_pot10(v3));

  return 0;
}
*/