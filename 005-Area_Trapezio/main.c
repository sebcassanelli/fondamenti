#include <stdio.h>
#include <stdlib.h>

double area_trapezio(double B, double b, double h) {
  if (B < 0 || b < 0 || h < 0) {
    return 0;
  }
  double area = (B + b) * h / 2;
  return area;
}

/*
int main(void) { return 0; }
*/
