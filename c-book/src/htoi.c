#include "htoi.h"
#include "header.h"
#include <string.h>
#include <math.h>

/*!
 * @brief Converts a hexadecimal character to an integer.
 * @param character The hexadecimal character to convert.
 * @return The integer value of the hexadecimal character.
 * @note Returns -1 if the input is invalid.
 */
int convert_hexchar(char character)
{
  if (character >= 'a' && character <= 'f')
    return character - 'a' + 10;

  if (character >= 'A' && character <= 'F')
    return character - 'A' + 10;

  if (character >= '0' && character <= '9')
    return character - '0';

  return -1;
}

int get_prefix_length(char character[HTOI_INT_LENGTH])
{
  if (character[0] == '#')
    return 1;

  if (character[0] == '0' && character[1] == 'x')
    return 2;

  return 0;
}

/*!
 * @brief Converts a hexadecimal string to an integer.
 * @param hex The hexadecimal string to convert.
 * @return The integer value of the hexadecimal string.
 * @note Returns -1 if the input is invalid.
 */
int htoi(char hex[HTOI_INT_LENGTH])
{
  print_header("2.3", "Write a function htoi(s), which converts a string of hexadecimal digits "
                      "(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 "
                      "through 9, a through f, and A through F");

  int prefix_len = get_prefix_length(hex);
  int hex_len = strlen(hex);
  if (!prefix_len)
    return -1;

  int conv_int = 0;

  for (int i = hex_len - 1; i >= prefix_len; i--)
  {
    int conv_char = convert_hexchar(hex[i]);
    if (conv_char == -1)
      break;
    int power_step = hex_len - 1 - i;
    conv_int += conv_char * pow(16, power_step);
  }

  return conv_int;
}
