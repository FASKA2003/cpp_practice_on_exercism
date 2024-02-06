#include "diamond.h"

namespace diamond {
std::vector<std::string> rows(char letter) {
  int Index1 = (letter - 'A');
  int size = 2 * Index1 + 1;
  char nextChar = 'A';
  std::vector<std::string> diamond{};
  for (int i = Index1; i >= 0; i--) {
    std::string temp(size, ' ');
    temp[i] = temp[size - i - 1] = nextChar;
    nextChar++;
    diamond.push_back(temp);
  }
  for (int i = Index1 - 1; i >= 0; i--) {
    diamond.push_back(diamond.at(i));
  }
  return diamond;
}
} // namespace diamond
