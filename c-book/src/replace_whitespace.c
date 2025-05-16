#include <stdio.h>
#include "header.h"

#ifndef SPACING_IN
  #define SPACING_IN 1
  #define SPACING_OUT 0
  #define SPACE_CHAR ' '
#endif

void replace_whitespace() {
  print_header(
      "1.9", "Write a program to copy its input to its output, replacing each "
             "string of one or"
             "more blanks by a single blank");

  printf("Write a lines and make EOF with \"Enter + Ctrl-d\"\n");

  short is_spacing = SPACING_OUT;
  int character;

  while((character = getchar()) != EOF) {
    if (character == SPACE_CHAR) {
      is_spacing = SPACING_IN;
      continue;
    }

    if (is_spacing == SPACING_IN) {
      is_spacing = SPACING_OUT;
      putchar(SPACE_CHAR);
    }

    putchar(character);
  }
}
