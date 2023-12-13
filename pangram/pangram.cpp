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
/*
 *  The idea is to use set to store non redondant characters in the sentence,
 * because a set store unique elements. after that check for it's size is the
 * same as the numbers of alphabets in the english language.
 */
