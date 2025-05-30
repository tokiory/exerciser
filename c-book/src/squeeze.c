#include "header.h"

void squeeze(char s1[], char s2[])
{
  print_header("2.4", "Write an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2");

  int i, j;
  for (i = j = 0; s1[i] != '\0'; i++) {
    short found = 0;

    for (int k = 0; s2[k] != '\0'; k++) {
      if (s1[i] == s2[k]) {
        found = 1;
        break;
      }
    }

    if (found) {
      continue;
    }

    s1[j++] = s1[i];
  }

  s1[j] = '\0';
}
