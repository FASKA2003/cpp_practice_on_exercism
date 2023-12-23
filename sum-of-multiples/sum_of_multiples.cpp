#include "sum_of_multiples.h"
#include <numeric>

namespace sum_of_multiples {
unsigned int to(std::vector<unsigned int> BaseVec, unsigned int level) {
  unsigned int i = 0;
  std::set<unsigned int> points;
  for (auto it : BaseVec) {
    for (i = 1; i < level; i += it) {
      points.insert(i);
    }
  }
  return std::accumulate(points.begin(), points.end(), 0);
}
} // namespace sum_of_multiples
