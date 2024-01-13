#include "word_count.h"
#include <sstream>

namespace word_count {
std::stringstream streamify(std::string phrase) {
  std::stringstream ss;
  for (auto ch : phrase) {
    if (std::isalnum(ch)) {
      ss << static_cast<char>(std::tolower(ch));
    } else if (ch == '\'') {
      ss << ch;
    } else {
      ss << ' ';
    }
  }
  return ss;
}
std::string unwrap(std::string &word) {
  unsigned int wrapping_char_total = 2;
  if (word[0] == '\'' && word[word.length() - 1] == '\'') {
    return word.substr(1, word.length() - wrapping_char_total);
  }
  return word;
}
std::map<std::string, int> words(std::string phrase) {
  std::map<std::string, int> word_counter;
  auto streamer = streamify(phrase);
  std::string word;
  while (streamer >> word) {
    word = unwrap(word);
    word_counter[word]++;
  }
  return word_counter;
}
} // namespace word_count
