#include "header.h"
#include "longest_line.h"
#include <stdio.h>

void remove_line_blank(void) {
  print_header("1.18", "Write a program to remove trailing blanks and tabs "
                       "from each line of input, "
                       "and to delete entirely blank lines");
  char line[200];
  int len = 0;

  while ((len = custom_getline(line, 200)) > 0) {
    if (len == 1) {
      continue;
    }

    int start, end;
    // Traverse from the start
    for (start = 0; start < len; start++) {
      if (line[start] != ' ' && line[start] != '\t' && line[start] != '\n' &&
          line[start] != '\0') {
        break;
      }
    }

    // Traverse from the end
    for (end = len - 1; end >= start; end--) {
      if (line[end] != ' ' && line[end] != '\t' && line[end] != '\n' &&
          line[end] != '\0') {
        break;
      }
    }

    printf("\"");
    for (int i = start; i <= end; i++) {
      printf("%c", line[i]);
    }
    printf("\"");

    printf("\n");
  }
}
