#include "longest_line.h"
#include "header.h"
#include <stdio.h>

void longest_line() {
  print_header("1.16", "Revise the main routine of the longest-line program so "
                       "it will correctly print "
                       "the length of arbitrary long input lines, and as much "
                       "as possible of the text");

  char line[LONGEST_LINE_MAX_L];
  char max_line[LONGEST_LINE_MAX_L];
  int len, max = 0;

  while ((len = custom_getline(line, LONGEST_LINE_MAX_L)) > 0) {
    if (len > max) {
      max = len;
      copy(max_line, line);
    }
  }

  if (max > 0) {
    printf("The longest line [%d] is: %s", max - 1, max_line);
  } else {
    printf("There's no lines");
  }
}

int custom_getline(char s[], int limit) {
  int character, idx = 0;

  for (; idx < limit - 1 && (character = getchar()) != EOF && character != '\n';
       idx++) {
    s[idx] = character;
  }

  if (character == '\n') {
    s[idx] = '\n';
    idx++;
  }

  s[idx] = '\0';
  return idx;
}

void copy(char to[], char from[]) {
  int i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
