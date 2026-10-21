
#include <stdio.h>
#include <stdlib.h>
// unsigned char is a variable that can store values from 0 to 255
unsigned char a, b, c;
int x;
double z1, z2;

// function that returns the sum of a and the product of b and c - demonstration
// for integer value operations
int fai_piu_per(int a, int b, int c) { return a + b * c; }

// function that returns the area of a triangle - demonstration for double
// variables
double area_triangolo(double base, double altezza) {
  return base * altezza / 2;
}

int main(void) {
  a = 255;
  b = 255;
  c = (a + b) / 2;

  x = fai_piu_per(3, 2, 5);
  x = fai_piu_per(13, 26, 59);

  z1 = area_triangolo(3.2, 5.7);
  z2 = area_triangolo(25.9, 5.21);
  return 0;
}
