#if !defined(ROBOT_NAME_H)
#define ROBOT_NAME_H
#include <random>
#include <set>
#include <string>

namespace robot_name {
class robot {
  std::string Rname;

public:
  robot();
  std::string name() const;
  void reset();
};
} // namespace robot_name

#endif // ROBOT_NAME_H
