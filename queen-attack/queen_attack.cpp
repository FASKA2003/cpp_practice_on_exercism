#include "queen_attack.h"
#include <utility>

namespace queen_attack {
chess_board::chess_board(const std::pair<int, int> &white,
                         const std::pair<int, int> &black) {
  if ((white.first < 1 || white.first > 7 || white.second < 1 ||
       white.second > 7) ||
      (black.second < 1 || black.second > 7 || black.first > 7)) {
    throw std::domain_error("Invalid argument.");
  }
  if (white == black) {
    throw std::domain_error("Invalid argument.");
  }
  this->white_ = white;
  this->black_ = black;
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
