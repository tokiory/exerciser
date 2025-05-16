#include <stdio.h>
#include "header.h"

float toCelsius(int fahr) { return (float)5 * (fahr - 32) / 9; }

float toFahrenheit(int celsius) { return (float)(9 * celsius + 160) / 5; }

void ftoc_table() {
  print_header("1.3", "Modify the temperature conversion program to print a heading above the table");
  print_header("1.4", "Write a program to print the corresponding Celsius to Fahrenheit table");

  int fahr, celsius;
  int lower = 0, upper = 300, step = 20;

  printf("Fahrenheit\tCelsius\n");

  fahr = lower;
  while (fahr <= upper) {
    printf("%d\t%.2f\n", fahr, toCelsius(fahr));
    fahr += step;
  }

  printf("\nCelsius\tFahrenheit\n");
  celsius = lower;
  while (celsius <= upper) {
    printf("%d\t%.2f\n", celsius, toFahrenheit(celsius));
    celsius += step;
  }
}
