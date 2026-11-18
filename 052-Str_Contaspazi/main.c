#include <stdio.h>
#include <stdlib.h>

extern size_t contaspazi(const char *);

int main() {
  const char *s = "Ciao io sono una stringa di prova!";
  size_t spazi = contaspazi(s);
  printf("Ci sono %zu spazi nella stringa '%s'\n", spazi, s);
  return 0;
}