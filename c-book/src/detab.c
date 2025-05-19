#include "detab.h"
#include "header.h"
#include "longest_line.h"
#include <stdio.h>

void detab() {
  print_header("1.20", "Write a program detab that replaces tabs in the input "
                       "with the proper number "
                       "of blanks to space to the next tab stop. Assume a "
                       "fixed set of tab stops, say every n columns.\n"
                       "Should n be a variable or a symbolic parameter?");

  int character;
  while ((character = getchar()) != EOF) {
    if (character == '\t') {
      printf("%*s", DETAB_TAB_SIZE, " ");
    } else {
      putchar(character);
    }
  }
}
