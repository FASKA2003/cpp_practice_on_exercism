#include "rotational_cipher.h"
#include <cctype>

namespace rotational_cipher {
std::string rotate(std::string plain, int key) {
  std::string cipher;
  int offset;
  for (char ch : plain) {
    if (std::isalpha(ch)) {
      offset = std::islower(ch) ? 97 : 65;
      cipher += (char)((ch - offset + key) % 26 + offset);
    } else {
      cipher += (char)ch;
    }
  }
  return cipher;
}
} // namespace rotational_cipher
