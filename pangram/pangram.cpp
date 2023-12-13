#include "pangram.h"
#include <cctype>
#include <iterator>

namespace pangram {
bool is_pangram(std::string sentence) {
  std::set<char> valSet;
  for (auto ch : sentence) {
    if (ch >= 'a' && ch <= 'z') {
      valSet.insert(ch);
    }
    if (ch >= 'A' && ch <= 'Z') {
      ch = std::tolower(ch);
      valSet.insert(ch);
    }
  }
  return (valSet.size() == 26);
}
} // namespace pangram
