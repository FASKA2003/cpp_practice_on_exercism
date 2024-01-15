#include "etl.h"

namespace etl {
std::map<char, int> transform(std::map<int, std::vector<char>> old) {
  std::map<char, int> updated;
  std::map<int, std::vector<char>>::iterator i = old.begin();
  while (i != old.end()) {
    int index = i->first;
    std::vector<char> val = i->second;
    for (unsigned int j = 0; j < val.size(); j++) {
      updated.insert(std::pair<char, int>(std::tolower(val[j]), index));
    }
    i++;
  }
  return updated;
}
} // namespace etl
