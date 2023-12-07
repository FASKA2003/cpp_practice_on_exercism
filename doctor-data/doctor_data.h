#include <string>

namespace star_map {
enum class System { BetaHydri, EpsilonEridani };
}

namespace heaven {
class Vessel {
public:
  star_map::System current_system{};
  int generation{};
  int busters{0};
  std::string name{};
  Vessel(std::string name, int num);
  Vessel(std::string name, int num, star_map::System systype);
  heaven::Vessel replicate(std::string name);
  void make_buster();
  bool shoot_busters();
};
std::string get_older_bob(Vessel obj1, Vessel obj2);
bool in_the_same_system(Vessel obj1, Vessel obj2);
} // namespace heaven
/ namespace heaven
