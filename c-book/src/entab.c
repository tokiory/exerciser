#include "entab.h"
#include "header.h"
#include "longest_line.h"
#include <stdio.h>

void entab() {
  print_header(
      "1.21",
      "Write a program entab that replaces strings of blanks by the minimum "
      "number of tabs and blanks to achieve the same spacing. Use the same tab "
      "stops as for detab.\n"
      "When either a tab or a single blank would suffice to reach a tab stop, "
      "which should be given"
      "preference?");

  const int LENGTH = 200;
  char line[LENGTH];
  char formatted_line[LENGTH];
  int input_length = 0;

  while ((input_length = custom_getline(line, LENGTH)) != 0) {
    int spaces = 0;
    int formatted_line_cursor = 0;

    for (int i = 0; i < LENGTH; i++) {
      formatted_line[i] = '\0';
    }

    for (int i = 0; i < input_length; i++) {
      if (line[i] == ' ') {
        spaces++;

        if (spaces == ENTAB_TAB_SIZE) {
          formatted_line[formatted_line_cursor++] = '\t';
          spaces = 0;
        }

        continue;
      }

      for (int j = 0; j < spaces; j++) {
        formatted_line[formatted_line_cursor++] = ' ';
      }
      spaces = 0;

      formatted_line[formatted_line_cursor++] = line[i];
    }

    printf("%s", formatted_line);
  }

}
