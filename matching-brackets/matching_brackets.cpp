#include "matching_brackets.h"
#include <stack>

namespace matching_brackets {
bool check(std::string input) {
  std::stack<char> container;
  for (char ch : input) {
    if (container.empty()) {
      container.push(ch);
    } else if ((container.top() == '(' && ch == ')') ||
               (container.top() == '{' && ch == '}') ||
               (container.top() == '[' && ch == ']')) {
      container.pop();
    } else {
      container.push(ch);
    }
  }
  if (container.empty()) {
    return true;
  }
  return false;
}
} // namespace matching_brackets
