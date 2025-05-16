#include <stdio.h>
#include "header.h"

int is_eof() {
  print_header("1.6", "Verify that the expression getchar() != EOF is 0 or 1");

  return getchar() == EOF;
}
