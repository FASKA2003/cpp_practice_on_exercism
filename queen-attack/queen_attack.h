#include <stdexcept>
#include <utility>
#include <valarray>
#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

namespace queen_attack {
class chess_board {
public:
  std::pair<int, int> white_;
  std::pair<int, int> black_;
  chess_board(const std::pair<int, int> &white,
              const std::pair<int, int> &black)
      : white_(white), black_(black) {}
  std::pair<int, int> white() const { return white_; }
  std::pair<int, int> black() const { return black_; }
  bool can_attack() const;
};
} // namespace queen_attack

#endif // QUEEN_ATTACK_H
