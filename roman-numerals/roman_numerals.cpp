#include "roman_numerals.h"

namespace roman_numerals {
std::string convert(int n) {
  std::stringstream output;
  for (int i = 0; i < 13; i++) {
    std::string roman = romans[i];
    int decimal = decimals[i];
    int quotient = n / decimal;
    n %= decimal;

    for (int j = 0; j < quotient; ++j) {
      output << roman;
    }
  }
  return output.str();
}
} // namespace roman_numerals
