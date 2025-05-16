#include "stdio.h"
#include "header.h"

void printable_whitespace() {
  print_header("1.10", "Write a program to copy its input to its output, "
                       "replacing each tab by \\t, each "
                       "backspace by \\b, and each backslash by \\. This makes "
                       "tabs and backspaces visible in an "
                       "unambiguous way");

  printf("Write a lines and make EOF with \"Enter + Ctrl-d\"\n");

  int character;

  while ((character = getchar()) != EOF) {
    if (character == '\t') {
      printf("\\t");
      continue;
    }

    if (character == '\b') {
      printf("\\b");
      continue;
    }

    if (character == '\\') {
      putchar('\\');
      continue;
    }

    putchar(character);
  }
}
