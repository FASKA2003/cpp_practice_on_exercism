#if !defined(FOOD_CHAIN_H)
#define FOOD_CHAIN_H
#include <cstddef>
#include <string>
#include <vector>

namespace food_chain {
std::string verse(std::size_t v);
std::string verses(std::size_t start, std::size_t end);
std::string sing();
} // namespace food_chain

#endif // FOOD_CHAIN_H
