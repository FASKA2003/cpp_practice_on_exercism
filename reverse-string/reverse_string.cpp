#include "reverse_string.h"
#include <string>

namespace reverse_string {
std::string reverse_string(std::string operand) {
  int StrLen = operand.length();
  char *reverArray = new char[StrLen];
  for (int i = 0; i < StrLen - 1; i++) {
    reverArray[i] = operand[StrLen - i - 1];
  }
  std::string result = reverArray;
  return result;
}
} // namespace reverse_string
