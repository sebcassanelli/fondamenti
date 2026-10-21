#include <stdio.h>
#include <stdlib.h>

unsigned char bit_n(unsigned int val, unsigned char n) {
  // 1. Convert val to binary
  // 2. Use n to find the position of the bit of interest from position 0
  // (right) to position 31 (left)
  // 3. Return the value of the bit in the position of interest

  /*
  ES: 123 in binary:
  123/2 = 61 resto 1
  61/2 = 30 resto 1
  30/2 = 15 resto 0
  15/2 = 7 resto 1
  7/2 = 3 resto 1
  3/2 = 1 resto 1
  1/2 = 0 resto 1

  quindi:
  123 = 1111011

  n=0 -> 1
  n=1 -> 1
  n=2 -> 0
  n=3 -> 1
  n=4 -> 1
  n=5 -> 1
  n=6 -> 1

  */

  unsigned char bit;
  if (n == 0) {
    return val % 2;
  } else {
    while (n > 0) {
      bit = val % 2;
      val /= 2;
      n--;
    }
    return bit;
  }
}

/*
int main(void) {
  int v1 = 123;
  int v2 = 234324;
  int v3 = 0;
  int v4 = -50;

  printf("Bit n di %d: %d\n", v1, bit_n(v1, 0));
  printf("Bit n di %d: %d\n", v2, bit_n(v2, 1));
  printf("Bit n di %d: %d\n", v3, bit_n(v3, 2));
  printf("Bit n di %d: %d\n", v4, bit_n(v4, 3));

  return 0;
}
*/
