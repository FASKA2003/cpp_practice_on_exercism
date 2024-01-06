#include "trinary.h"

namespace trinary {
  int to_decimal(std::string input) {
    int length = input.length();
    int result = 0, exp,val;
    for (int i = 0; i < length; i++) {
      val = input.at(i) - '0';
      exp = length - i - 1;
      if (val <= 2) {
        result += (int)(val * pow(3.0,exp)); 
      }
    }
    return result;
  }
}  // namespace trinary
