#include <stdio.h>
// unsigned char is a variable that can store values from 0 to 255
unsigned char a, b, c;
int x;

int fai_piu_per(int a, int b, int c) { return a + b * c; }

int main(void) {
  a = 255;
  b = 255;
  c = (a + b) / 2;
  x = fai_piu_per(3, 2, 5);
  x = fai_piu_per(13, 26, 59);

  return 0;
}
