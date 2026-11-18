#include <stdio.h>
#include <string.h>

extern size_t lunghezza(const char *str);

int main() {
  const char *s = "Ciao io sono una stringa di prova!";
  size_t l;
  l = lunghezza(s);
  printf("La lunghezza della stringa '%s' e' %zu\n", s, l);
  return 0;
}