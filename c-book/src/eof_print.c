#include <stdio.h>
#include "header.h"

void print_eof() {
  print_header("1.7", "Write a program to print the value of EOF");
  printf("%d, %c", EOF, EOF);
}
