#include "robot_name.h"
#include <cstdlib>

namespace robot_name {
  robot::robot() {
    reset();
  }
  void robot::reset() {
    Rname = "RC123";
    for (int i = 0; i < 6; i++) {
      if (i < 2)
	Rname[i] = 'A' + rand() % 26;
      else
	Rname[i] = '0' + rand() % 10;
    }
  }
  std::string robot::name() const {
    return Rname;
  }
}

