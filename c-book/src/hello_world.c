#include <stdio.h>
#include "header.h"

void hello_world() {
  print_header(
      "1.1",
      "Run the `hello, world` program on your system. Experiment with leaving "
      "out parts of the program, to see what error messages you get");
  printf("Hello, world!\n");
}
