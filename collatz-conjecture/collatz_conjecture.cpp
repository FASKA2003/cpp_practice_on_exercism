#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture {
int steps(int number) {
  int counter = 0;
  if (number < 1) {
    throw std::domain_error("invalid_argument");
  }
  while (number > 1) {
    if (number % 2 == 0) {
      number /= 2;
      counter++;
    } else {
      number = 3 * number + 1;
      counter++;
    }
  }
  return counter;
}
} // namespace collatz_conjecture
