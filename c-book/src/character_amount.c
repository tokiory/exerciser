#include "character_amount.h"
#include "header.h"
#include <stdio.h>

int get_char_idx(int character) {
  if (character >= 'A' && character <= 'Z') {
    return character - 'A';
  }

  return character - 'a';
}

void character_amount() {
  print_header("1.14", "Write a program to print a histogram of the "
                       "frequencies of different characters in its input");

  int character;
  int amounts[CHARACTER_AMOUNT];

  for (int i = 0; i < CHARACTER_AMOUNT; i++) {
    amounts[i] = 0;
  }

  while ((character = getchar()) != EOF) {
    putchar(character);

    if ((character >= 'A' && character <= 'Z') ||
        (character >= 'a' && character <= 'z')) {
      amounts[get_char_idx(character)]++;
    }
  }

  for (int i = 0; i < CHARACTER_AMOUNT; i++) {
    printf("|%c: %d|\t", 'a' + i, amounts[i]);
    if ((i + 1) % 7 == 0) {
      printf("\n");
    }
  }
  printf("\n");
}
