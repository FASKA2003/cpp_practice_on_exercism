#include "secret_handshake.h"
#include <algorithm>
#include <bitset>
#include <ratio>
#include <string>

namespace secret_handshake {
std::vector<std::string> commands(int n) {
  std::vector<std::string> result;
  std::bitset<5> decimalBitset(n);
  if (decimalBitset.to_ulong() & 1) {
    result.push_back("wink");
  }
  if ((decimalBitset >> 1).to_ulong() & 1) {
    result.push_back("double blink");
  }
  if ((decimalBitset >> 2).to_ulong() & 1) {
    result.push_back("close your eyes");
  }
  if ((decimalBitset >> 3).to_ulong() & 1) {
    result.push_back("jump");
  }
  if ((decimalBitset >> 4).to_ulong() & 1) {
    std::reverse(result.begin(), result.end());
  }
  return result;
}
} // namespace secret_handshake
