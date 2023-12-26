#include "atbash_cipher.h"

std::map<char, char> AlphaMap = {
    {'a', 'z'}, {'b', 'y'}, {'c', 'x'}, {'d', 'w'}, {'e', 'v'}, {'f', 'u'},
    {'g', 't'}, {'h', 's'}, {'i', 'r'}, {'j', 'q'}, {'k', 'p'}, {'l', 'o'},
    {'m', 'n'}, {'n', 'm'}, {'o', 'l'}, {'p', 'k'}, {'q', 'j'}, {'r', 'i'},
    {'s', 'h'}, {'t', 'g'}, {'u', 'f'}, {'v', 'e'}, {'w', 'd'}, {'x', 'c'},
    {'y', 'b'}, {'z', 'a'}};

namespace atbash_cipher {
std::string encode(std::string token) {
  std::string result("");
  for (char letter : token) {
    if (letter != ' ') {
      result += AlphaMap[tolower(letter)];
    } else {
      result += ' ';
    }
  }
  return result;
}
std::string decode(std::string token) {
  std::string result;
  for (char letter : token) {
    if (letter != ' ') {
      result += AlphaMap[tolower(letter)];
    }
  }
  return result;
}
} // namespace atbash_cipher
