#include "queen_attack.h"
#include <utility>

namespace queen_attack {
chess_board::chess_board(const std::pair<int, int> &white,
                         const std::pair<int, int> &black) {
  if (white.first <= 0 || white.second <= 0 || black.first <= 0 ||
      black.second <= 0) {
    throw std::domain_error("Invalid argument");
  } else {
    this->white_.first = white.first;
    this->white_.second = white.second;
    this->black_.first = black.first;
    this->black_.second = black.second;
  }
}

bool chess_board::can_attack() const {
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
