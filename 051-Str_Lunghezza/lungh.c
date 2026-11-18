#include <string.h>

extern size_t lunghezza(const char *str) {
  const char *p = str;
  while (*p != 0) {
    ++p;
  }
  return p - str;
}
