#include <string>

namespace log_line {
std::string message(std::string logMess) {
  int spaceIndex = logMess.find(" ");
  return logMess.substr(spaceIndex + 1);
}
std::string log_level(std::string logMess) {
  int braceIndex1 = logMess.find("[");
  int braceIndex2 = logMess.find("]");
  return logMess.substr(braceIndex1, braceIndex2 - 1);
}
std::string reformat(std::string logMess) {
  return log_line::message(logMess) + " (" + log_line::log_level(logMess) + ")";
}
} // namespace log_line
