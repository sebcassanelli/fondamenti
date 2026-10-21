
int fattoriale(unsigned char val) {

  unsigned int i = 1, result = 1;
  while (i < val) {

    result = result * i;
    i++;
  }
  return result;
}

/*
int main(void) { return 0; }
*/