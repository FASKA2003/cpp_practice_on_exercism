#include "isbn_verifier.h"
#include <cctype>

namespace isbn_verifier {
bool is_valid(std::string input) {
  int sum = 0, counter = 10, value;
  bool dash = false;
  for (char ch : input) {
    if (ch == 45) {
      dash = true;
    }
    if (std::isdigit(ch)) {
      value = ch - '0';
      sum += value * counter;
      counter--;
    }
  }
  value = input.length();
  if (dash && (value != 13))
    return false;
  if (!dash && (value != 10))
    return false;
  if (counter == 1) {
    if (input[value - 1] != 'X')
      return false;
    sum += 10;
  }
  return ((sum % 11) == 0);
}
} // namespace isbn_verifier
