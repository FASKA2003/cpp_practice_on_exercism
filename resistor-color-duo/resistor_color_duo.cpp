#include "resistor_color_duo.h"
#include <sstream>

std::map<std::string, int> Cmap = {
    {"black", 0}, {"brown", 1}, {"red", 2},    {"orange", 3}, {"yellow", 4},
    {"green", 5}, {"blue", 6},  {"violet", 7}, {"grey", 8},   {"white", 9}};

namespace resistor_color_duo {
int value(std::vector<std::string> input) {
  std::stringstream result;
  int returnVal;
  result << Cmap[input[0]];
  result << Cmap[input[1]];
  result >> returnVal;
  return returnVal;
}
} // namespace resistor_color_duo
