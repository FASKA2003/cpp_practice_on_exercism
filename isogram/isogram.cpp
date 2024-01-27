#include "isogram.h"
#include <cctype>
#include <set>
#include <string>

namespace isogram {
bool is_isogram(std::string input) {
  std::set<char> elements;
  int counter = 0;
  for (char ch : input) {
    if (ch == ' ' || ch == '-') {
      counter++;
      continue;
    }
    ch = std::tolower(ch);
    elements.insert(ch);
  }
  return (elements.size() == (input.size() - counter));
}
} // namespace isogram
