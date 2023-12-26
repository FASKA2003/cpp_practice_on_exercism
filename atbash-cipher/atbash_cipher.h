#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H
#include <cctype>
#include <map>
#include <string>

namespace atbash_cipher {
std::string encode(std::string token);
std::string decode(std::string token);
} // namespace atbash_cipher

#endif // ATBASH_CIPHER_H
