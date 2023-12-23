#include "sum_of_multiples.h"

namespace sum_of_multiples {
unsigned int to(std::vector<unsigned int> BaseVec, unsigned int level) {
  unsigned int i = 0, result = 0, product;
  std::set<unsigned int> points;
  for (auto it : BaseVec) {
    for (i = 1; i < level; i += it) {
      points.insert(i);
    }
  }
  result = sum(points);
  return result;
}
unsigned int sum(std::set<unsigned int> points) {
  unsigned int sum = 0;
  for (unsigned int it : points) {
    sum += (it);
  }
  return sum;
}
} // namespace sum_of_multiples
