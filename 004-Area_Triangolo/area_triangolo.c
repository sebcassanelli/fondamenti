#include <stdio.h>
#include <stdlib.h>

double area_triangolo(double base, double altezza) {
  if (base < 0 || altezza < 0) {
    return 0;
  }
  double area = base * altezza / 2;
  return area;
}

/*
int main(void) { return 0; }

*/
