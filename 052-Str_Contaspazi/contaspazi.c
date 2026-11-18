#include <stddef.h>
#include <string.h>

extern size_t contaspazi(const char *s) {
  size_t count = 0;
  size_t len = strlen(s);
  for (size_t i = 0; s[i] != '\0'; ++i) {
    if (s[i] == ' ') {
      ++count;
    }
  }
  return count;
}