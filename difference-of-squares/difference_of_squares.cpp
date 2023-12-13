#include "difference_of_squares.h"

namespace difference_of_squares {
int square_of_sum(int n) {
  int result = (n * (n + 1)) / 2;
  return result * result;
}
int sum_of_square(int n) {
  int result = (n * (n + 1) * (2 * n + 1)) / 6;
  return result;
}
int difference(int n) { return square_of_sum(n) - sum_of_square(n); }
} // namespace difference_of_squares
