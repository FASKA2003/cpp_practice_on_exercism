#include "diamond.h"

namespace diamond {
  std::vector<std::string> rows(char letter) {
    int Index1 = (letter - 'A') , Index2 = Index1;
    int size = 2 * Index1 + 1;
    std::vector<std::string> diamond (size, std::string(size, ' '));
    for (int row = 0; row < size; row++) {
      for (int col = 0 ; col < size; col ++) { 
      }
    }
    return diamond;
  }
}  // namespace diamond
