#include "rna_transcription.h"
#include <stdexcept>
#include <string>

namespace rna_transcription {
char to_rna(char DNA) {
  switch (DNA) {
  case 'A':
    return 'U';
    break;
  case 'C':
    return 'G';
    break;
  case 'G':
    return 'C';
    break;
  case 'T':
    return 'A';
    break;
  default:
    throw std::invalid_argument("Bad base DNA");
    break;
  }
}
std::string to_rna(std::string DNA) {
  std::string RNA;
  for (char ch : DNA) {
    RNA += rna_transcription::to_rna(ch);
  }
  return RNA;
}
} // namespace rna_transcription
