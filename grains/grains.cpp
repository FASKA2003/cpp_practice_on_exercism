#include "grains.h"

namespace grains {
long long unsigned int square(unsigned int squareNum) {
  return (long long unsigned int)std::pow(2, squareNum - 1);
}
long long unsigned int total() {
  long long unsigned int sum = 0;
  for (int i = 1; i <= 64; i++) {
    sum += square(i);
  }
  return sum;
}
} // namespace grains
