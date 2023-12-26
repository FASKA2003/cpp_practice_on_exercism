#include "atbash_cipher.h"

namespace atbash_cipher {

#define NUM_LETTERS 25

std::string encode(std::string text) {
  std::string res;
  int cnt = 0;
  for (auto &c : text) {
    if (!isalnum(c))
      continue;

    if (cnt == 5) {
      cnt = 0;
      res += ' ';
    }
    if (isdigit(c))
      res += c;
    else
      res += (NUM_LETTERS - (tolower(c) - 'a')) + 'a';
    ++cnt;
  }
  return res;
}

std::string decode(std::string text) {
  std::string res;
  for (auto &c : text) {
    if (c == ' ')
      continue;

    if (isdigit(c))
      res += c;
    else
      res += 'a' + (NUM_LETTERS - (tolower(c) - 'a'));
  }
  return res;
}

} // namespace atbash_cipher
