#include "acronym.h"

namespace acronym {
std::string acronym(std::string input) {
  std::string result;
  bool flag = false;
  result += input[0];
  for (size_t i = 0; i < input.length(); i++) {
    if (flag) {
      result += toupper(input[i]);
      flag = false;
    }
    if ((input[i] == '_') || (input[i] == ' ') || (input[i] == '-')) {
      if (isalpha(input[i + 1])) {
        flag = true;
      }
    }
  }
  return result;
}
} // namespace acronym
