#include "binary.h"

namespace binary {
int convert(std::string& input) {
  int sum = 0, counter = input.length();
  for (char ch : input) {
    int value = ch - '0';
    if (value > 1 || value < 0) {
      return 0;
    }
    sum += value * pow(2, --counter);
  }
  return sum;
}
} // namespace binary
