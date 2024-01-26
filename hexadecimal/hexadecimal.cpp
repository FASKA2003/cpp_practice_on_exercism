#include "hexadecimal.h"

std::map<char, int> hMAP=  {
  {'1',1},{'2',2},{'3',3},{'4',4},{'5',5},
  {'6',6},{'7',7},{'8',8},{'9',9},{'a',10},
  {'b',11},{'c',12},{'d',13},{'e',14},{'f',15}
};

namespace hexadecimal {
  int convert(std::string input) {
    int sum = 0, counter = input.length();
    for (char ch:input) {
      int value = hMAP.at(ch);
      sum += value * pow(16, --counter);
    }
    return sum;
  }
}  // namespace hexadecimal
