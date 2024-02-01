#include <stdexcept>

#include "perfect_numbers.h"

namespace perfect_numbers {

int aliquot_sum(const int n);

kind classify(int n) {
  int sum = aliquot_sum(n);

  if (sum == n)
    return perfect;

  return sum > n ? abundant : deficient;
}

int aliquot_sum(const int n) {
  if (n <= 0) {
    throw std::domain_error("number is not a positive integer");
  }
  if (n == 1) {
    return 0;
  }
  int sum{1};
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      sum += i;
      if (int add = n / i; add != i) {
        sum += add;
      }
    }
  }
  return sum;
}

} // namespace perfect_numbers
