#include "armstrong_numbers.h"

namespace armstrong_numbers {
bool is_armstrong_number(int num) {
  int sum = 0;
  std::ostringstream os;

  os << num;
  std::string digits = os.str();
  for (char ch : digits) {
    int value = ch - '0';
    sum += pow(value, (int)digits.length());
  }
  return (sum == num);
}
} // namespace armstrong_numbers
