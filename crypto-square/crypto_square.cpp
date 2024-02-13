#include "crypto_square.h"
#include <cctype>
#include <cmath>
int getIndex(int size) {

  int index = 0;
  while ((index * (index + 1)) < size) {
    index++;
  }
  return index;
}

namespace crypto_square {
std::string cipher::normalize_plain_text() const {
  std::string normalized;
  for (char ch : this->original_text) {
    if (std::isalnum(ch)) {
      normalized += std::tolower(ch);
    }
  }
  return normalized;
}

std::string cipher::normalized_cipher_text() const {
  std::string text = this->cipher_text();

  size_t rows = ceil(sqrt(text.size()));
  size_t columns = floor(sqrt(text.size()));
  // n characters short of perfect rectangle
  size_t n = (rows * columns) - text.size();
  // Pad each of the last n chunks with a single trailing space
  for (size_t pos = columns * (rows - n + 1) - 1; pos <= text.size();
       pos += columns) {
    text.insert(pos, " ");
  }

  std::string result;
  for (size_t pos = 0; pos < text.size(); pos += columns) {
    std::string substring = text.substr(pos, columns);
    result += substring + ' ';
  }
  if (!result.empty())
    result.erase(result.size() - 1);
  return result;
}

std::string cipher::cipher_text() const {
  const std::vector<std::string> segments = this->plain_text_segments();
  if (segments.empty())
    return "";
  std::string result;
  for (size_t i = 0; i < segments[0].size(); i++) {
    for (const auto &segment : segments) {
      if (i < segment.size()) {
        result += segment[i];
      }
    }
  }
  return result;
}
std::vector<std::string> cipher::plain_text_segments() const {
  std::vector<std::string> ciphers;
  std::string normalized = normalize_plain_text();
  size_t width = ceil(sqrt(normalized.size()));
  for (size_t pos = 0; pos < normalized.size(); pos += width) {
    ciphers.emplace_back(normalized.substr(pos, width));
  }
  return ciphers;
}
} // namespace crypto_square
