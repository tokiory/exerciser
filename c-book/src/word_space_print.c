#include "header.h"
#include <stdio.h>

void word_space_print() {
  int character;

  print_header("1.12",
               "Write a program that prints its input one word per line");
  while ((character = getchar()) != EOF) {
    if (character == ' ') {
      putchar('\n');
      continue;
    }

    putchar(character);
  }
}
