#if !defined(CRYPTO_SQUARE_H)
#define CRYPTO_SQUARE_H
#include <string>
#include <vector>

namespace crypto_square {
class cipher {
private:
  std::string original_text;

public:
  cipher(const std::string& input) : original_text{input} {} 
  
  std::string normalized_cipher_text() const;
  std::string cipher_text() const;
  std::vector<std::string> plain_text_segments() const;
  std::string normalize_plain_text() const;
};
} // namespace crypto_square

#endif // CRYPTO_SQUARE_H
