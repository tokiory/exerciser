#include <stdio.h>
#include "header.h"
#include "print_long_line.h"

void clear_line(char line[], int len) {
  for (int i = 0; i < len; i++) {
    line[i] = '\0';
  }
}

void print_long_line() {
  print_header("1.17", "Write a program to print all input lines that are "
                       "longer than 80 characters");

  int character, idx = 0;
  char line[PRINT_LONG_LINE_MAX_LENGTH];

  while ((character = getchar()) != EOF) {
    line[idx++] = character;

    if (character == '\n') {
      line[idx] = '\0';

      if (idx >= PRINT_LONG_LINE_MIN_LENGTH) {
        printf("%s\n", line);
      }

      idx = 0;
      clear_line(line, PRINT_LONG_LINE_MAX_LENGTH);
    }
  }
}
