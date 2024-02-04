#include "pop_count.h"

namespace chicken_coop {
int positions_to_quantity(unsigned long num) {
  std::bitset<64> number(num);
  return number.count();
}
} // namespace chicken_coop
