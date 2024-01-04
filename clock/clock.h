#include <ctime>
#if !defined(CLOCK_H)
#define CLOCK_H
#include <string>

namespace date_independent {
class clock {
  int m_minutes;
  int m_hours;

  clock(int hours, int minutes) : m_hours{hours}, m_minutes{hours} {}

public:
  static clock at(int hours, int minutes);
  operator std::string() const;
  clock plus(int minutes);
  bool operator==(clock c) const;
  bool operator!=(clock c) const;
};
} // namespace date_independent

#endif // CLOCK_H
