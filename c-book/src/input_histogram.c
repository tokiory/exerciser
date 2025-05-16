#include <stdio.h>
#include "header.h"

#ifndef HISTOGRAM_SYMBOL
#define HISTOGRAM_MAX_WORDS 25
#define HISTOGRAM_MAX_WORD_LENGTH 20
#define HISTOGRAM_SYMBOL "█"
#endif

void horizontal_input_histogram() {
  print_header("1.13", "Write a program to print a histogram of the lengths of "
                       "words in its input. It is"
                       "easy to draw the histogram with the bars horizontal; a "
                       "vertical orientation is more challenging");

  int character;
  int word_idx = 0;
  int words_len[HISTOGRAM_MAX_WORDS] = {};

  for (int i = 0; i < HISTOGRAM_MAX_WORDS; i++) {
    words_len[i] = 0;
  }

  while ((character = getchar()) != EOF) {
    if (character == ' ' || character == '\t' || character == '\n') {
      word_idx++;
    } else {
      words_len[word_idx]++;
    }
  }

  for (int i = 0; i < HISTOGRAM_MAX_WORDS; i++) {
    if (words_len[i] == 0) {
      break;
    }

    printf("[%d]: ", i);
    for (int j = 0; j < words_len[i]; j++) {
      printf(HISTOGRAM_SYMBOL);
    }
    printf("\n");
  }
}

void vertical_input_histogram() {
  print_header("1.13", "Write a program to print a histogram of the lengths of "
                       "words in its input. It is"
                       "easy to draw the histogram with the bars horizontal; a "
                       "vertical orientation is more challenging");

  int character;
  int word_idx = 0;
  int words_len[HISTOGRAM_MAX_WORDS] = {};

  for (int i = 0; i < HISTOGRAM_MAX_WORDS; i++) {
    words_len[i] = 0;
  }

  while ((character = getchar()) != EOF) {
    if (character == ' ' || character == '\t' || character == '\n') {
      word_idx++;
    } else {
      words_len[word_idx]++;
    }
  }

  int longest_word = 0;

  for (int i = 0; i < HISTOGRAM_MAX_WORDS; i++) {
    if (words_len[i] == 0) {
      break;
    }

    if (words_len[i] > longest_word &&
        words_len[i] <= HISTOGRAM_MAX_WORD_LENGTH) {
      longest_word = words_len[i];
    }
  }

  for (int i = 0; i < longest_word; i++) {
    for (int j = 0; j < HISTOGRAM_MAX_WORDS; j++) {
      if (words_len[j] == 0) {
        break;
      }

      printf("%s ", (words_len[j] >= longest_word - i) ? HISTOGRAM_SYMBOL : " ");
    }
    printf("\n");
  }
}
