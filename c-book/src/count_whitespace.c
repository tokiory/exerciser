#include <stdio.h>
#include "header.h"

void count_whitespace() {
  print_header("1.8", "Write a program to count blanks, tabs, and newlines.");

  printf("Write a lines and make EOF with \"Enter + Ctrl-d\"\n");

  unsigned int nl_count = 0, space_count = 0, tab_count = 0;
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      nl_count++;
    }

    if (c == ' ') {
      space_count++;
    }

    if (c == '\t') {
      tab_count++;
    }
  }

  printf("Tab count: %d\n", tab_count);
  printf("Newline count: %d\n", nl_count);
  printf("Space count: %d\n", space_count);
}
