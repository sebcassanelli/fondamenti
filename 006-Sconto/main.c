#include <stdio.h>
#include <stdlib.h>

double prezzo_scontato(double prezzo_pieno, double sconto) {
  if (sconto < 0 || sconto > 100) {
    return 0;
  } else {
    return prezzo_pieno - (prezzo_pieno * sconto / 100);
  }
}

/*
int main(void) { return 0; }
*/
