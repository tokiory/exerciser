#include <stdio.h>
#include "header.h"

void print_header(char *n, char *name) {
  printf(HEADER_SPLIT);
  printf("Exersice: %s\n"
         "Name: %s\n",
         n, name);
  printf(HEADER_SPLIT "\n");
}
