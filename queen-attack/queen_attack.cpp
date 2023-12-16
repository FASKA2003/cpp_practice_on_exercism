#include "queen_attack.h"
#include <utility>

namespace queen_attack {
bool chess_board::can_attack() const {
  if (white().first <= 0 || white().second <= 0 || black().first <= 0 ||
      black().second <= 0) {
    throw std::domain_error("Invalid argument");
  }
  if (white().first == black().first || white().second == black().second) {
    return true;
  }
  if (std::abs(white().first - black().first) ==
      std::abs(white().second - black().second)) {
    return true;
  }
  return false;
}
} // namespace queen_attack
