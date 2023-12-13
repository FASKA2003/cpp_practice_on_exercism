#include <map>
#include <string>
#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

namespace nucleotide_count {

std::map<char, int> count(std::string DNA);

} // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H
