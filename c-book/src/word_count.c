#include <stdio.h>
#include "header.h"
#ifndef IN_WORD
#define IN_WORD 1
#define OUT_WORD 2
#endif

void word_count(void) {
  print_header(
      "1.11",
      "How would you test the word count program? What kinds of input are most"
      "likely to uncover bugs if there are any?");

  short is_in_word = OUT_WORD;
  unsigned int count = 0;
  int character;

  while ((character = getchar()) != EOF) {
    if (character == '\n' || character == ' ' || character == '\t') {
      is_in_word = OUT_WORD;
      continue;
    }

    if (is_in_word == OUT_WORD) {
      is_in_word = IN_WORD;
      count++;
    }
  }

  printf("Word Count: %d", count);
}
