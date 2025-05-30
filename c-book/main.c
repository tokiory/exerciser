#include <stdio.h>

// Exercises
#include "bin_search.h"
#include "character_amount.h"
#include "count_whitespace.h"
#include "detab.h"
#include "entab.h"
#include "eof_print.h"
#include "ftoc.h"
#include "hello_world.h"
#include "htoi.h"
#include "input_histogram.h"
#include "is_eof.h"
#include "longest_line.h"
#include "print_long_line.h"
#include "printable_whitespace.h"
#include "remove_line_blank.h"
#include "replace_whitespace.h"
#include "reverse_ftoc.h"
#include "reverse_line.h"
#include "squeeze.h"
#include "str_any.h"
#include "word_count.h"
#include "word_space_print.h"

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf("%d\n", bin_search(arr, 10, 11));
  return 0;
}
