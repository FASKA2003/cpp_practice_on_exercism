#include "resistor_color.h"
#include <map>

std::map<std::string, int> Cmap = {
    {"black", 0}, {"brown", 1}, {"red", 2},    {"orange", 3}, {"yellow", 4},
    {"green", 5}, {"blue", 6},  {"violet", 7}, {"grey", 8},   {"white", 9}};

namespace resistor_color {
int color_code(std::string color) { return Cmap[color]; }
std::vector<std::string> colors() {
  std::vector<std::string> result = {
      "black", "brown", "red",    "orange", "yellow",
      "green", "blue",  "violet", "grey",   "white",
  };
  return result;
}
} // namespace resistor_color
