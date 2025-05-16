#include "resistor_color.h"
#include <stdint.h>

// enum Color {
//   BLACK,
//   BROWN,
//   RED,
//   ORANGE,
//   YELLOW,
//   GREEN,
//   BLUE,
//   VIOLET,
//   GREY,
//   WHITE,
// };

int color_code(resistor_band_t c) {
  return c;
}

resistor_band_t* colors(void) {
  static resistor_band_t cols[] = {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE,
  };

  return cols;
}
