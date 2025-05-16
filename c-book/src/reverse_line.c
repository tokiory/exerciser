#include "header.h"
#include "longest_line.h"
#include <stdio.h>

void reverse_the_line(char to[], char from[], int len) {
  for (int i = len - 1; i >= 0; i--) {
    to[len - i - 1] = from[i];
  }

  to[len] = '\0';
}

void reverse_line() {
  print_header("1.19",
               "Write a function reverse(s) that reverses the character string "
               "s. Use it to "
               "write a program that reverses its input a line at a time");
  char line[LONGEST_LINE_MAX_L];
  char reversed_line[LONGEST_LINE_MAX_L];
  int len = 0;

  while ((len = custom_getline(line, LONGEST_LINE_MAX_L)) > 0) {
    reverse_the_line(reversed_line, line, len - 1);
    printf("%s\n", reversed_line);
  }
}
