#include "run_length_encoding.h"
#include <cctype>
#include <sstream>
#include <string>

namespace run_length_encoding {

std::string encode(std::string data) {
  if (data.empty())
    return "";

  std::stringstream encoded_data;
  int count = 1;
  for (size_t i = 1; i <= data.size(); ++i) {
    if (i < data.size() && data[i] == data[i - 1]) {
      ++count;
    } else {
      if (count > 1) {
        encoded_data << count;
      }
      encoded_data << data[i - 1];
      count = 1;
    }
  }
  return encoded_data.str();
}

std::string decode(std::string data) {
  if (data.empty())
    return "";

  std::stringstream decoded_data;
  std::string num = "";

  for (size_t i = 0; i < data.size(); ++i) {
    if (isdigit(data[i])) {
      num += data[i];
    } else {
      int count = num.empty() ? 1 : std::stoi(num);
      decoded_data << std::string(count, data[i]);
      num = "";
    }
  }
  return decoded_data.str();
}

} // namespace run_length_encoding
