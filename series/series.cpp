#include "series.h"

namespace series {
std::vector<std::string> slice(std::string number, int len) {
  std::vector<std::string> result;
  int strLen = number.length();
  if ((strLen < len) || (len <= 0) || (number.empty())) {
    throw std::domain_error("Invalid input.");
  }
  for (int i = 0; i + len <= strLen; i++) {
    result.push_back(number.substr(i, len));
  }
  return result;
}
} // namespace series
