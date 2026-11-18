#include "cerca.h"
#include <stdio.h>
#include <string.h>

int main(void) {
  const char *s = "Ciao a me piacciono le aiuole";
  char c = 'a';
  printf("La prima occorrenza di '%c' in '%s' e' all'indice %d\n", c, s,
         cerca_primo(s, c));

  return 0;
}
