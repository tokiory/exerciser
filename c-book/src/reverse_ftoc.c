#include <stdio.h>
#include "header.h"
#include "ftoc.h"

void reverse_ftoc() {
  print_header("1.5", "Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0");

  printf("Fahrenheit\tCelsius\n");
  for (int i = 300; i >= 0; i -= 20) {
    printf("%d\t%.2f\n", i, toCelsius(i));
  }

  printf("\nCelsius\tFahrenheit\n");
  for (int i = 300; i >= 0; i -= 20) {
    printf("%d\t%.2f\n", i, toFahrenheit(i));
  }
}
