#include <string.h>

int str_any(char s1[], char s2[]) {
  for (int s1_idx = 0; s1_idx < strlen(s1); s1_idx++) {
    for (int s2_idx = 0; s2_idx < strlen(s2); s2_idx++) {
      if (s1[s1_idx] == s2[s2_idx]) {
        return s1_idx;
      }
    }
  }

  return -1;
}
