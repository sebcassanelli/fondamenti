#include <stdio.h>
#include <stdlib.h>

double square_dist(double x1, double y1, double x2, double y2) {
  double sqdx = (x2 - x1) * (x2 - x1);
  double sqdy = (y2 - y1) * (y2 - y1);
  return sqdx + sqdy;
}

/*
int main(void) {
  double a = 1.0, b = 2.0, c = 3.0, d = 4.0;
  double dist = square_dist(a, b, c, d);
  return 0;
}
*/