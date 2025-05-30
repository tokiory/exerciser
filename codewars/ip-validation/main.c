#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const unsigned int PARTS = 4;
const unsigned int MAX_PART_LEN =
    25; // Formally 24, 'cause one for string terminator

// TODO: Fuck, I should have done this with strtok or regex
bool is_valid_ip(const char *addr) {

  if (addr == NULL || strlen(addr) == 0) {
    return false;
  }

  unsigned short part = 0, part_el_idx = 0;
  char **tokens = (char **)malloc(sizeof(char *) * PARTS);

  for (unsigned short i = 0; i < PARTS; i++) {
    tokens[i] = (char *)malloc(sizeof(char) * MAX_PART_LEN);
  }

  for (unsigned int i = 0; i < strlen(addr); i++) {
    if (part >= PARTS) {
      return false;
    }

    if (!((addr[i] >= '0' && addr[i] <= '9') || addr[i] == '.')) {
      return false;
    }

    if (addr[i] == '.') {
      tokens[part++][part_el_idx] = '\0';
      part_el_idx = 0;
      continue;
    }

    tokens[part][part_el_idx++] = addr[i];
  }

  part++;

  if (part != 4) {
    return false;
  }

  for (unsigned short i = 0; i < PARTS; i++) {
    char *word = tokens[i];
    unsigned short word_length = strlen(word);

    if (word_length == 0) {
      return false;
    }

    if (word_length > 1 && word[0] == '0') {
      return false;
    }

    int num = atoi(word);

    if (num < 0 || num > 255) {
      return false;
    }
  }

  free(tokens);
  return true;
}

int main() {
  printf("%d\n", is_valid_ip("1.2.3.4.5"));
  return 0;
}
