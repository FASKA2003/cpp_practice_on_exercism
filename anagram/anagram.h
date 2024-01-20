#include <string>
#include <vector>

namespace anagram {
  class anagram {
    std::string const seed;
  public:
    anagram(std::string const& subject) : seed{ subject } {}
    std::vector<std::string> matches(std::vector<std::string> const& candidates);
  };
}
