#include "darts.h"

namespace darts {
int score(double x, double y) {
  double norme = x * x + y * y;
  if (norme < 1) {
    return 10;
  }
  if (norme < 25) {
    return 5;
  }
  if (norme < 100) {
    return 1;
  }
  return 0;
}
} // namespace darts
