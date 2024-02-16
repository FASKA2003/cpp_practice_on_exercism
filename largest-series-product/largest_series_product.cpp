#include "largest_series_product.h"
#include <algorithm>
#include <cctype>
#include <stdexcept>

int get_product(std::string input, int baseI, int len) {
  int result = 1;
  for (int i = baseI; i < baseI + len; i++) {
    result *= (input[i] - '0');
  }
  return result;
}

namespace largest_series_product {
int largest_product(std::string text, int length) {
  if (text.empty() || (length <= 0)) {
    throw std::domain_error("Invalid argument.");
  }
  int result = 1, temp = 1;
  for (int i = 0; i < length; i++) {
    if (!std::isdigit(text[i])) {
      throw std::domain_error("Invalid argument");
    }
    result *= (text[i] - '0');
  }
  temp = result;
  for (int i = length; i < (int)text.length(); i++) {
    if (!std::isdigit(text[i])) {
      throw std::domain_error("Invalid argument");
    }
    int index = i - length + 1;
    temp = get_product(text, index, length);
    result = std::max(result, temp);
  }
  return result;
}
} // namespace largest_series_product
